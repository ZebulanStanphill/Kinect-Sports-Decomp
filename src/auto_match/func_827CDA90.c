/* Corresponds to libjpeg 6b jccoefct.c compress_data (open-source IJG libjpeg 6b): the upstream function with the declarations it uses, preprocessed, symbols renamed to the game's. */
typedef unsigned char boolean;
typedef unsigned int size_t;
typedef unsigned char JSAMPLE;
typedef short JCOEF;
typedef unsigned char JOCTET;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int JDIMENSION;
typedef JSAMPLE  *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef JCOEF JBLOCK[64];
typedef JBLOCK  *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;
typedef struct {

  UINT16 quantval[64];

  boolean sent_table;
} JQUANT_TBL;
typedef struct {

  UINT8 bits[17];

  UINT8 huffval[256];

  boolean sent_table;
} JHUFF_TBL;
typedef struct {

  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  int quant_tbl_no;

  int dc_tbl_no;
  int ac_tbl_no;

  JDIMENSION width_in_blocks;
  JDIMENSION height_in_blocks;

  int DCT_scaled_size;

  JDIMENSION downsampled_width;
  JDIMENSION downsampled_height;

  boolean component_needed;

  int MCU_width;
  int MCU_height;
  int MCU_blocks;
  int MCU_sample_width;
  int last_col_width;
  int last_row_height;

  JQUANT_TBL * quant_table;

  void * dct_table;
} jpeg_component_info;
typedef struct {
  int comps_in_scan;
  int component_index[4];
  int Ss, Se;
  int Ah, Al;
} jpeg_scan_info;
typedef enum {
	JCS_UNKNOWN,
	JCS_GRAYSCALE,
	JCS_RGB,
	JCS_YCbCr,
	JCS_CMYK,
	JCS_YCCK
} J_COLOR_SPACE;
typedef enum {
	JDCT_ISLOW,
	JDCT_IFAST,
	JDCT_FLOAT
} J_DCT_METHOD;
struct jpeg_common_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;

};
typedef struct jpeg_common_struct * j_common_ptr;
typedef struct jpeg_compress_struct * j_compress_ptr;
struct jpeg_compress_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;

  struct jpeg_destination_mgr * dest;

  JDIMENSION image_width;
  JDIMENSION image_height;
  int input_components;
  J_COLOR_SPACE in_color_space;

  double input_gamma;

  int data_precision;

  int num_components;
  J_COLOR_SPACE jpeg_color_space;

  jpeg_component_info * comp_info;

  JQUANT_TBL * quant_tbl_ptrs[4];

  JHUFF_TBL * dc_huff_tbl_ptrs[4];
  JHUFF_TBL * ac_huff_tbl_ptrs[4];

  UINT8 arith_dc_L[16];
  UINT8 arith_dc_U[16];
  UINT8 arith_ac_K[16];

  int num_scans;
  const jpeg_scan_info * scan_info;

  boolean raw_data_in;
  boolean arith_code;
  boolean optimize_coding;
  boolean CCIR601_sampling;
  int smoothing_factor;
  J_DCT_METHOD dct_method;

  unsigned int restart_interval;
  int restart_in_rows;

  boolean write_JFIF_header;
  UINT8 JFIF_major_version;
  UINT8 JFIF_minor_version;

  UINT8 density_unit;
  UINT16 X_density;
  UINT16 Y_density;
  boolean write_Adobe_marker;

  JDIMENSION next_scanline;

  boolean progressive_mode;
  int max_h_samp_factor;
  int max_v_samp_factor;

  JDIMENSION total_iMCU_rows;

  int comps_in_scan;
  jpeg_component_info * cur_comp_info[4];

  JDIMENSION MCUs_per_row;
  JDIMENSION MCU_rows_in_scan;

  int blocks_in_MCU;
  int MCU_membership[10];

  int Ss, Se, Ah, Al;

  struct jpeg_comp_master * master;
  struct jpeg_c_main_controller * main;
  struct jpeg_c_prep_controller * prep;
  struct jpeg_c_coef_controller * coef;
  struct jpeg_marker_writer * marker;
  struct jpeg_color_converter * cconvert;
  struct jpeg_downsampler * downsample;
  struct jpeg_forward_dct * fdct;
  struct jpeg_entropy_encoder * entropy;
  jpeg_scan_info * script_space;
  int script_space_size;
};
struct jpeg_error_mgr {

