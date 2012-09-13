/*
	Register defines for TOPAZHP_TOP_
	These registers are for older versions of the harware. They are not defined in newer versions, so they do not appear in the auto-generated header file.
*/
#ifndef _REGCONV_H_topazhp_multicore_regs_old_h
#define _REGCONV_H_topazhp_multicore_regs_old_h

#ifdef __cplusplus 
#include "img_types.h"
#include "systemc_utils.h"
#endif 


/* Register CR_LAMBDA_DC_TABLE */
#define TOPAZHP_TOP_CR_LAMBDA_DC_TABLE 0x0120
#define MASK_TOPAZHP_TOP_CR_QPC_OR_DC_SCALE_LUMA_TABLE 0x000000FF
#define SHIFT_TOPAZHP_TOP_CR_QPC_OR_DC_SCALE_LUMA_TABLE 0
#define REGNUM_TOPAZHP_TOP_CR_QPC_OR_DC_SCALE_LUMA_TABLE 0x0120
#define SIGNED_TOPAZHP_TOP_CR_QPC_OR_DC_SCALE_LUMA_TABLE 0

#define MASK_TOPAZHP_TOP_CR_SATD_LAMBDA_OR_DC_SCALE_CHROMA_TABLE 0x0000FF00
#define SHIFT_TOPAZHP_TOP_CR_SATD_LAMBDA_OR_DC_SCALE_CHROMA_TABLE 8
#define REGNUM_TOPAZHP_TOP_CR_SATD_LAMBDA_OR_DC_SCALE_CHROMA_TABLE 0x0120
#define SIGNED_TOPAZHP_TOP_CR_SATD_LAMBDA_OR_DC_SCALE_CHROMA_TABLE 0

#define MASK_TOPAZHP_TOP_CR_SAD_LAMBDA_TABLE 0x007F0000
#define SHIFT_TOPAZHP_TOP_CR_SAD_LAMBDA_TABLE 16
#define REGNUM_TOPAZHP_TOP_CR_SAD_LAMBDA_TABLE 0x0120
#define SIGNED_TOPAZHP_TOP_CR_SAD_LAMBDA_TABLE 0


/* Register CR_MVCALC_COLOCATED (from topazhp_core_regs.h) */
#define MASK_TOPAZHP_CR_TEMPORAL_BLEND 0x001F0000
#define SHIFT_TOPAZHP_CR_TEMPORAL_BLEND 16
#define REGNUM_TOPAZHP_CR_TEMPORAL_BLEND 0x0174
#define SIGNED_TOPAZHP_CR_TEMPORAL_BLEND 0

#endif
