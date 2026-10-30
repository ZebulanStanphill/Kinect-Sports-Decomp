extern void *memcpy(void *d, const void *s, unsigned int n);
extern void fn_827BEAC8(void *cinfo, int cs);
extern void fn_827BF2B8(void *cinfo);
extern void *fn_827C1A20(void *cinfo);

typedef struct jpeg_common_struct_827BF930 *j_common_ptr_827BF930;
struct jpeg_error_mgr_827BF930 {
  void (*error_exit)(j_common_ptr_827BF930 cinfo);
  void (*emit_message)(void);
  void (*output_message)(void);
  void (*format_message)(void);
  void (*reset_error_mgr)(void);
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
};
struct jpeg_common_struct_827BF930 {
  struct jpeg_error_mgr_827BF930 *err;
  char pad0[0x10];
  int global_state;
};

typedef struct { unsigned short quantval[64]; unsigned char sent_table; } JQUANT_TBL_827BF930;

typedef struct {
  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  int quant_tbl_no;
  char pad[0x38];
  JQUANT_TBL_827BF930 *quant_table;
  char pad2[4];
} jpeg_component_info_827BF930;

typedef struct {
  struct jpeg_error_mgr_827BF930 *err;
  char pad0[0x10];
  int global_state;
  char pad1[4];
  unsigned int image_width;
  unsigned int image_height;
  int input_components;
  int in_color_space;
  char pad2[0xc];
  int data_precision;
  int num_components;
  int jpeg_color_space;
  jpeg_component_info_827BF930 *comp_info;
  JQUANT_TBL_827BF930 *quant_tbl_ptrs[4];
  char pad3[0x5b];
  unsigned char CCIR601_sampling;
  char pad4[0x11];
  unsigned char JFIF_major_version;
  unsigned char JFIF_minor_version;
  unsigned char density_unit;
  unsigned short X_density;
  unsigned short Y_density;
} jpeg_compress_struct_827BF930;

typedef struct {
  struct jpeg_error_mgr_827BF930 *err;
  char pad0[0x10];
  int global_state;
  char pad1[4];
  unsigned int image_width;
  unsigned int image_height;
  int num_components;
  int jpeg_color_space;
  char pad2[0x64];
  JQUANT_TBL_827BF930 *quant_tbl_ptrs[4];
  char pad3[0x20];
  int data_precision;
  jpeg_component_info_827BF930 *comp_info;
  char pad4[0x38];
  unsigned char saw_JFIF_marker;
  unsigned char JFIF_major_version;
  unsigned char JFIF_minor_version;
  unsigned char density_unit;
  unsigned short X_density;
  unsigned short Y_density;
  char pad5[2];
  unsigned char CCIR601_sampling;
} jpeg_decompress_struct_827BF930;

void fn_827BF930(jpeg_decompress_struct_827BF930 *srcinfo, jpeg_compress_struct_827BF930 *dstinfo)
{
  JQUANT_TBL_827BF930 **qtblptr;
  jpeg_component_info_827BF930 *incomp;
  jpeg_component_info_827BF930 *outcomp;
  JQUANT_TBL_827BF930 *c_quant;
  JQUANT_TBL_827BF930 *slot_quant;
  int tblno;
  int ci;
  int coefi;

  if (dstinfo->global_state != 100) {
    dstinfo->err->msg_code = 20;
    dstinfo->err->msg_parm.i[0] = dstinfo->global_state;
    (*dstinfo->err->error_exit)((j_common_ptr_827BF930)dstinfo);
  }
  dstinfo->image_width = srcinfo->image_width;
  dstinfo->image_height = srcinfo->image_height;
  dstinfo->input_components = srcinfo->num_components;
  dstinfo->in_color_space = srcinfo->jpeg_color_space;
  fn_827BF2B8(dstinfo);
  fn_827BEAC8(dstinfo, srcinfo->jpeg_color_space);
  dstinfo->data_precision = srcinfo->data_precision;
  dstinfo->CCIR601_sampling = srcinfo->CCIR601_sampling;
  for (tblno = 0; tblno < 4; tblno++) {
    if (srcinfo->quant_tbl_ptrs[tblno] != 0) {
      qtblptr = &dstinfo->quant_tbl_ptrs[tblno];
      if (*qtblptr == 0) {
        *qtblptr = (JQUANT_TBL_827BF930 *)fn_827C1A20(dstinfo);
      }
      memcpy((*qtblptr)->quantval, srcinfo->quant_tbl_ptrs[tblno]->quantval, 0x80);
      (*qtblptr)->sent_table = 0;
    }
  }
  dstinfo->num_components = srcinfo->num_components;
  if (dstinfo->num_components < 1 || dstinfo->num_components > 10) {
    dstinfo->err->msg_code = 26;
    dstinfo->err->msg_parm.i[0] = dstinfo->num_components;
    dstinfo->err->msg_parm.i[1] = 10;
    (*dstinfo->err->error_exit)((j_common_ptr_827BF930)dstinfo);
  }
  for (ci = 0, incomp = srcinfo->comp_info, outcomp = dstinfo->comp_info;
       ci < dstinfo->num_components; ci++, incomp++, outcomp++) {
    outcomp->component_id = incomp->component_id;
    outcomp->h_samp_factor = incomp->h_samp_factor;
    outcomp->v_samp_factor = incomp->v_samp_factor;
    outcomp->quant_tbl_no = incomp->quant_tbl_no;
    tblno = outcomp->quant_tbl_no;
    if (tblno < 0 || tblno >= 4 || srcinfo->quant_tbl_ptrs[tblno] == 0) {
      dstinfo->err->msg_code = 52;
      dstinfo->err->msg_parm.i[0] = tblno;
      (*dstinfo->err->error_exit)((j_common_ptr_827BF930)dstinfo);
    }
    slot_quant = srcinfo->quant_tbl_ptrs[tblno];
    c_quant = incomp->quant_table;
    if (c_quant != 0) {
      for (coefi = 0; coefi < 64; coefi++) {
        if (c_quant->quantval[coefi] != slot_quant->quantval[coefi]) {
          dstinfo->err->msg_code = 44;
          dstinfo->err->msg_parm.i[0] = tblno;
          (*dstinfo->err->error_exit)((j_common_ptr_827BF930)dstinfo);
        }
      }
    }
  }
  if (srcinfo->saw_JFIF_marker) {
    if (srcinfo->JFIF_major_version == 1) {
      dstinfo->JFIF_major_version = srcinfo->JFIF_major_version;
      dstinfo->JFIF_minor_version = srcinfo->JFIF_minor_version;
    }
    dstinfo->density_unit = srcinfo->density_unit;
    dstinfo->X_density = srcinfo->X_density;
    dstinfo->Y_density = srcinfo->Y_density;
  }
}