  void (*error_exit) (j_common_ptr cinfo);

  void (*emit_message) (j_common_ptr cinfo, int msg_level);

  void (*output_message) (j_common_ptr cinfo);

  void (*format_message) (j_common_ptr cinfo, char * buffer);

  void (*reset_error_mgr) (j_common_ptr cinfo);

  int msg_code;

  union {
    int i[8];
    char s[80];
  } msg_parm;

  int trace_level;

  long num_warnings;

  const char * const * jpeg_message_table;
  int last_jpeg_message;

  const char * const * addon_message_table;
  int first_addon_message;
  int last_addon_message;
};
struct jpeg_progress_mgr {
  void (*progress_monitor) (j_common_ptr cinfo);

  long pass_counter;
  long pass_limit;
  int completed_passes;
  int total_passes;
};
struct jpeg_destination_mgr {
  JOCTET * next_output_byte;
  size_t free_in_buffer;

  void (*init_destination) (j_compress_ptr cinfo);
  boolean (*empty_output_buffer) (j_compress_ptr cinfo);
  void (*term_destination) (j_compress_ptr cinfo);
};
typedef struct jvirt_sarray_control * jvirt_sarray_ptr;
typedef struct jvirt_barray_control * jvirt_barray_ptr;
struct jpeg_memory_mgr {

  void * (*alloc_small) (j_common_ptr cinfo, int pool_id, size_t sizeofobject);
  void  * (*alloc_large) (j_common_ptr cinfo, int pool_id, size_t sizeofobject);
  JSAMPARRAY (*alloc_sarray) (j_common_ptr cinfo, int pool_id, JDIMENSION samplesperrow, JDIMENSION numrows);
  JBLOCKARRAY (*alloc_barray) (j_common_ptr cinfo, int pool_id, JDIMENSION blocksperrow, JDIMENSION numrows);
  jvirt_sarray_ptr (*request_virt_sarray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION samplesperrow, JDIMENSION numrows, JDIMENSION maxaccess);
  jvirt_barray_ptr (*request_virt_barray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION blocksperrow, JDIMENSION numrows, JDIMENSION maxaccess);
  void (*realize_virt_arrays) (j_common_ptr cinfo);
  JSAMPARRAY (*access_virt_sarray) (j_common_ptr cinfo, jvirt_sarray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable);
  JBLOCKARRAY (*access_virt_barray) (j_common_ptr cinfo, jvirt_barray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable);
  void (*free_pool) (j_common_ptr cinfo, int pool_id);
  void (*self_destruct) (j_common_ptr cinfo);

  long max_memory_to_use;

  long max_alloc_chunk;
};
typedef enum {
	JBUF_PASS_THRU,

	JBUF_SAVE_SOURCE,
	JBUF_CRANK_DEST,
	JBUF_SAVE_AND_PASS
} J_BUF_MODE;
struct jpeg_comp_master {
  void (*prepare_for_pass) (j_compress_ptr cinfo);
  void (*pass_startup) (j_compress_ptr cinfo);
  void (*finish_pass) (j_compress_ptr cinfo);

  boolean call_pass_startup;
  boolean is_last_pass;
};
struct jpeg_c_main_controller {
  void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*process_data) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail);
};
struct jpeg_c_prep_controller {
  void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*pre_process_data) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION *in_row_ctr, JDIMENSION in_rows_avail, JSAMPIMAGE output_buf, JDIMENSION *out_row_group_ctr, JDIMENSION out_row_groups_avail);
};
struct jpeg_c_coef_controller {
  void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  boolean (*compress_data) (j_compress_ptr cinfo, JSAMPIMAGE input_buf);
};
struct jpeg_color_converter {
  void (*start_pass) (j_compress_ptr cinfo);
  void (*color_convert) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JSAMPIMAGE output_buf, JDIMENSION output_row, int num_rows);
};
struct jpeg_downsampler {
  void (*start_pass) (j_compress_ptr cinfo);
  void (*downsample) (j_compress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION in_row_index, JSAMPIMAGE output_buf, JDIMENSION out_row_group_index);

  boolean need_context_rows;
};
struct jpeg_forward_dct {
  void (*start_pass) (j_compress_ptr cinfo);

