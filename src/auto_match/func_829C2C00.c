/* Corresponds to libjpeg 6b jidctflt.c jpeg_idct_float (open-source IJG libjpeg 6b), D3DX's copy (boolean built as int). */
typedef int boolean;
typedef unsigned int size_t;
typedef unsigned char JSAMPLE;
typedef short JCOEF;
typedef unsigned char JOCTET;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef long INT32;
typedef unsigned int JDIMENSION;
typedef JSAMPLE  *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef JCOEF JBLOCK[64];
typedef JBLOCK  *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;
typedef JCOEF  *JCOEFPTR;
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
typedef struct jpeg_marker_struct  * jpeg_saved_marker_ptr;
struct jpeg_marker_struct {
  jpeg_saved_marker_ptr next;
  UINT8 marker;
  unsigned int original_length;
  unsigned int data_length;
  JOCTET  * data;

};
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
typedef enum {
	JDITHER_NONE,
	JDITHER_ORDERED,
	JDITHER_FS
} J_DITHER_MODE;
struct jpeg_common_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;

};
typedef struct jpeg_common_struct * j_common_ptr;
typedef struct jpeg_decompress_struct * j_decompress_ptr;
struct jpeg_decompress_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;

  struct jpeg_source_mgr * src;

  JDIMENSION image_width;
  JDIMENSION image_height;
  int num_components;
  J_COLOR_SPACE jpeg_color_space;

  J_COLOR_SPACE out_color_space;

  unsigned int scale_num, scale_denom;

  double output_gamma;

  boolean buffered_image;
  boolean raw_data_out;

  J_DCT_METHOD dct_method;
  boolean do_fancy_upsampling;
  boolean do_block_smoothing;

  boolean quantize_colors;

  J_DITHER_MODE dither_mode;
  boolean two_pass_quantize;
  int desired_number_of_colors;

  boolean enable_1pass_quant;
  boolean enable_external_quant;
  boolean enable_2pass_quant;

  JDIMENSION output_width;
  JDIMENSION output_height;
  int out_color_components;
  int output_components;

  int rec_outbuf_height;

  int actual_number_of_colors;
  JSAMPARRAY colormap;

  JDIMENSION output_scanline;

  int d3dx_extra_90; /* D3DX's copy has 4 more bytes here than 6b (input_scan_number is at 0x94) */

  int input_scan_number;
  JDIMENSION input_iMCU_row;

  int output_scan_number;
  JDIMENSION output_iMCU_row;

  int (*coef_bits)[64];

  JQUANT_TBL * quant_tbl_ptrs[4];

  JHUFF_TBL * dc_huff_tbl_ptrs[4];
  JHUFF_TBL * ac_huff_tbl_ptrs[4];

  int data_precision;

  jpeg_component_info * comp_info;

  boolean progressive_mode;
  boolean arith_code;

  UINT8 arith_dc_L[16];
  UINT8 arith_dc_U[16];
  UINT8 arith_ac_K[16];

  unsigned int restart_interval;

  boolean saw_JFIF_marker;

  UINT8 JFIF_major_version;
  UINT8 JFIF_minor_version;
  UINT8 density_unit;
  UINT16 X_density;
  UINT16 Y_density;
  boolean saw_Adobe_marker;
  UINT8 Adobe_transform;

  boolean CCIR601_sampling;

  jpeg_saved_marker_ptr marker_list;

  int max_h_samp_factor;
  int max_v_samp_factor;

  int min_DCT_scaled_size;

  JDIMENSION total_iMCU_rows;

  JSAMPLE * sample_range_limit;

  int comps_in_scan;
  jpeg_component_info * cur_comp_info[4];

  JDIMENSION MCUs_per_row;
  JDIMENSION MCU_rows_in_scan;

  int blocks_in_MCU;
  int MCU_membership[10];

  int Ss, Se, Ah, Al;

  int unread_marker;

  struct jpeg_decomp_master * master;
  struct jpeg_d_main_controller * main;
  struct jpeg_d_coef_controller * coef;
  struct jpeg_d_post_controller * post;
  struct jpeg_input_controller * inputctl;
  struct jpeg_marker_reader * marker;
  struct jpeg_entropy_decoder * entropy;
  struct jpeg_inverse_dct * idct;
  struct jpeg_upsampler * upsample;
  struct jpeg_color_deconverter * cconvert;
  struct jpeg_color_quantizer * cquantize;
};

