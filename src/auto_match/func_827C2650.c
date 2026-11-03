typedef struct cinfo_827C2650 cinfo_827C2650;
typedef struct {
  int pad0;
  int component_index;        /* 4 */
  char pad8[0x1c];
  int DCT_scaled_size;        /* 0x24 */
  char pad28[8];
  char component_needed;      /* 0x30 */
  char pad31[3];
  int MCU_width;              /* 0x34 */
  int MCU_height;             /* 0x38 */
  int MCU_blocks;             /* 0x3c */
  int MCU_sample_width;       /* 0x40 */
  int last_col_width;         /* 0x44 */
  int last_row_height;        /* 0x48 */
} comp_827C2650;
typedef struct {
  int pad0[5];
  unsigned MCU_ctr;           /* 0x14 */
  int MCU_vert_offset;        /* 0x18 */
  int MCU_rows_per_iMCU_row;  /* 0x1c */
  void *MCU_buffer[10];       /* 0x20 */
} coef_827C2650;
typedef void (*idct_fn_827C2650)(cinfo_827C2650 *, comp_827C2650 *, void *, void *, unsigned);
struct cinfo_827C2650 {
  char pad0[0x80];
  unsigned input_iMCU_row;    /* 0x80 */
  int pad84;
  int output_iMCU_row;        /* 0x88 */
  char pad8c[0x90];
  unsigned total_iMCU_rows;   /* 0x11c */
  int pad120;
  int comps_in_scan;          /* 0x124 */
  comp_827C2650 *cur_comp_info[4];  /* 0x128 */
  unsigned MCUs_per_row;      /* 0x138 */
  int pad13c;
  int blocks_in_MCU;          /* 0x140 */
  char pad144[0x44];
  coef_827C2650 *coef;        /* 0x188 */
  int pad18c;
  struct { int p0, p4, p8; void (*finish_input_pass)(cinfo_827C2650 *); } *inputctl;  /* 0x190 */
  int pad194;
  struct { int p0; unsigned char (*decode_mcu)(cinfo_827C2650 *, void **); } *entropy;  /* 0x198 */
  struct { int p0; idct_fn_827C2650 inverse_DCT[10]; } *idct;  /* 0x19c */
};
extern void fn_827C1B68(void *, unsigned);
extern void fn_827C25F0(cinfo_827C2650 *);

int fn_827C2650(cinfo_827C2650 *cinfo, unsigned char ***output_buf)
{
  coef_827C2650 *coef = cinfo->coef;
  unsigned MCU_col_num;
  unsigned last_MCU_col = cinfo->MCUs_per_row - 1;
  unsigned last_iMCU_row = cinfo->total_iMCU_rows - 1;
  int blkn, ci, xindex, yindex, yoffset, useful_width;
  unsigned char **output_ptr;
  unsigned start_col, output_col;
  comp_827C2650 *compptr;
  idct_fn_827C2650 inverse_DCT;

  for (yoffset = coef->MCU_vert_offset; yoffset < coef->MCU_rows_per_iMCU_row; yoffset++) {
    for (MCU_col_num = coef->MCU_ctr; MCU_col_num <= last_MCU_col; MCU_col_num++) {
      fn_827C1B68(coef->MCU_buffer[0], cinfo->blocks_in_MCU << 7);
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
    fn_827C25F0(cinfo);
    return 3;
  }
  cinfo->inputctl->finish_input_pass(cinfo);
  return 4;
}