  void (*forward_DCT) (j_compress_ptr cinfo, jpeg_component_info * compptr, JSAMPARRAY sample_data, JBLOCKROW coef_blocks, JDIMENSION start_row, JDIMENSION start_col, JDIMENSION num_blocks);
};
struct jpeg_entropy_encoder {
  void (*start_pass) (j_compress_ptr cinfo, boolean gather_statistics);
  boolean (*encode_mcu) (j_compress_ptr cinfo, JBLOCKROW *MCU_data);
  void (*finish_pass) (j_compress_ptr cinfo);
};
struct jpeg_marker_writer {
  void (*write_file_header) (j_compress_ptr cinfo);
  void (*write_frame_header) (j_compress_ptr cinfo);
  void (*write_scan_header) (j_compress_ptr cinfo);
  void (*write_file_trailer) (j_compress_ptr cinfo);
  void (*write_tables_only) (j_compress_ptr cinfo);

  void (*write_marker_header) (j_compress_ptr cinfo, int marker, unsigned int datalen);
  void (*write_marker_byte) (j_compress_ptr cinfo, int val);
};
extern void jzero_far (void  * target, size_t bytestozero);
typedef struct {
  struct jpeg_c_coef_controller pub;

  JDIMENSION iMCU_row_num;
  JDIMENSION mcu_ctr;
  int MCU_vert_offset;
  int MCU_rows_per_iMCU_row;

  JBLOCKROW MCU_buffer[10];

  jvirt_barray_ptr whole_image[10];
} my_coef_controller;
typedef my_coef_controller * my_coef_ptr;
extern void fn_827CDA40 (j_compress_ptr cinfo);

boolean
fn_827CDA90 (j_compress_ptr cinfo, JSAMPIMAGE input_buf)
{
  my_coef_ptr coef = (my_coef_ptr) cinfo->coef;
  JDIMENSION MCU_col_num;
  JDIMENSION last_MCU_col = cinfo->MCUs_per_row - 1;
  JDIMENSION last_iMCU_row = cinfo->total_iMCU_rows - 1;
  int blkn, bi, ci, yindex, yoffset, blockcnt;
  JDIMENSION ypos, xpos;
  jpeg_component_info *compptr;

  for (yoffset = coef->MCU_vert_offset; yoffset < coef->MCU_rows_per_iMCU_row;
       yoffset++) {
    for (MCU_col_num = coef->mcu_ctr; MCU_col_num <= last_MCU_col;
	 MCU_col_num++) {
      blkn = 0;
      for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
	compptr = cinfo->cur_comp_info[ci];
	blockcnt = (MCU_col_num < last_MCU_col) ? compptr->MCU_width
						: compptr->last_col_width;
	xpos = MCU_col_num * compptr->MCU_sample_width;
	ypos = yoffset * 8;
	for (yindex = 0; yindex < compptr->MCU_height; yindex++) {
	  if (coef->iMCU_row_num < last_iMCU_row ||
	      yoffset+yindex < compptr->last_row_height) {
	    (*cinfo->fdct->forward_DCT) (cinfo, compptr,
					 input_buf[compptr->component_index],
					 coef->MCU_buffer[blkn],
					 ypos, xpos, (JDIMENSION) blockcnt);
	    if (blockcnt < compptr->MCU_width) {
	      jzero_far((void *) coef->MCU_buffer[blkn + blockcnt],
			(compptr->MCU_width - blockcnt) * ((size_t) sizeof(JBLOCK)));
	      for (bi = blockcnt; bi < compptr->MCU_width; bi++) {
		coef->MCU_buffer[blkn+bi][0][0] = coef->MCU_buffer[blkn+bi-1][0][0];
	      }
	    }
	  } else {
	    jzero_far((void *) coef->MCU_buffer[blkn],
		      compptr->MCU_width * ((size_t) sizeof(JBLOCK)));
	    for (bi = 0; bi < compptr->MCU_width; bi++) {
	      coef->MCU_buffer[blkn+bi][0][0] = coef->MCU_buffer[blkn-1][0][0];
	    }
	  }
	  blkn += compptr->MCU_width;
	  ypos += 8;
	}
      }
      if (! (*cinfo->entropy->encode_mcu) (cinfo, coef->MCU_buffer)) {
	coef->MCU_vert_offset = yoffset;
	coef->mcu_ctr = MCU_col_num;
	return 0;
      }
    }
    coef->mcu_ctr = 0;
  }
  coef->iMCU_row_num++;
  fn_827CDA40(cinfo);
  return 1;
}