void
fn_829C2C00 (j_decompress_ptr cinfo, jpeg_component_info * compptr,
		 JCOEFPTR coef_block,
		 JSAMPARRAY output_buf, JDIMENSION output_col)
{
  float tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
  float tmp10, tmp11, tmp12, tmp13;
  float z5, z10, z11, z12, z13;
  JCOEFPTR inptr;
  float * quantptr;
  float * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit + 128);
  int ctr;
  float workspace[64]; 
  inptr = coef_block;
  quantptr = (float *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 8; ctr > 0; ctr--) {
    
    
    if (inptr[8*1] == 0 && inptr[8*2] == 0 &&
	inptr[8*3] == 0 && inptr[8*4] == 0 &&
	inptr[8*5] == 0 && inptr[8*6] == 0 &&
	inptr[8*7] == 0) {
      
      float dcval = (((float) (inptr[8*0])) * (quantptr[8*0]));
      
      wsptr[8*0] = dcval;
      wsptr[8*1] = dcval;
      wsptr[8*2] = dcval;
      wsptr[8*3] = dcval;
      wsptr[8*4] = dcval;
      wsptr[8*5] = dcval;
      wsptr[8*6] = dcval;
      wsptr[8*7] = dcval;
      
      inptr++;			
      quantptr++;
      wsptr++;
      continue;
    }
    
    

    tmp0 = (((float) (inptr[8*0])) * (quantptr[8*0]));
    tmp1 = (((float) (inptr[8*2])) * (quantptr[8*2]));
    tmp2 = (((float) (inptr[8*4])) * (quantptr[8*4]));
    tmp3 = (((float) (inptr[8*6])) * (quantptr[8*6]));

    tmp10 = tmp0 + tmp2;	
    tmp11 = tmp0 - tmp2;

    tmp13 = tmp1 + tmp3;	
    tmp12 = (tmp1 - tmp3) * ((float) 1.414213562) - tmp13; 

    tmp0 = tmp10 + tmp13;	
    tmp3 = tmp10 - tmp13;
    tmp1 = tmp11 + tmp12;
    tmp2 = tmp11 - tmp12;
    
    

    tmp4 = (((float) (inptr[8*1])) * (quantptr[8*1]));
    tmp5 = (((float) (inptr[8*3])) * (quantptr[8*3]));
    tmp6 = (((float) (inptr[8*5])) * (quantptr[8*5]));
    tmp7 = (((float) (inptr[8*7])) * (quantptr[8*7]));

    z13 = tmp6 + tmp5;		
    z10 = tmp6 - tmp5;
    z11 = tmp4 + tmp7;
    z12 = tmp4 - tmp7;

    tmp7 = z11 + z13;		
    tmp11 = (z11 - z13) * ((float) 1.414213562); 

    z5 = (z10 + z12) * ((float) 1.847759065); 
    tmp10 = ((float) 1.082392200) * z12 - z5; 
    tmp12 = ((float) -2.613125930) * z10 + z5; 

    tmp6 = tmp12 - tmp7;	
    tmp5 = tmp11 - tmp6;
    tmp4 = tmp10 + tmp5;

    wsptr[8*0] = tmp0 + tmp7;
    wsptr[8*7] = tmp0 - tmp7;
    wsptr[8*1] = tmp1 + tmp6;
    wsptr[8*6] = tmp1 - tmp6;
    wsptr[8*2] = tmp2 + tmp5;
    wsptr[8*5] = tmp2 - tmp5;
    wsptr[8*4] = tmp3 + tmp4;
    wsptr[8*3] = tmp3 - tmp4;

    inptr++;			
    quantptr++;
    wsptr++;
  }
  
  
  

  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++) {
    outptr = output_buf[ctr] + output_col;
    
    
    

    tmp10 = wsptr[0] + wsptr[4];
    tmp11 = wsptr[0] - wsptr[4];

    tmp13 = wsptr[2] + wsptr[6];
    tmp12 = (wsptr[2] - wsptr[6]) * ((float) 1.414213562) - tmp13;

    tmp0 = tmp10 + tmp13;
    tmp3 = tmp10 - tmp13;
    tmp1 = tmp11 + tmp12;
    tmp2 = tmp11 - tmp12;

    

    z13 = wsptr[5] + wsptr[3];
    z10 = wsptr[5] - wsptr[3];
    z11 = wsptr[1] + wsptr[7];
    z12 = wsptr[1] - wsptr[7];

    tmp7 = z11 + z13;
    tmp11 = (z11 - z13) * ((float) 1.414213562);

    z5 = (z10 + z12) * ((float) 1.847759065); 
    tmp10 = ((float) 1.082392200) * z12 - z5; 
    tmp12 = ((float) -2.613125930) * z10 + z5; 

    tmp6 = tmp12 - tmp7;
    tmp5 = tmp11 - tmp6;
    tmp4 = tmp10 + tmp5;

    

    outptr[0] = range_limit[(int) ((((INT32) (tmp0 + tmp7)) + (((INT32) 1) << ((3)-1))) >> (3))
			    & (255 * 4 + 3)];
    outptr[7] = range_limit[(int) ((((INT32) (tmp0 - tmp7)) + (((INT32) 1) << ((3)-1))) >> (3))
			    & (255 * 4 + 3)];
    outptr[1] = range_limit[(int) ((((INT32) (tmp1 + tmp6)) + (((INT32) 1) << ((3)-1))) >> (3))
			    & (255 * 4 + 3)];
    outptr[6] = range_limit[(int) ((((INT32) (tmp1 - tmp6)) + (((INT32) 1) << ((3)-1))) >> (3))
			    & (255 * 4 + 3)];
    outptr[2] = range_limit[(int) ((((INT32) (tmp2 + tmp5)) + (((INT32) 1) << ((3)-1))) >> (3))
			    & (255 * 4 + 3)];
    outptr[5] = range_limit[(int) ((((INT32) (tmp2 - tmp5)) + (((INT32) 1) << ((3)-1))) >> (3))
			    & (255 * 4 + 3)];
    outptr[4] = range_limit[(int) ((((INT32) (tmp3 + tmp4)) + (((INT32) 1) << ((3)-1))) >> (3))
			    & (255 * 4 + 3)];
    outptr[3] = range_limit[(int) ((((INT32) (tmp3 - tmp4)) + (((INT32) 1) << ((3)-1))) >> (3))
			    & (255 * 4 + 3)];
    
    wsptr += 8;		
  }
}
