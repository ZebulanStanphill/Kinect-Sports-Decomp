/* Corresponds to libjpeg jccoefct.c start_iMCU_row (open-source IJG libjpeg). */
typedef unsigned int JDIMENSION;

typedef struct {
  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;            /* 0x0c */
  int pad10[14];
  int last_row_height;          /* 0x48 */
} Comp_827BFBB0;

typedef struct {
  void *start_pass;
  void *compress_data;
  JDIMENSION iMCU_row_num;      /* 0x08 */
  JDIMENSION mcu_ctr;           /* 0x0c */
  int MCU_vert_offset;          /* 0x10 */
  int MCU_rows_per_iMCU_row;    /* 0x14 */
} Coef_827BFBB0;

typedef struct {
  char pad0[0xe0];
  JDIMENSION total_iMCU_rows;   /* 0xe0 */
  int comps_in_scan;            /* 0xe4 */
  Comp_827BFBB0 *cur_comp_info[4]; /* 0xe8 */
  char padf8[0x148 - 0xf8];
  Coef_827BFBB0 *coef;          /* 0x148 */
} Cinfo_827BFBB0;

void fn_827BFBB0(Cinfo_827BFBB0 *cinfo)
{
  Coef_827BFBB0 *coef = cinfo->coef;

  if (cinfo->comps_in_scan > 1) {
    coef->MCU_rows_per_iMCU_row = 1;
  } else {
    if (coef->iMCU_row_num < (cinfo->total_iMCU_rows - 1))
      coef->MCU_rows_per_iMCU_row = cinfo->cur_comp_info[0]->v_samp_factor;
    else
      coef->MCU_rows_per_iMCU_row = cinfo->cur_comp_info[0]->last_row_height;
  }
  coef->mcu_ctr = 0;
  coef->MCU_vert_offset = 0;
}
