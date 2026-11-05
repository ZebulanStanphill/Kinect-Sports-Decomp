typedef struct Comp_829BB848 {
  int pad0;
  int component_index;
  int pad8;
  int v_samp_factor;
  char pad10[0x34 - 0x10];
  int MCU_width;
  int MCU_height;
  char pad3c[0x48 - 0x3c];
  int last_row_height;
} Comp_829BB848;
typedef struct Mem_829BB848 { int p[8]; void *(*access_virt_barray)(void *, int, unsigned, unsigned, int); } Mem_829BB848;
typedef struct Coef_829BB848 {
  int pad[5];
  unsigned MCU_ctr;
  int MCU_vert_offset;
  int MCU_rows_per_iMCU_row;
  int MCU_buffer[10];
  int whole_image[4];
} Coef_829BB848;
typedef struct Entropy_829BB848 { int p0; int (*decode_mcu)(void *, int *); } Entropy_829BB848;
typedef struct Inputctl_829BB848 { int p[3]; void (*finish_input_pass)(void *); } Inputctl_829BB848;
typedef struct Cinfo_829BB848 {
  int pad0;
  Mem_829BB848 *mem;
  char pad8[0x98 - 8];
  unsigned input_iMCU_row;
  char pad9c[0x144 - 0x9c];
  unsigned total_iMCU_rows;
  char pad148[4];
  int comps_in_scan;
  Comp_829BB848 *cur_comp_info[4];
  unsigned MCUs_per_row;
  char pad164[0x1b0 - 0x164];
  Coef_829BB848 *coef;
  char pad1b4[4];
  Inputctl_829BB848 *inputctl;
  char pad1bc[4];
  Entropy_829BB848 *entropy;
} Cinfo_829BB848;

int fn_829BB848(Cinfo_829BB848 *cinfo)
{
  Coef_829BB848 *coef = cinfo->coef;
  unsigned MCU_col_num;
  int blkn, ci, xindex, yindex, yoffset;
  int *buffer[4];
  Comp_829BB848 *compptr;
  int *buffer_ptr;
  for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
    compptr = cinfo->cur_comp_info[ci];
    buffer[ci] = cinfo->mem->access_virt_barray(cinfo, coef->whole_image[compptr->component_index],
                                                cinfo->input_iMCU_row * compptr->v_samp_factor,
                                                compptr->v_samp_factor, 1);
  }
  for (yoffset = coef->MCU_vert_offset; yoffset < coef->MCU_rows_per_iMCU_row; yoffset++) {
    for (MCU_col_num = coef->MCU_ctr; MCU_col_num < cinfo->MCUs_per_row; MCU_col_num++) {
      blkn = 0;
      for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
        unsigned start_col;
        compptr = cinfo->cur_comp_info[ci];
        start_col = MCU_col_num * compptr->MCU_width;
        for (yindex = 0; yindex < compptr->MCU_height; yindex++) {
          buffer_ptr = (int *)(((char **)buffer[ci])[yindex + yoffset] + start_col * 0x80);
          for (xindex = 0; xindex < compptr->MCU_width; xindex++) {
            coef->MCU_buffer[blkn++] = (int)buffer_ptr;
            buffer_ptr += 0x20;
          }
        }
      }
      if (!cinfo->entropy->decode_mcu(cinfo, coef->MCU_buffer)) {
        coef->MCU_vert_offset = yoffset;
        coef->MCU_ctr = MCU_col_num;
        return 0;
      }
    }
    coef->MCU_ctr = 0;
  }
  if (++cinfo->input_iMCU_row < cinfo->total_iMCU_rows) {
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
