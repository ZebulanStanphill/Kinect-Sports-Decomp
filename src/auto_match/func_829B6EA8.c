/* Corresponds to libjpeg jdmaster.c jpeg_calc_output_dimensions (open-source IJG libjpeg). */
typedef struct ErrMgr_829B6EA8 {
  void (*error_exit)(void *cinfo);   /* 0x00 */
  int pad04[4];                      /* 0x04 */
  int msg_code;                      /* 0x14 */
  int msg_parm_i0;                   /* 0x18 */
} ErrMgr_829B6EA8;

typedef struct Comp_829B6EA8 {
  int component_id;          /* 0x00 */
  int component_index;       /* 0x04 */
  int h_samp_factor;         /* 0x08 */
  int v_samp_factor;         /* 0x0c */
  int quant_tbl_no;          /* 0x10 */
  int dc_tbl_no;             /* 0x14 */
  int ac_tbl_no;             /* 0x18 */
  unsigned int width_in_blocks;   /* 0x1c */
  unsigned int height_in_blocks;  /* 0x20 */
  int DCT_scaled_size;       /* 0x24 */
  unsigned int downsampled_width;  /* 0x28 */
  unsigned int downsampled_height; /* 0x2c */
  int rest[9];               /* 0x30 .. 0x54 */
} Comp_829B6EA8;

typedef struct Decomp_829B6EA8 {
  ErrMgr_829B6EA8 *err;          /* 0x00 */
  int pad04[4];                  /* 0x04 */
  int global_state;              /* 0x14 */
  int pad18;                     /* 0x18 */
  unsigned int image_width;      /* 0x1c */
  unsigned int image_height;     /* 0x20 */
  int num_components;            /* 0x24 */
  int jpeg_color_space;          /* 0x28 */
  int out_color_space;           /* 0x2c */
  unsigned int scale_num;        /* 0x30 */
  unsigned int scale_denom;      /* 0x34 */
  int pad38[7];                  /* 0x38 */
  int quantize_colors;           /* 0x54 */
  int pad58[6];                  /* 0x58 */
  unsigned int output_width;     /* 0x70 */
  unsigned int output_height;    /* 0x74 */
  int out_color_components;      /* 0x78 */
  int output_components;         /* 0x7c */
  int rec_outbuf_height;         /* 0x80 */
  int pad84[22];                 /* 0x84 */
  Comp_829B6EA8 *comp_info;      /* 0xdc */
  int padE0[22];                 /* 0xe0 */
  int max_h_samp_factor;         /* 0x138 */
  int max_v_samp_factor;         /* 0x13c */
  int min_DCT_scaled_size;       /* 0x140 */
} Decomp_829B6EA8;

extern long d3dx_jdiv_round_up(long a, long b);
extern int fn_829B6DE0(Decomp_829B6EA8 *cinfo);

void fn_829B6EA8(Decomp_829B6EA8 *cinfo)
{
  int ci;
  Comp_829B6EA8 *compptr;

  if (cinfo->global_state != 0xca) {
    cinfo->err->msg_code = 0x14;
    cinfo->err->msg_parm_i0 = cinfo->global_state;
    (*cinfo->err->error_exit)(cinfo);
  }

  if (cinfo->scale_num * 8 <= cinfo->scale_denom) {
    cinfo->output_width = (unsigned int)d3dx_jdiv_round_up((long)cinfo->image_width, 8L);
    cinfo->output_height = (unsigned int)d3dx_jdiv_round_up((long)cinfo->image_height, 8L);
    cinfo->min_DCT_scaled_size = 1;
  } else if (cinfo->scale_num * 4 <= cinfo->scale_denom) {
    cinfo->output_width = (unsigned int)d3dx_jdiv_round_up((long)cinfo->image_width, 4L);
    cinfo->output_height = (unsigned int)d3dx_jdiv_round_up((long)cinfo->image_height, 4L);
    cinfo->min_DCT_scaled_size = 2;
  } else if (cinfo->scale_num * 2 <= cinfo->scale_denom) {
    cinfo->output_width = (unsigned int)d3dx_jdiv_round_up((long)cinfo->image_width, 2L);
    cinfo->output_height = (unsigned int)d3dx_jdiv_round_up((long)cinfo->image_height, 2L);
    cinfo->min_DCT_scaled_size = 4;
  } else {
    cinfo->output_width = cinfo->image_width;
    cinfo->output_height = cinfo->image_height;
    cinfo->min_DCT_scaled_size = 8;
  }

  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
    int ssize = cinfo->min_DCT_scaled_size;
    while (ssize < 8 &&
           (compptr->h_samp_factor * ssize * 2 <=
            cinfo->max_h_samp_factor * cinfo->min_DCT_scaled_size) &&
           (compptr->v_samp_factor * ssize * 2 <=
            cinfo->max_v_samp_factor * cinfo->min_DCT_scaled_size)) {
      ssize = ssize * 2;
    }
    compptr->DCT_scaled_size = ssize;
  }

  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
    compptr->downsampled_width = (unsigned int)
      d3dx_jdiv_round_up((long)cinfo->image_width *
                  (long)(compptr->h_samp_factor * compptr->DCT_scaled_size),
                  (long)(cinfo->max_h_samp_factor * 8));
    compptr->downsampled_height = (unsigned int)
      d3dx_jdiv_round_up((long)cinfo->image_height *
                  (long)(compptr->v_samp_factor * compptr->DCT_scaled_size),
                  (long)(cinfo->max_v_samp_factor * 8));
  }

  switch (cinfo->out_color_space) {
  case 1:
    cinfo->out_color_components = 1;
    break;
  case 2:
  case 3:
    cinfo->out_color_components = 3;
    break;
  case 4:
  case 5:
    cinfo->out_color_components = 4;
    break;
  default:
    cinfo->out_color_components = cinfo->num_components;
    break;
  }
  cinfo->output_components = (cinfo->quantize_colors ? 1 : cinfo->out_color_components);

  if (fn_829B6DE0(cinfo))
    cinfo->rec_outbuf_height = cinfo->max_v_samp_factor;
  else
    cinfo->rec_outbuf_height = 1;
}
