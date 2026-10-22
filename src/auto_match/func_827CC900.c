typedef struct jpeg_decompress_struct *j_decompress_ptr;

struct jpeg_error_mgr {
  void (*error_exit)(j_decompress_ptr cinfo);
  int pad[4];
  int msg_code;
  int msg_parm_i[8];
};

struct jpeg_memory_mgr {
  void *(*alloc_small)(j_decompress_ptr cinfo, int pool_id, unsigned int sizeofobject);
  void *(*alloc_large)(j_decompress_ptr cinfo, int pool_id, unsigned int sizeofobject);
  void **(*alloc_sarray)(j_decompress_ptr cinfo, int pool_id, unsigned int samplesperrow, unsigned int numrows);
};

struct jpeg_color_quantizer {
  void (*start_pass)(j_decompress_ptr cinfo, int is_pre_scan);
  void (*color_quantize)(j_decompress_ptr cinfo);
  void (*finish_pass)(j_decompress_ptr cinfo);
  void (*new_color_map)(j_decompress_ptr cinfo);
};

typedef struct {
  struct jpeg_color_quantizer pub;
  void **sv_colormap;
  int desired;
  void **histogram;
  unsigned char needs_zeroed;
  short *fserrors;
  unsigned char on_odd_row;
  int *error_limiter;
} my_cquantizer;

struct jpeg_decompress_struct {
  struct jpeg_error_mgr *err;
  struct jpeg_memory_mgr *mem;
  char pad8[0x4c - 8];
  int dither_mode;
  char pad50[0x54 - 0x50];
  int desired_number_of_colors;
  char pad58[2];
  unsigned char enable_2pass_quant;
  char pad5b;
  unsigned int output_width;
  char pad60[0x64 - 0x60];
  int out_color_components;
  char pad68[0x1a8 - 0x68];
  struct jpeg_color_quantizer *cquantize;
};

extern void fn_827CC638(j_decompress_ptr cinfo);
extern void fn_827CC758(j_decompress_ptr cinfo, int is_pre_scan);
extern void fn_827CC8F0(j_decompress_ptr cinfo);

void fn_827CC900(j_decompress_ptr cinfo)
{
  my_cquantizer *cquantize;
  int i;

  cquantize = (my_cquantizer *)(*cinfo->mem->alloc_small)(cinfo, 1, sizeof(my_cquantizer));
  cinfo->cquantize = (struct jpeg_color_quantizer *)cquantize;
  cquantize->fserrors = 0;
  cquantize->pub.start_pass = fn_827CC758;
  cquantize->pub.new_color_map = fn_827CC8F0;
  cquantize->error_limiter = 0;

  if (cinfo->out_color_components != 3) {
    cinfo->err->msg_code = 0x2f;
    (*cinfo->err->error_exit)(cinfo);
  }

  cquantize->histogram = (void **)(*cinfo->mem->alloc_small)(cinfo, 1, 32 * sizeof(void *));
  for (i = 0; i < 32; i++) {
    cquantize->histogram[i] = (*cinfo->mem->alloc_large)(cinfo, 1, 64 * 32 * sizeof(unsigned short));
  }
  cquantize->needs_zeroed = 1;

  if (cinfo->enable_2pass_quant) {
    int desired = cinfo->desired_number_of_colors;
    if (desired < 8) {
      cinfo->err->msg_code = 0x38;
      cinfo->err->msg_parm_i[0] = 8;
      (*cinfo->err->error_exit)(cinfo);
    }
    if (desired > 256) {
      cinfo->err->msg_code = 0x39;
      cinfo->err->msg_parm_i[0] = 256;
      (*cinfo->err->error_exit)(cinfo);
    }
    cquantize->sv_colormap = (*cinfo->mem->alloc_sarray)(cinfo, 1, (unsigned int)desired, 3);
    cquantize->desired = desired;
  } else
    cquantize->sv_colormap = 0;

  if (cinfo->dither_mode != 0)
    cinfo->dither_mode = 2;

  if (cinfo->dither_mode == 2) {
    cquantize->fserrors = (short *)(*cinfo->mem->alloc_large)(cinfo, 1,
        (unsigned int)((cinfo->output_width + 2) * (3 * sizeof(short))));
    fn_827CC638(cinfo);
  }
}
