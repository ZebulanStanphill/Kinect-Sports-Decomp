/* Corresponds to libjpeg jdmaster.c master_selection (open-source IJG libjpeg). */
typedef unsigned char boolean;

struct jpeg_error_mgr_827C1F78 {
  void (*error_exit)(void *cinfo);
  void (*emit_message)(void);
  void (*output_message)(void);
  void (*format_message)(void);
  void (*reset_error_mgr)(void);
  int msg_code;
};

struct jpeg_memory_mgr_827C1F78 {
  void (*pad[6])(void);
  void (*realize_virt_arrays)(void *cinfo);
};

struct jpeg_progress_mgr_827C1F78 {
  void (*progress_monitor)(void);
  int pass_counter;
  int pass_limit;
  int completed_passes;
  int total_passes;
};

struct jpeg_input_controller_827C1F78 {
  void (*consume_input)(void);
  void (*reset_input_controller)(void);
  void (*start_input_pass)(void *cinfo);
  void (*finish_input_pass)(void);
  boolean has_multiple_scans;
  boolean eoi_reached;
};

struct my_decomp_master_827C1F78 {
  void (*prepare_for_output_pass)(void);
  void (*finish_output_pass)(void);
  boolean is_dummy_pass;
  int pass_number;
  boolean using_merged_upsample;
  void *quantizer_1pass;
  void *quantizer_2pass;
};

struct Cinfo_827C1F78 {
  struct jpeg_error_mgr_827C1F78 *err;          /* 0x00 */
  struct jpeg_memory_mgr_827C1F78 *mem;         /* 0x04 */
  struct jpeg_progress_mgr_827C1F78 *progress;  /* 0x08 */
  char pad0c[0x18];
  int num_components;                           /* 0x24 */
  char pad28[0x18];
  boolean buffered_image;                       /* 0x40 */
  boolean raw_data_out;                         /* 0x41 */
  char pad42[8];
  boolean quantize_colors;                      /* 0x4a */
  char pad4b[5];
  boolean two_pass_quantize;                    /* 0x50 */
  char pad51[7];
  boolean enable_1pass_quant;                   /* 0x58 */
  boolean enable_external_quant;                /* 0x59 */
  boolean enable_2pass_quant;                   /* 0x5a */
  char pad5b[9];
  int out_color_components;                     /* 0x64 */
  char pad68[0xc];
  void *colormap;                               /* 0x74 */
  char pad78[0x50];
  boolean progressive_mode;                     /* 0xc8 */
  boolean arith_code;                           /* 0xc9 */
  char padca[0x52];
  int total_iMCU_rows;                          /* 0x11c */
  char pad120[0x60];
  struct my_decomp_master_827C1F78 *master;     /* 0x180 */
  char pad184[0xc];
  struct jpeg_input_controller_827C1F78 *inputctl; /* 0x190 */
  char pad194[0x14];
  void *cquantize;                              /* 0x1a8 */
};

extern boolean use_merged_upsample(struct Cinfo_827C1F78 *cinfo);
extern void jpeg_calc_output_dimensions(struct Cinfo_827C1F78 *cinfo);
extern void fn_827C1EC0(struct Cinfo_827C1F78 *cinfo);
extern void jinit_d_coef_controller(struct Cinfo_827C1F78 *cinfo, int need_full_buffer);
extern void jinit_huff_decoder(struct Cinfo_827C1F78 *cinfo);
extern void jinit_phuff_decoder(struct Cinfo_827C1F78 *cinfo);
extern void jinit_d_main_controller(struct Cinfo_827C1F78 *cinfo, int b);
extern void fn_827C9BB0(struct Cinfo_827C1F78 *cinfo);
extern void jinit_d_post_controller(struct Cinfo_827C1F78 *cinfo, boolean b);
extern void fn_827CA648(struct Cinfo_827C1F78 *cinfo);
extern void jinit_color_deconverter(struct Cinfo_827C1F78 *cinfo);
extern void jinit_merged_upsampler(struct Cinfo_827C1F78 *cinfo);
extern void jinit_2pass_quantizer(struct Cinfo_827C1F78 *cinfo);
extern void jinit_1pass_quantizer(struct Cinfo_827C1F78 *cinfo);

void master_selection(struct Cinfo_827C1F78 *cinfo)
{
  struct my_decomp_master_827C1F78 *master = cinfo->master;

  jpeg_calc_output_dimensions(cinfo);
  fn_827C1EC0(cinfo);

  master->pass_number = 0;
  master->using_merged_upsample = use_merged_upsample(cinfo);
  master->quantizer_1pass = 0;
  master->quantizer_2pass = 0;

  if (!cinfo->quantize_colors || !cinfo->buffered_image) {
    cinfo->enable_1pass_quant = 0;
    cinfo->enable_external_quant = 0;
    cinfo->enable_2pass_quant = 0;
  }
  if (cinfo->quantize_colors) {
    if (cinfo->raw_data_out) {
      cinfo->err->msg_code = 0x2f;
      (*cinfo->err->error_exit)(cinfo);
    }
    if (cinfo->out_color_components != 3) {
      cinfo->enable_1pass_quant = 1;
      cinfo->enable_external_quant = 0;
      cinfo->enable_2pass_quant = 0;
      cinfo->colormap = 0;
    } else if (cinfo->colormap != 0) {
      cinfo->enable_external_quant = 1;
    } else if (cinfo->two_pass_quantize) {
      cinfo->enable_2pass_quant = 1;
    } else {
      cinfo->enable_1pass_quant = 1;
    }

    if (cinfo->enable_1pass_quant) {
      jinit_1pass_quantizer(cinfo);
      master->quantizer_1pass = cinfo->cquantize;
    }
    if (cinfo->enable_2pass_quant || cinfo->enable_external_quant) {
      jinit_2pass_quantizer(cinfo);
      master->quantizer_2pass = cinfo->cquantize;
    }
  }

  if (!cinfo->raw_data_out) {
    if (master->using_merged_upsample) {
      jinit_merged_upsampler(cinfo);
    } else {
      jinit_color_deconverter(cinfo);
      fn_827CA648(cinfo);
    }
    jinit_d_post_controller(cinfo, cinfo->enable_2pass_quant);
  }

  fn_827C9BB0(cinfo);
  if (cinfo->arith_code) {
    cinfo->err->msg_code = 1;
    (*cinfo->err->error_exit)(cinfo);
  } else {
    if (cinfo->progressive_mode) {
      jinit_phuff_decoder(cinfo);
    } else {
      jinit_huff_decoder(cinfo);
    }
  }

  jinit_d_coef_controller(cinfo, cinfo->inputctl->has_multiple_scans || cinfo->buffered_image);

  if (!cinfo->raw_data_out)
    jinit_d_main_controller(cinfo, 0);

  (*cinfo->mem->realize_virt_arrays)(cinfo);
  (*cinfo->inputctl->start_input_pass)(cinfo);

  if (cinfo->progress != 0 && !cinfo->buffered_image &&
      cinfo->inputctl->has_multiple_scans) {
    int nscans;
    if (cinfo->progressive_mode) {
      nscans = 2 + 3 * cinfo->num_components;
    } else {
      nscans = cinfo->num_components;
    }
    cinfo->progress->pass_counter = 0;
    cinfo->progress->pass_limit = cinfo->total_iMCU_rows * nscans;
    cinfo->progress->completed_passes = 0;
    cinfo->progress->total_passes = (cinfo->enable_2pass_quant ? 3 : 2);
    master->pass_number++;
  }
}
