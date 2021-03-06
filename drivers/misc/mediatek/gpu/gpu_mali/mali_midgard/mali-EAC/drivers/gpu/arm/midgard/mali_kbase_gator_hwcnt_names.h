/*
 *
 * (C) COPYRIGHT ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU licence.
 *
 * A copy of the licence is included with the program, and can also be obtained
 * from Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 *
 */



#ifndef _KBASE_GATOR_HWCNT_NAMES_H_
#define _KBASE_GATOR_HWCNT_NAMES_H_

/*
 * "Short names" for hardware counters used by Streamline. Counters names are
 * stored in accordance with their memory layout in the binary counter block
 * emitted by the Mali GPU. Each "master" in the GPU emits a fixed-size block
 * of 64 counters, and each GPU implements the same set of "masters" although
 * the counters each master exposes within its block of 64 may vary.
 *
 * Counters which are an empty string are simply "holes" in the counter memory
 * where no counter exists.
 */

static const char * const hardware_counter_names_mali_t60x[] = {
	/* Job Manager */
	"",
	"",
	"",
	"",
	"T60x_MESSAGES_SENT",
	"T60x_MESSAGES_RECEIVED",
	"T60x_GPU_ACTIVE",
	"T60x_IRQ_ACTIVE",
	"T60x_JS0_JOBS",
	"T60x_JS0_TASKS",
	"T60x_JS0_ACTIVE",
	"",
	"T60x_JS0_WAIT_READ",
	"T60x_JS0_WAIT_ISSUE",
	"T60x_JS0_WAIT_DEPEND",
	"T60x_JS0_WAIT_FINISH",
	"T60x_JS1_JOBS",
	"T60x_JS1_TASKS",
	"T60x_JS1_ACTIVE",
	"",
	"T60x_JS1_WAIT_READ",
	"T60x_JS1_WAIT_ISSUE",
	"T60x_JS1_WAIT_DEPEND",
	"T60x_JS1_WAIT_FINISH",
	"T60x_JS2_JOBS",
	"T60x_JS2_TASKS",
	"T60x_JS2_ACTIVE",
	"",
	"T60x_JS2_WAIT_READ",
	"T60x_JS2_WAIT_ISSUE",
	"T60x_JS2_WAIT_DEPEND",
	"T60x_JS2_WAIT_FINISH",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",

	/*Tiler */
	"",
	"",
	"",
	"T60x_TI_JOBS_PROCESSED",
	"T60x_TI_TRIANGLES",
	"T60x_TI_QUADS",
	"T60x_TI_POLYGONS",
	"T60x_TI_POINTS",
	"T60x_TI_LINES",
	"T60x_TI_VCACHE_HIT",
	"T60x_TI_VCACHE_MISS",
	"T60x_TI_FRONT_FACING",
	"T60x_TI_BACK_FACING",
	"T60x_TI_PRIM_VISIBLE",
	"T60x_TI_PRIM_CULLED",
	"T60x_TI_PRIM_CLIPPED",
	"T60x_TI_LEVEL0",
	"T60x_TI_LEVEL1",
	"T60x_TI_LEVEL2",
	"T60x_TI_LEVEL3",
	"T60x_TI_LEVEL4",
	"T60x_TI_LEVEL5",
	"T60x_TI_LEVEL6",
	"T60x_TI_LEVEL7",
	"T60x_TI_COMMAND_1",
	"T60x_TI_COMMAND_2",
	"T60x_TI_COMMAND_3",
	"T60x_TI_COMMAND_4",
	"T60x_TI_COMMAND_4_7",
	"T60x_TI_COMMAND_8_15",
	"T60x_TI_COMMAND_16_63",
	"T60x_TI_COMMAND_64",
	"T60x_TI_COMPRESS_IN",
	"T60x_TI_COMPRESS_OUT",
	"T60x_TI_COMPRESS_FLUSH",
	"T60x_TI_TIMESTAMPS",
	"T60x_TI_PCACHE_HIT",
	"T60x_TI_PCACHE_MISS",
	"T60x_TI_PCACHE_LINE",
	"T60x_TI_PCACHE_STALL",
	"T60x_TI_WRBUF_HIT",
	"T60x_TI_WRBUF_MISS",
	"T60x_TI_WRBUF_LINE",
	"T60x_TI_WRBUF_PARTIAL",
	"T60x_TI_WRBUF_STALL",
	"T60x_TI_ACTIVE",
	"T60x_TI_LOADING_DESC",
	"T60x_TI_INDEX_WAIT",
	"T60x_TI_INDEX_RANGE_WAIT",
	"T60x_TI_VERTEX_WAIT",
	"T60x_TI_PCACHE_WAIT",
	"T60x_TI_WRBUF_WAIT",
	"T60x_TI_BUS_READ",
	"T60x_TI_BUS_WRITE",
	"",
	"",
	"",
	"",
	"",
	"T60x_TI_UTLB_STALL",
	"T60x_TI_UTLB_REPLAY_MISS",
	"T60x_TI_UTLB_REPLAY_FULL",
	"T60x_TI_UTLB_NEW_MISS",
	"T60x_TI_UTLB_HIT",

	/* Shader Core */
	"",
	"",
	"",
	"",
	"T60x_FRAG_ACTIVE",
	"T60x_FRAG_PRIMITIVES",
	"T60x_FRAG_PRIMITIVES_DROPPED",
	"T60x_FRAG_CYCLES_DESC",
	"T60x_FRAG_CYCLES_PLR",
	"T60x_FRAG_CYCLES_VERT",
	"T60x_FRAG_CYCLES_TRISETUP",
	"T60x_FRAG_CYCLES_RAST",
	"T60x_FRAG_THREADS",
	"T60x_FRAG_DUMMY_THREADS",
	"T60x_FRAG_QUADS_RAST",
	"T60x_FRAG_QUADS_EZS_TEST",
	"T60x_FRAG_QUADS_EZS_KILLED",
	"T60x_FRAG_THREADS_LZS_TEST",
	"T60x_FRAG_THREADS_LZS_KILLED",
	"T60x_FRAG_CYCLES_NO_TILE",
	"T60x_FRAG_NUM_TILES",
	"T60x_FRAG_TRANS_ELIM",
	"T60x_COMPUTE_ACTIVE",
	"T60x_COMPUTE_TASKS",
	"T60x_COMPUTE_THREADS",
	"T60x_COMPUTE_CYCLES_DESC",
	"T60x_TRIPIPE_ACTIVE",
	"T60x_ARITH_WORDS",
	"T60x_ARITH_CYCLES_REG",
	"T60x_ARITH_CYCLES_L0",
	"T60x_ARITH_FRAG_DEPEND",
	"T60x_LS_WORDS",
	"T60x_LS_ISSUES",
	"T60x_LS_RESTARTS",
	"T60x_LS_REISSUES_MISS",
	"T60x_LS_REISSUES_VD",
	"T60x_LS_REISSUE_ATTRIB_MISS",
	"T60x_LS_NO_WB",
	"T60x_TEX_WORDS",
	"T60x_TEX_BUBBLES",
	"T60x_TEX_WORDS_L0",
	"T60x_TEX_WORDS_DESC",
	"T60x_TEX_ISSUES",
	"T60x_TEX_RECIRC_FMISS",
	"T60x_TEX_RECIRC_DESC",
	"T60x_TEX_RECIRC_MULTI",
	"T60x_TEX_RECIRC_PMISS",
	"T60x_TEX_RECIRC_CONF",
	"T60x_LSC_READ_HITS",
	"T60x_LSC_READ_MISSES",
	"T60x_LSC_WRITE_HITS",
	"T60x_LSC_WRITE_MISSES",
	"T60x_LSC_ATOMIC_HITS",
	"T60x_LSC_ATOMIC_MISSES",
	"T60x_LSC_LINE_FETCHES",
	"T60x_LSC_DIRTY_LINE",
	"T60x_LSC_SNOOPS",
	"T60x_AXI_TLB_STALL",
	"T60x_AXI_TLB_MIESS",
	"T60x_AXI_TLB_TRANSACTION",
	"T60x_LS_TLB_MISS",
	"T60x_LS_TLB_HIT",
	"T60x_AXI_BEATS_READ",
	"T60x_AXI_BEATS_WRITTEN",

	/*L2 and MMU */
	"",
	"",
	"",
	"",
	"T60x_MMU_HIT",
	"T60x_MMU_NEW_MISS",
	"T60x_MMU_REPLAY_FULL",
	"T60x_MMU_REPLAY_MISS",
	"T60x_MMU_TABLE_WALK",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"T60x_UTLB_HIT",
	"T60x_UTLB_NEW_MISS",
	"T60x_UTLB_REPLAY_FULL",
	"T60x_UTLB_REPLAY_MISS",
	"T60x_UTLB_STALL",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"T60x_L2_EXT_WRITE_BEATS",
	"T60x_L2_EXT_READ_BEATS",
	"T60x_L2_ANY_LOOKUP",
	"T60x_L2_READ_LOOKUP",
	"T60x_L2_SREAD_LOOKUP",
	"T60x_L2_READ_REPLAY",
	"T60x_L2_READ_SNOOP",
	"T60x_L2_READ_HIT",
	"T60x_L2_CLEAN_MISS",
	"T60x_L2_WRITE_LOOKUP",
	"T60x_L2_SWRITE_LOOKUP",
	"T60x_L2_WRITE_REPLAY",
	"T60x_L2_WRITE_SNOOP",
	"T60x_L2_WRITE_HIT",
	"T60x_L2_EXT_READ_FULL",
	"T60x_L2_EXT_READ_HALF",
	"T60x_L2_EXT_WRITE_FULL",
	"T60x_L2_EXT_WRITE_HALF",
	"T60x_L2_EXT_READ",
	"T60x_L2_EXT_READ_LINE",
	"T60x_L2_EXT_WRITE",
	"T60x_L2_EXT_WRITE_LINE",
	"T60x_L2_EXT_WRITE_SMALL",
	"T60x_L2_EXT_BARRIER",
	"T60x_L2_EXT_AR_STALL",
	"T60x_L2_EXT_R_BUF_FULL",
	"T60x_L2_EXT_RD_BUF_FULL",
	"T60x_L2_EXT_R_RAW",
	"T60x_L2_EXT_W_STALL",
	"T60x_L2_EXT_W_BUF_FULL",
	"T60x_L2_EXT_R_W_HAZARD",
	"T60x_L2_TAG_HAZARD",
	"T60x_L2_SNOOP_FULL",
	"T60x_L2_REPLAY_FULL"
};
static const char * const hardware_counter_names_mali_t62x[] = {
	/* Job Manager */
	"",
	"",
	"",
	"",
	"T62x_MESSAGES_SENT",
	"T62x_MESSAGES_RECEIVED",
	"T62x_GPU_ACTIVE",
	"T62x_IRQ_ACTIVE",
	"T62x_JS0_JOBS",
	"T62x_JS0_TASKS",
	"T62x_JS0_ACTIVE",
	"",
	"T62x_JS0_WAIT_READ",
	"T62x_JS0_WAIT_ISSUE",
	"T62x_JS0_WAIT_DEPEND",
	"T62x_JS0_WAIT_FINISH",
	"T62x_JS1_JOBS",
	"T62x_JS1_TASKS",
	"T62x_JS1_ACTIVE",
	"",
	"T62x_JS1_WAIT_READ",
	"T62x_JS1_WAIT_ISSUE",
	"T62x_JS1_WAIT_DEPEND",
	"T62x_JS1_WAIT_FINISH",
	"T62x_JS2_JOBS",
	"T62x_JS2_TASKS",
	"T62x_JS2_ACTIVE",
	"",
	"T62x_JS2_WAIT_READ",
	"T62x_JS2_WAIT_ISSUE",
	"T62x_JS2_WAIT_DEPEND",
	"T62x_JS2_WAIT_FINISH",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",

	/*Tiler */
	"",
	"",
	"",
	"T62x_TI_JOBS_PROCESSED",
	"T62x_TI_TRIANGLES",
	"T62x_TI_QUADS",
	"T62x_TI_POLYGONS",
	"T62x_TI_POINTS",
	"T62x_TI_LINES",
	"T62x_TI_VCACHE_HIT",
	"T62x_TI_VCACHE_MISS",
	"T62x_TI_FRONT_FACING",
	"T62x_TI_BACK_FACING",
	"T62x_TI_PRIM_VISIBLE",
	"T62x_TI_PRIM_CULLED",
	"T62x_TI_PRIM_CLIPPED",
	"T62x_TI_LEVEL0",
	"T62x_TI_LEVEL1",
	"T62x_TI_LEVEL2",
	"T62x_TI_LEVEL3",
	"T62x_TI_LEVEL4",
	"T62x_TI_LEVEL5",
	"T62x_TI_LEVEL6",
	"T62x_TI_LEVEL7",
	"T62x_TI_COMMAND_1",
	"T62x_TI_COMMAND_2",
	"T62x_TI_COMMAND_3",
	"T62x_TI_COMMAND_4",
	"T62x_TI_COMMAND_5_7",
	"T62x_TI_COMMAND_8_15",
	"T62x_TI_COMMAND_16_63",
	"T62x_TI_COMMAND_64",
	"T62x_TI_COMPRESS_IN",
	"T62x_TI_COMPRESS_OUT",
	"T62x_TI_COMPRESS_FLUSH",
	"T62x_TI_TIMESTAMPS",
	"T62x_TI_PCACHE_HIT",
	"T62x_TI_PCACHE_MISS",
	"T62x_TI_PCACHE_LINE",
	"T62x_TI_PCACHE_STALL",
	"T62x_TI_WRBUF_HIT",
	"T62x_TI_WRBUF_MISS",
	"T62x_TI_WRBUF_LINE",
	"T62x_TI_WRBUF_PARTIAL",
	"T62x_TI_WRBUF_STALL",
	"T62x_TI_ACTIVE",
	"T62x_TI_LOADING_DESC",
	"T62x_TI_INDEX_WAIT",
	"T62x_TI_INDEX_RANGE_WAIT",
	"T62x_TI_VERTEX_WAIT",
	"T62x_TI_PCACHE_WAIT",
	"T62x_TI_WRBUF_WAIT",
	"T62x_TI_BUS_READ",
	"T62x_TI_BUS_WRITE",
	"",
	"",
	"",
	"",
	"",
	"T62x_TI_UTLB_STALL",
	"T62x_TI_UTLB_REPLAY_MISS",
	"T62x_TI_UTLB_REPLAY_FULL",
	"T62x_TI_UTLB_NEW_MISS",
	"T62x_TI_UTLB_HIT",

	/* Shader Core */
	"",
	"",
	"",
	"T62x_SHADER_CORE_ACTIVE",
	"T62x_FRAG_ACTIVE",
	"T62x_FRAG_PRIMITIVES",
	"T62x_FRAG_PRIMITIVES_DROPPED",
	"T62x_FRAG_CYCLES_DESC",
	"T62x_FRAG_CYCLES_FPKQ_ACTIVE",
	"T62x_FRAG_CYCLES_VERT",
	"T62x_FRAG_CYCLES_TRISETUP",
	"T62x_FRAG_CYCLES_EZS_ACTIVE",
	"T62x_FRAG_THREADS",
	"T62x_FRAG_DUMMY_THREADS",
	"T62x_FRAG_QUADS_RAST",
	"T62x_FRAG_QUADS_EZS_TEST",
	"T62x_FRAG_QUADS_EZS_KILLED",
	"T62x_FRAG_THREADS_LZS_TEST",
	"T62x_FRAG_THREADS_LZS_KILLED",
	"T62x_FRAG_CYCLES_NO_TILE",
	"T62x_FRAG_NUM_TILES",
	"T62x_FRAG_TRANS_ELIM",
	"T62x_COMPUTE_ACTIVE",
	"T62x_COMPUTE_TASKS",
	"T62x_COMPUTE_THREADS",
	"T62x_COMPUTE_CYCLES_DESC",
	"T62x_TRIPIPE_ACTIVE",
	"T62x_ARITH_WORDS",
	"T62x_ARITH_CYCLES_REG",
	"T62x_ARITH_CYCLES_L0",
	"T62x_ARITH_FRAG_DEPEND",
	"T62x_LS_WORDS",
	"T62x_LS_ISSUES",
	"T62x_LS_RESTARTS",
	"T62x_LS_REISSUES_MISS",
	"T62x_LS_REISSUES_VD",
	"T62x_LS_REISSUE_ATTRIB_MISS",
	"T62x_LS_NO_WB",
	"T62x_TEX_WORDS",
	"T62x_TEX_BUBBLES",
	"T62x_TEX_WORDS_L0",
	"T62x_TEX_WORDS_DESC",
	"T62x_TEX_ISSUES",
	"T62x_TEX_RECIRC_FMISS",
	"T62x_TEX_RECIRC_DESC",
	"T62x_TEX_RECIRC_MULTI",
	"T62x_TEX_RECIRC_PMISS",
	"T62x_TEX_RECIRC_CONF",
	"T62x_LSC_READ_HITS",
	"T62x_LSC_READ_MISSES",
	"T62x_LSC_WRITE_HITS",
	"T62x_LSC_WRITE_MISSES",
	"T62x_LSC_ATOMIC_HITS",
	"T62x_LSC_ATOMIC_MISSES",
	"T62x_LSC_LINE_FETCHES",
	"T62x_LSC_DIRTY_LINE",
	"T62x_LSC_SNOOPS",
	"T62x_AXI_TLB_STALL",
	"T62x_AXI_TLB_MIESS",
	"T62x_AXI_TLB_TRANSACTION",
	"T62x_LS_TLB_MISS",
	"T62x_LS_TLB_HIT",
	"T62x_AXI_BEATS_READ",
	"T62x_AXI_BEATS_WRITTEN",

	/*L2 and MMU */
	"",
	"",
	"",
	"",
	"T62x_MMU_HIT",
	"T62x_MMU_NEW_MISS",
	"T62x_MMU_REPLAY_FULL",
	"T62x_MMU_REPLAY_MISS",
	"T62x_MMU_TABLE_WALK",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"T62x_UTLB_HIT",
	"T62x_UTLB_NEW_MISS",
	"T62x_UTLB_REPLAY_FULL",
	"T62x_UTLB_REPLAY_MISS",
	"T62x_UTLB_STALL",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"T62x_L2_EXT_WRITE_BEATS",
	"T62x_L2_EXT_READ_BEATS",
	"T62x_L2_ANY_LOOKUP",
	"T62x_L2_READ_LOOKUP",
	"T62x_L2_SREAD_LOOKUP",
	"T62x_L2_READ_REPLAY",
	"T62x_L2_READ_SNOOP",
	"T62x_L2_READ_HIT",
	"T62x_L2_CLEAN_MISS",
	"T62x_L2_WRITE_LOOKUP",
	"T62x_L2_SWRITE_LOOKUP",
	"T62x_L2_WRITE_REPLAY",
	"T62x_L2_WRITE_SNOOP",
	"T62x_L2_WRITE_HIT",
	"T62x_L2_EXT_READ_FULL",
	"T62x_L2_EXT_READ_HALF",
	"T62x_L2_EXT_WRITE_FULL",
	"T62x_L2_EXT_WRITE_HALF",
	"T62x_L2_EXT_READ",
	"T62x_L2_EXT_READ_LINE",
	"T62x_L2_EXT_WRITE",
	"T62x_L2_EXT_WRITE_LINE",
	"T62x_L2_EXT_WRITE_SMALL",
	"T62x_L2_EXT_BARRIER",
	"T62x_L2_EXT_AR_STALL",
	"T62x_L2_EXT_R_BUF_FULL",
	"T62x_L2_EXT_RD_BUF_FULL",
	"T62x_L2_EXT_R_RAW",
	"T62x_L2_EXT_W_STALL",
	"T62x_L2_EXT_W_BUF_FULL",
	"T62x_L2_EXT_R_W_HAZARD",
	"T62x_L2_TAG_HAZARD",
	"T62x_L2_SNOOP_FULL",
	"T62x_L2_REPLAY_FULL"
};

