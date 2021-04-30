/*
 * IDENTIFICATION:
 * stub generated Thu Apr 29 20:51:21 2021
 * with a MiG generated by bootstrap_cmds-117
 * OPTIONS: 
 */

/* Module discordExtras_helper */

#define	__MIG_check__Request__discordExtras_helper_subsystem__ 1

#include "discordExtras_daemonServer.h"

#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif

#ifndef	__DeclareRcvRpc
#define	__DeclareRcvRpc(_NUM_, _NAME_)
#endif	/* __DeclareRcvRpc */

#ifndef	__BeforeRcvRpc
#define	__BeforeRcvRpc(_NUM_, _NAME_)
#endif	/* __BeforeRcvRpc */

#ifndef	__AfterRcvRpc
#define	__AfterRcvRpc(_NUM_, _NAME_)
#endif	/* __AfterRcvRpc */

#ifndef	__DeclareRcvSimple
#define	__DeclareRcvSimple(_NUM_, _NAME_)
#endif	/* __DeclareRcvSimple */

#ifndef	__BeforeRcvSimple
#define	__BeforeRcvSimple(_NUM_, _NAME_)
#endif	/* __BeforeRcvSimple */

#ifndef	__AfterRcvSimple
#define	__AfterRcvSimple(_NUM_, _NAME_)
#endif	/* __AfterRcvSimple */

#define novalue void

#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* Forward Declarations */


mig_internal novalue _XdiscordExtras_patch
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if ( __MigTypeCheck )
#if __MIG_check__Request__discordExtras_helper_subsystem__
#if !defined(__MIG_check__Request__discordExtras_patch_t__defined)
#define __MIG_check__Request__discordExtras_patch_t__defined

mig_internal kern_return_t __MIG_check__Request__discordExtras_patch_t(__attribute__((__unused__)) __Request__discordExtras_patch_t *In0P, __attribute__((__unused__)) __Request__discordExtras_patch_t **In1PP, __attribute__((__unused__)) __Request__discordExtras_patch_t **In2PP)
{

	typedef __Request__discordExtras_patch_t __Request;
	__Request *In1P;
	__Request *In2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 6144)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__discordExtras_patch_t__bundlePathCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__discordExtras_patch_t__bundlePathCnt(&In0P->bundlePathCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__discordExtras_patch_t__bundlePathCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->bundlePathCnt);
#if	__MigTypeCheck
	if ( In0P->bundlePathCnt > 2048 )
		return MIG_BAD_ARGUMENTS;
	if (((msgh_size - (mach_msg_size_t)(sizeof(__Request) - 6144)) < In0P->bundlePathCnt) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 6144) + _WALIGN_(In0P->bundlePathCnt)))
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 2048);

#if defined(__NDR_convert__int_rep__Request__discordExtras_patch_t__patchedPathCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__discordExtras_patch_t__patchedPathCnt(&In1P->patchedPathCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__discordExtras_patch_t__patchedPathCnt__defined */
	msgh_size_delta = _WALIGN_(In1P->patchedPathCnt);
#if	__MigTypeCheck
	if ( In1P->patchedPathCnt > 2048 )
		return MIG_BAD_ARGUMENTS;
	if (((msgh_size - (mach_msg_size_t)(sizeof(__Request) - 6144)) < In1P->patchedPathCnt) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 6144) + _WALIGN_(In1P->patchedPathCnt)))
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In2PP = In2P = (__Request *) ((pointer_t) In1P + msgh_size_delta - 2048);

#if defined(__NDR_convert__int_rep__Request__discordExtras_patch_t__patchesPathCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__discordExtras_patch_t__patchesPathCnt(&In2P->patchesPathCnt, In2P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__discordExtras_patch_t__patchesPathCnt__defined */
#if	__MigTypeCheck
	if ( In2P->patchesPathCnt > 2048 )
		return MIG_BAD_ARGUMENTS;
	if (((msgh_size - (mach_msg_size_t)(sizeof(__Request) - 6144)) < In2P->patchesPathCnt) ||
	    (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 6144) + _WALIGN_(In2P->patchesPathCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__discordExtras_patch_t__defined) */
#endif /* __MIG_check__Request__discordExtras_helper_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine discordExtras_patch */
mig_internal novalue _XdiscordExtras_patch
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t bundlePathCnt;
		uint8_t bundlePath[2048];
		mach_msg_type_number_t patchedPathCnt;
		uint8_t patchedPath[2048];
		mach_msg_type_number_t patchesPathCnt;
		uint8_t patchesPath[2048];
		mach_msg_trailer_t trailer;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __Request__discordExtras_patch_t __Request;
	typedef __Reply__discordExtras_patch_t Reply __attribute__((unused));

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Request *In2P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__discordExtras_patch_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__discordExtras_patch_t__defined */

	__DeclareRcvRpc(500, "discordExtras_patch")
	__BeforeRcvRpc(500, "discordExtras_patch")

#if	defined(__MIG_check__Request__discordExtras_patch_t__defined)
	check_result = __MIG_check__Request__discordExtras_patch_t((__Request *)In0P, (__Request **)&In1P, (__Request **)&In2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__discordExtras_patch_t__defined) */

	OutP->RetCode = dex_discordExtras_patch(In0P->Head.msgh_request_port, In0P->bundlePath, In0P->bundlePathCnt, In1P->patchedPath, In1P->patchedPathCnt, In2P->patchesPath, In2P->patchesPathCnt);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(500, "discordExtras_patch")
}



/* Description of this subsystem, for use in direct RPC */
const struct dex_discordExtras_helper_subsystem dex_discordExtras_helper_subsystem = {
	discordExtras_helper_server_routine,
	500,
	501,
	(mach_msg_size_t)sizeof(union __ReplyUnion__dex_discordExtras_helper_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
          (mig_stub_routine_t) _XdiscordExtras_patch, 7, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__discordExtras_patch_t)},
	}
};

mig_external boolean_t discordExtras_helper_server
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	mig_routine_t routine;

	OutHeadP->msgh_bits = MACH_MSGH_BITS(MACH_MSGH_BITS_REPLY(InHeadP->msgh_bits), 0);
	OutHeadP->msgh_remote_port = InHeadP->msgh_reply_port;
	/* Minimal size: routine() will update it if different */
	OutHeadP->msgh_size = (mach_msg_size_t)sizeof(mig_reply_error_t);
	OutHeadP->msgh_local_port = MACH_PORT_NULL;
	OutHeadP->msgh_id = InHeadP->msgh_id + 100;
	OutHeadP->msgh_reserved = 0;

	if ((InHeadP->msgh_id > 500) || (InHeadP->msgh_id < 500) ||
	    ((routine = dex_discordExtras_helper_subsystem.routine[InHeadP->msgh_id - 500].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t discordExtras_helper_server_routine
	(mach_msg_header_t *InHeadP)
{
	int msgh_id;

	msgh_id = InHeadP->msgh_id - 500;

	if ((msgh_id > 0) || (msgh_id < 0))
		return 0;

	return dex_discordExtras_helper_subsystem.routine[msgh_id].stub_routine;
}