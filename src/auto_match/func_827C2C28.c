/* libjpeg jdcoefct.c smoothing_ok */
struct jpeg_decompress_struct;
struct jpeg_memory_mgr {
  void *(*alloc_small)(struct jpeg_decompress_struct *cinfo, int pool_id, unsigned int sizeofobject);
};
typedef struct {
  unsigned short quantval[64];
  unsigned char sent_table;
} JQUANT_TBL;
typedef struct {
  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  int quant_tbl_no;
  int dc_tbl_no;
  int ac_tbl_no;
  unsigned int width_in_blocks;
  unsigned int height_in_blocks;
  int DCT_scaled_size;
  unsigned int downsampled_width;
  unsigned int downsampled_height;
  unsigned char component_needed;
  int MCU_width;
  int MCU_height;
  int MCU_blocks;
  int MCU_sample_width;
  int last_col_width;
  int last_row_height;
  JQUANT_TBL *quant_table;
  void *dct_table;
} jpeg_component_info;
typedef struct {
  char pad[0x70];
  int *coef_bits_latch;
} my_coef_controller;
struct jpeg_decompress_struct {
  void *err;
  struct jpeg_memory_mgr *mem;
  char pad0[0x1c];
  int num_components;
  char pad1[0x64];
  int (*coef_bits)[64];
  char pad2[0x34];
  jpeg_component_info *comp_info;
  unsigned char progressive_mode;
  char pad3[0xbf];
  my_coef_controller *coef;
};
typedef struct jpeg_decompress_struct *j_decompress_ptr;

int fn_827C2C28(j_decompress_ptr cinfo)
{
  my_coef_controller *coef = cinfo->coef;
  int smoothing_useful = 0;
  int ci, coefi;
  jpeg_component_info *compptr;
  JQUANT_TBL *qtable;
  int *coef_bits;
  int *coef_bits_latch;

  if (!cinfo->progressive_mode || cinfo->coef_bits == 0)
    return 0;

  if (coef->coef_bits_latch == 0)
    coef->coef_bits_latch = (int *)(*cinfo->mem->alloc_small)(cinfo, 1, cinfo->num_components * (6 * sizeof(int)));
  coef_bits_latch = coef->coef_bits_latch;

  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
    if ((qtable = compptr->quant_table) == 0)
      return 0;
    if (qtable->quantval[0] == 0 || qtable->quantval[1] == 0 || qtable->quantval[8] == 0 ||
        qtable->quantval[16] == 0 || qtable->quantval[9] == 0 || qtable->quantval[2] == 0)
      return 0;
    coef_bits = cinfo->coef_bits[ci];
    if (coef_bits[0] < 0)
      return 0;
    for (coefi = 1; coefi <= 5; coefi++) {
      coef_bits_latch[coefi] = coef_bits[coefi];
      if (coef_bits[coefi] != 0)
        smoothing_useful = 1;
    }
    coef_bits_latch += 6;
  }
  return smoothing_useful;
}
