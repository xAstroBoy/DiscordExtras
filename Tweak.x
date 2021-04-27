#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MRYIPCCenter.h>

#define BUNDLE_PATH @"/Library/Application Support/DiscordExtrasFiles.bundle"
#define CACHE_PATH [NSHomeDirectory() stringByAppendingString:@"/Library/Caches/"]
#define PATCHED_PATH [CACHE_PATH stringByAppendingString:@"patched.jsbundle"]
#define PATCHES_FOLDER [BUNDLE_PATH stringByAppendingString:@"/patches"]

// Clear the cached jsbundle files + the patched jsbundle file on startup
void clearPatches() {
	NSLog(@"[DiscordExtras] Clearing cached files...");

	[[NSFileManager defaultManager] removeItemAtPath:PATCHED_PATH error:nil];
	NSArray* files = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:CACHE_PATH error:NULL];

	for (NSString *file in files) {
		if ([file containsString:@"main.jsbundle."]||[file containsString:@"manifest.json."]) {
			[[NSFileManager defaultManager] removeItemAtPath:[CACHE_PATH stringByAppendingString:file] error:nil];
		}
	}
}

// Create our patched bundle file and return the path to it
NSURL* createBundleFile(NSURL *originalBundle) {
	@try {
		MRYIPCCenter *center = [MRYIPCCenter centerNamed:@"moe.panties.discordextrasserver"];
		NSString *result = [center callExternalMethod:@selector(executeJSbundleTools:) withArguments:@{
			@"bundlePath": originalBundle.path,
			@"patchedPath": PATCHED_PATH,
			@"patchesPath": PATCHES_FOLDER
		}];

		if ([result isEqualToString:@"error"]) {
			NSLog(@"[DiscordExtras] Error creating patched jsbundle, using default one instead.");
			return originalBundle;
		}

		NSLog(@"[DiscordExtras] Patched jsbundle was created!");
		return [[NSURL alloc] initFileURLWithPath:result];
	} @catch(NSException *exception) {
		NSLog(@"[DiscordExtras] Something went really fucking wrong.");
		return originalBundle;
	}
}

%hook AppDelegate

- (id)sourceURLForBridge:(id)arg1 {
	id original = %orig;

	NSURL *jsBundlePath = original;
	NSURL *patchedBundlePath;

	NSLog(@"[DiscordExtras] Original path: %@", jsBundlePath.path);

	if ([[NSFileManager defaultManager] fileExistsAtPath:PATCHED_PATH]) {
		NSLog(@"[DiscordExtras] Patched jsbundle found, using existing bundle.");
		patchedBundlePath = [[NSURL alloc] initFileURLWithPath:PATCHED_PATH];
	} else {
		NSLog(@"[DiscordExtras] Patched jsbundle not found, creating one!");
		patchedBundlePath = createBundleFile(jsBundlePath);
	}

	NSLog(@"[DiscordExtras] Loading bundle: %@", patchedBundlePath);

	return patchedBundlePath;
}

%end

%ctor {
	clearPatches();
}