static const char * const hardware_counter_names_mali_t72x[] = {
	/* Job Manager */
	"",
	"",
	"",
	"",
	"T72x_GPU_ACTIVE",
	"T72x_IRQ_ACTIVE",
	"T72x_JS0_JOBS",
	"T72x_JS0_TASKS",
	"T72x_JS0_ACTIVE",
	"T72x_JS1_JOBS",
	"T72x_JS1_TASKS",
	"T72x_JS1_ACTIVE",
	"T72x_JS2_JOBS",
	"T72x_JS2_TASKS",
	"T72x_JS2_ACTIVE",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",

	/*Tiler */
	"",
	"",
	"",
	"T72x_TI_JOBS_PROCESSED",
	"T72x_TI_TRIANGLES",
	"T72x_TI_QUADS",
	"T72x_TI_POLYGONS",
	"T72x_TI_POINTS",
	"T72x_TI_LINES",
	"T72x_TI_FRONT_FACING",
	"T72x_TI_BACK_FACING",
	"T72x_TI_PRIM_VISIBLE",
	"T72x_TI_PRIM_CULLED",
	"T72x_TI_PRIM_CLIPPED",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"T72x_TI_ACTIVE",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",

	/* Shader Core */
	"",
	"",
	"",
	"",
	"T72x_FRAG_ACTIVE",
	"T72x_FRAG_PRIMITIVES",
	"T72x_FRAG_PRIMITIVES_DROPPED",
	"T72x_FRAG_THREADS",
	"T72x_FRAG_DUMMY_THREADS",
	"T72x_FRAG_QUADS_RAST",
	"T72x_FRAG_QUADS_EZS_TEST",
	"T72x_FRAG_QUADS_EZS_KILLED",
	"T72x_FRAG_THREADS_LZS_TEST",
	"T72x_FRAG_THREADS_LZS_KILLED",
	"T72x_FRAG_CYCLES_NO_TILE",
	"T72x_FRAG_NUM_TILES",
	"T72x_FRAG_TRANS_ELIM",
	"T72x_COMPUTE_ACTIVE",
	"T72x_COMPUTE_TASKS",
	"T72x_COMPUTE_THREADS",
	"T72x_TRIPIPE_ACTIVE",
	"T72x_ARITH_WORDS",
	"T72x_ARITH_CYCLES_REG",
	"T72x_LS_WORDS",
	"T72x_LS_ISSUES",
	"T72x_LS_RESTARTS",
	"T72x_LS_REISSUES_MISS",
	"T72x_TEX_WORDS",
	"T72x_TEX_BUBBLES",
	"T72x_TEX_ISSUES",
	"T72x_LSC_READ_HITS",
	"T72x_LSC_READ_MISSES",
	"T72x_LSC_WRITE_HITS",
	"T72x_LSC_WRITE_MISSES",
	"T72x_LSC_ATOMIC_HITS",
	"T72x_LSC_ATOMIC_MISSES",
	"T72x_LSC_LINE_FETCHES",
	"T72x_LSC_DIRTY_LINE",
	"T72x_LSC_SNOOPS",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",

	/*L2 and MMU */
	"",
	"",
	"",
	"",
	"T72x_L2_EXT_WRITE_BEAT",
	"T72x_L2_EXT_READ_BEAT",
	"T72x_L2_READ_SNOOP",
	"T72x_L2_READ_HIT",
	"T72x_L2_WRITE_SNOOP",
	"T72x_L2_WRITE_HIT",
	"T72x_L2_EXT_WRITE_SMALL",
	"T72x_L2_EXT_BARRIER",
	"T72x_L2_EXT_AR_STALL",
	"T72x_L2_EXT_W_STALL",
	"T72x_L2_SNOOP_FULL",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	""
};

