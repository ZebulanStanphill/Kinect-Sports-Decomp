typedef struct cinfo_829BB5A8 cinfo_829BB5A8;
typedef struct {
  int pad0;
  int component_index;        /* 4 */
  int pad8;
  int v_samp_factor;          /* 0xc */
  char pad10[0x14];
  int DCT_scaled_size;        /* 0x24 */
  char pad28[8];
  int component_needed;       /* 0x30 */
  int MCU_width;              /* 0x34 */
  int MCU_height;             /* 0x38 */
  int MCU_blocks;             /* 0x3c */
  int MCU_sample_width;       /* 0x40 */
  int last_col_width;         /* 0x44 */
  int last_row_height;        /* 0x48 */
} comp_829BB5A8;
typedef struct {
  int pad0[5];
  unsigned MCU_ctr;           /* 0x14 */
  int MCU_vert_offset;        /* 0x18 */
  int MCU_rows_per_iMCU_row;  /* 0x1c */
  void *MCU_buffer[10];       /* 0x20 */
} coef_829BB5A8;
typedef void (*idct_fn_829BB5A8)(cinfo_829BB5A8 *, comp_829BB5A8 *, void *, void *, unsigned);
struct cinfo_829BB5A8 {
  char pad0[0x98];
  unsigned input_iMCU_row;    /* 0x98 */
  int pad9c;
  int output_iMCU_row;        /* 0xa0 */
  char pada4[0x144 - 0xa4];
  unsigned total_iMCU_rows;   /* 0x144 */
  int pad148;
  int comps_in_scan;          /* 0x14c */
  comp_829BB5A8 *cur_comp_info[4];  /* 0x150 */
  unsigned MCUs_per_row;      /* 0x160 */
  int pad164;
  int blocks_in_MCU;          /* 0x168 */
  char pad16c[0x1b0 - 0x16c];
  coef_829BB5A8 *coef;        /* 0x1b0 */
  int pad1b4;
  struct { int p0, p4, p8; void (*finish_input_pass)(cinfo_829BB5A8 *); } *inputctl;  /* 0x1b8 */
  int pad1bc;
  struct { int p0; int (*decode_mcu)(cinfo_829BB5A8 *, void **); } *entropy;  /* 0x1c0 */
  struct { int p0; idct_fn_829BB5A8 inverse_DCT[10]; } *idct;  /* 0x1c4 */
};
extern void fn_829B7828(void *, unsigned);

int fn_829BB5A8(cinfo_829BB5A8 *cinfo, unsigned char ***output_buf)
{
  coef_829BB5A8 *coef = cinfo->coef;
  unsigned MCU_col_num;
  unsigned last_MCU_col = cinfo->MCUs_per_row - 1;
  unsigned last_iMCU_row = cinfo->total_iMCU_rows - 1;
  int blkn, ci, xindex, yindex, yoffset, useful_width;
  unsigned char **output_ptr;
  unsigned start_col, output_col;
  comp_829BB5A8 *compptr;
  idct_fn_829BB5A8 inverse_DCT;

  for (yoffset = coef->MCU_vert_offset; yoffset < coef->MCU_rows_per_iMCU_row; yoffset++) {
    for (MCU_col_num = coef->MCU_ctr; MCU_col_num <= last_MCU_col; MCU_col_num++) {
      fn_829B7828(coef->MCU_buffer[0], cinfo->blocks_in_MCU << 7);
      if (!cinfo->entropy->decode_mcu(cinfo, coef->MCU_buffer)) {
        coef->MCU_vert_offset = yoffset;
        coef->MCU_ctr = MCU_col_num;
        return 0;
      }
      blkn = 0;
      for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
        compptr = cinfo->cur_comp_info[ci];
        if (!compptr->component_needed) {
          blkn += compptr->MCU_blocks;
          continue;
        }
        inverse_DCT = cinfo->idct->inverse_DCT[compptr->component_index];
        useful_width = (MCU_col_num < last_MCU_col) ? compptr->MCU_width : compptr->last_col_width;
        output_ptr = output_buf[compptr->component_index] + yoffset * compptr->DCT_scaled_size;
        start_col = MCU_col_num * compptr->MCU_sample_width;
        for (yindex = 0; yindex < compptr->MCU_height; yindex++) {
          if (cinfo->input_iMCU_row < last_iMCU_row || yoffset + yindex < compptr->last_row_height) {
            output_col = start_col;
            for (xindex = 0; xindex < useful_width; xindex++) {
              (*inverse_DCT)(cinfo, compptr, coef->MCU_buffer[blkn + xindex], output_ptr, output_col);
              output_col += compptr->DCT_scaled_size;
            }
          }
          blkn += compptr->MCU_width;
          output_ptr += compptr->DCT_scaled_size;
        }
      }
    }
    coef->MCU_ctr = 0;
  }
  cinfo->output_iMCU_row++;
  if (++(cinfo->input_iMCU_row) < cinfo->total_iMCU_rows) {
    coef = cinfo->coef;
    if (cinfo->comps_in_scan > 1) {
      coef->MCU_rows_per_iMCU_row = 1;
    } else {
      if (cinfo->input_iMCU_row < cinfo->total_iMCU_rows - 1)
        coef->MCU_rows_per_iMCU_row = cinfo->cur_comp_info[0]->v_samp_factor;
      else
        coef->MCU_rows_per_iMCU_row = cinfo->cur_comp_info[0]->last_row_height;
    }
    coef->MCU_ctr = 0;
    coef->MCU_vert_offset = 0;
    return 3;
  }
  cinfo->inputctl->finish_input_pass(cinfo);
  return 4;
}
