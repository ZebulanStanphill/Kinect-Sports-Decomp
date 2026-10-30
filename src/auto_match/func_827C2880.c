typedef unsigned char boolean;
typedef unsigned JDIMENSION;
typedef short JCOEF;
typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;
typedef struct jdinfo_827C2880 *j_decompress_ptr;
typedef struct jdinfo_827C2880 *j_common_ptr;
typedef struct jvirt_82 *jvirt_barray_ptr;
struct jmem_827C2880 {
  char pad[0x20];
  JBLOCKARRAY (*access_virt_barray)(j_common_ptr, jvirt_barray_ptr, JDIMENSION, JDIMENSION, boolean);
};
struct jcomp_827C2880 {
  char pad0[4];
  int component_index;
  char pad8[4];
  int v_samp_factor;
  char pad10[0x24];
  int MCU_width;
  int MCU_height;
};
struct jentropy_827C2880 {
  void *start_pass;
  boolean (*decode_mcu)(j_decompress_ptr, JBLOCKROW *);
};
struct jinputctl_827C2880 {
  void *consume_input;
  void *reset_input_controller;
  void *start_input_pass;
  void (*finish_input_pass)(j_decompress_ptr);
};
struct coef_827C2880 {
  char pub[0x14];
  JDIMENSION MCU_ctr;
  int MCU_vert_offset;
  int MCU_rows_per_iMCU_row;
  JBLOCKROW MCU_buffer[10];
  jvirt_barray_ptr whole_image[4];
};
struct jdinfo_827C2880 {
  void *err;
  struct jmem_827C2880 *mem;
  char pad8[0x78];
  JDIMENSION input_iMCU_row;
  char pad84[0x98];
  JDIMENSION total_iMCU_rows;
  char pad120[4];
  int comps_in_scan;
  struct jcomp_827C2880 *cur_comp_info[4];
  JDIMENSION MCUs_per_row;
  char pad13c[0x4c];
  struct coef_827C2880 *coef;
  void *p18c;
  struct jinputctl_827C2880 *inputctl;
  void *p194;
  struct jentropy_827C2880 *entropy;
};
extern void fn_827C25F0(j_decompress_ptr);

int fn_827C2880(j_decompress_ptr cinfo)
{
  struct coef_827C2880 *coef = cinfo->coef;
  JDIMENSION MCU_col_num;
  int blkn, ci, xindex, yindex, yoffset;
  JDIMENSION start_col;
  JBLOCKARRAY buffer[4];
  JBLOCKROW buffer_ptr;
  struct jcomp_827C2880 *compptr;

  for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
    compptr = cinfo->cur_comp_info[ci];
    buffer[ci] = (*cinfo->mem->access_virt_barray)(cinfo, coef->whole_image[compptr->component_index],
        cinfo->input_iMCU_row * compptr->v_samp_factor, (JDIMENSION)compptr->v_samp_factor, 1);
  }
  for (yoffset = coef->MCU_vert_offset; yoffset < coef->MCU_rows_per_iMCU_row; yoffset++) {
    for (MCU_col_num = coef->MCU_ctr; MCU_col_num < cinfo->MCUs_per_row; MCU_col_num++) {
      blkn = 0;
      for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
        compptr = cinfo->cur_comp_info[ci];
        start_col = MCU_col_num * compptr->MCU_width;
        for (yindex = 0; yindex < compptr->MCU_height; yindex++) {
          buffer_ptr = buffer[ci][yindex + yoffset] + start_col;
          for (xindex = 0; xindex < compptr->MCU_width; xindex++) {
            coef->MCU_buffer[blkn++] = buffer_ptr++;
          }
        }
      }
      if (!(*cinfo->entropy->decode_mcu)(cinfo, coef->MCU_buffer)) {
        coef->MCU_vert_offset = yoffset;
        coef->MCU_ctr = MCU_col_num;
        return 0;
      }
    }
    coef->MCU_ctr = 0;
  }
  if (++(cinfo->input_iMCU_row) < cinfo->total_iMCU_rows) {
    fn_827C25F0(cinfo);
    return 3;
  }
  (*cinfo->inputctl->finish_input_pass)(cinfo);
  return 4;
}