static const char * const hardware_counter_names_mali_t76x[] = {
	/* Job Manager */
	"",
	"",
	"",
	"",
	"T76x_MESSAGES_SENT",
	"T76x_MESSAGES_RECEIVED",
	"T76x_GPU_ACTIVE",
	"T76x_IRQ_ACTIVE",
	"T76x_JS0_JOBS",
	"T76x_JS0_TASKS",
	"T76x_JS0_ACTIVE",
	"",
	"T76x_JS0_WAIT_READ",
	"T76x_JS0_WAIT_ISSUE",
	"T76x_JS0_WAIT_DEPEND",
	"T76x_JS0_WAIT_FINISH",
	"T76x_JS1_JOBS",
	"T76x_JS1_TASKS",
	"T76x_JS1_ACTIVE",
	"",
	"T76x_JS1_WAIT_READ",
	"T76x_JS1_WAIT_ISSUE",
	"T76x_JS1_WAIT_DEPEND",
	"T76x_JS1_WAIT_FINISH",
	"T76x_JS2_JOBS",
	"T76x_JS2_TASKS",
	"T76x_JS2_ACTIVE",
	"",
	"T76x_JS2_WAIT_READ",
	"T76x_JS2_WAIT_ISSUE",
	"T76x_JS2_WAIT_DEPEND",
	"T76x_JS2_WAIT_FINISH",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",

	/*Tiler */
	"",
	"",
	"",
	"T76x_TI_JOBS_PROCESSED",
	"T76x_TI_TRIANGLES",
	"T76x_TI_QUADS",
	"T76x_TI_POLYGONS",
	"T76x_TI_POINTS",
	"T76x_TI_LINES",
	"T76x_TI_VCACHE_HIT",
	"T76x_TI_VCACHE_MISS",
	"T76x_TI_FRONT_FACING",
	"T76x_TI_BACK_FACING",
	"T76x_TI_PRIM_VISIBLE",
	"T76x_TI_PRIM_CULLED",
	"T76x_TI_PRIM_CLIPPED",
	"T76x_TI_LEVEL0",
	"T76x_TI_LEVEL1",
	"T76x_TI_LEVEL2",
	"T76x_TI_LEVEL3",
	"T76x_TI_LEVEL4",
	"T76x_TI_LEVEL5",
	"T76x_TI_LEVEL6",
	"T76x_TI_LEVEL7",
	"T76x_TI_COMMAND_1",
	"T76x_TI_COMMAND_2",
	"T76x_TI_COMMAND_3",
	"T76x_TI_COMMAND_4",
	"T76x_TI_COMMAND_5_7",
	"T76x_TI_COMMAND_8_15",
	"T76x_TI_COMMAND_16_63",
	"T76x_TI_COMMAND_64",
	"T76x_TI_COMPRESS_IN",
	"T76x_TI_COMPRESS_OUT",
	"T76x_TI_COMPRESS_FLUSH",
	"T76x_TI_TIMESTAMPS",
	"T76x_TI_PCACHE_HIT",
	"T76x_TI_PCACHE_MISS",
	"T76x_TI_PCACHE_LINE",
	"T76x_TI_PCACHE_STALL",
	"T76x_TI_WRBUF_HIT",
	"T76x_TI_WRBUF_MISS",
	"T76x_TI_WRBUF_LINE",
	"T76x_TI_WRBUF_PARTIAL",
	"T76x_TI_WRBUF_STALL",
	"T76x_TI_ACTIVE",
	"T76x_TI_LOADING_DESC",
	"T76x_TI_INDEX_WAIT",
	"T76x_TI_INDEX_RANGE_WAIT",
	"T76x_TI_VERTEX_WAIT",
	"T76x_TI_PCACHE_WAIT",
	"T76x_TI_WRBUF_WAIT",
	"T76x_TI_BUS_READ",
	"T76x_TI_BUS_WRITE",
	"",
	"",
	"",
	"",
	"",
	"T76x_TI_UTLB_HIT",
	"T76x_TI_UTLB_NEW_MISS",
	"T76x_TI_UTLB_REPLAY_FULL",
	"T76x_TI_UTLB_REPLAY_MISS",
	"T76x_TI_UTLB_STALL",

	/* Shader Core */
	"",
	"",
	"",
	"",
	"T76x_FRAG_ACTIVE",
	"T76x_FRAG_PRIMITIVES",
	"T76x_FRAG_PRIMITIVES_DROPPED",
	"T76x_FRAG_CYCLES_DESC",
	"T76x_FRAG_CYCLES_FPKQ_ACTIVE",
	"T76x_FRAG_CYCLES_VERT",
	"T76x_FRAG_CYCLES_TRISETUP",
	"T76x_FRAG_CYCLES_EZS_ACTIVE",
	"T76x_FRAG_THREADS",
	"T76x_FRAG_DUMMY_THREADS",
	"T76x_FRAG_QUADS_RAST",
	"T76x_FRAG_QUADS_EZS_TEST",
	"T76x_FRAG_QUADS_EZS_KILLED",
	"T76x_FRAG_THREADS_LZS_TEST",
	"T76x_FRAG_THREADS_LZS_KILLED",
	"T76x_FRAG_CYCLES_NO_TILE",
	"T76x_FRAG_NUM_TILES",
	"T76x_FRAG_TRANS_ELIM",
	"T76x_COMPUTE_ACTIVE",
	"T76x_COMPUTE_TASKS",
	"T76x_COMPUTE_THREADS",
	"T76x_COMPUTE_CYCLES_DESC",
	"T76x_TRIPIPE_ACTIVE",
	"T76x_ARITH_WORDS",
	"T76x_ARITH_CYCLES_REG",
	"T76x_ARITH_CYCLES_L0",
	"T76x_ARITH_FRAG_DEPEND",
	"T76x_LS_WORDS",
	"T76x_LS_ISSUES",
	"T76x_LS_REISSUE_ATTR",
	"T76x_LS_REISSUES_VARY",
	"T76x_LS_VARY_RV_MISS",
	"T76x_LS_VARY_RV_HIT",
	"T76x_LS_NO_UNPARK",
	"T76x_TEX_WORDS",
	"T76x_TEX_BUBBLES",
	"T76x_TEX_WORDS_L0",
	"T76x_TEX_WORDS_DESC",
	"T76x_TEX_ISSUES",
	"T76x_TEX_RECIRC_FMISS",
	"T76x_TEX_RECIRC_DESC",
	"T76x_TEX_RECIRC_MULTI",
	"T76x_TEX_RECIRC_PMISS",
	"T76x_TEX_RECIRC_CONF",
	"T76x_LSC_READ_HITS",
	"T76x_LSC_READ_OP",
	"T76x_LSC_WRITE_HITS",
	"T76x_LSC_WRITE_OP",
	"T76x_LSC_ATOMIC_HITS",
	"T76x_LSC_ATOMIC_OP",
	"T76x_LSC_LINE_FETCHES",
	"T76x_LSC_DIRTY_LINE",
	"T76x_LSC_SNOOPS",
	"T76x_AXI_TLB_STALL",
	"T76x_AXI_TLB_MIESS",
	"T76x_AXI_TLB_TRANSACTION",
	"T76x_LS_TLB_MISS",
	"T76x_LS_TLB_HIT",
	"T76x_AXI_BEATS_READ",
	"T76x_AXI_BEATS_WRITTEN",

	/*L2 and MMU */
	"",
	"",
	"",
	"",
	"T76x_MMU_HIT",
	"T76x_MMU_NEW_MISS",
	"T76x_MMU_REPLAY_FULL",
	"T76x_MMU_REPLAY_MISS",
	"T76x_MMU_TABLE_WALK",
	"T76x_MMU_REQUESTS",
	"",
	"",
	"T76x_UTLB_HIT",
	"T76x_UTLB_NEW_MISS",
	"T76x_UTLB_REPLAY_FULL",
	"T76x_UTLB_REPLAY_MISS",
	"T76x_UTLB_STALL",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"T76x_L2_EXT_WRITE_BEATS",
	"T76x_L2_EXT_READ_BEATS",
	"T76x_L2_ANY_LOOKUP",
	"T76x_L2_READ_LOOKUP",
	"T76x_L2_SREAD_LOOKUP",
	"T76x_L2_READ_REPLAY",
	"T76x_L2_READ_SNOOP",
	"T76x_L2_READ_HIT",
	"T76x_L2_CLEAN_MISS",
	"T76x_L2_WRITE_LOOKUP",
	"T76x_L2_SWRITE_LOOKUP",
	"T76x_L2_WRITE_REPLAY",
	"T76x_L2_WRITE_SNOOP",
	"T76x_L2_WRITE_HIT",
	"T76x_L2_EXT_READ_FULL",
	"",
	"T76x_L2_EXT_WRITE_FULL",
	"T76x_L2_EXT_R_W_HAZARD",
	"T76x_L2_EXT_READ",
	"T76x_L2_EXT_READ_LINE",
	"T76x_L2_EXT_WRITE",
	"T76x_L2_EXT_WRITE_LINE",
	"T76x_L2_EXT_WRITE_SMALL",
	"T76x_L2_EXT_BARRIER",
	"T76x_L2_EXT_AR_STALL",
	"T76x_L2_EXT_R_BUF_FULL",
	"T76x_L2_EXT_RD_BUF_FULL",
	"T76x_L2_EXT_R_RAW",
	"T76x_L2_EXT_W_STALL",
	"T76x_L2_EXT_W_BUF_FULL",
	"T76x_L2_EXT_R_BUF_FULL",
	"T76x_L2_TAG_HAZARD",
	"T76x_L2_SNOOP_FULL",
	"T76x_L2_REPLAY_FULL"
};

#endif
