/* Corresponds to libjpeg 6b jidctfst.c jpeg_idct_ifast (open-source IJG libjpeg 6b), D3DX's copy (boolean built as int, MULTIPLIER short). */
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

typedef short DCTELEM; /* D3DX: 6b has int */
typedef short IFAST_MULT_TYPE;

void
fn_829C3050 (j_decompress_ptr cinfo, jpeg_component_info * compptr,
		 JCOEFPTR coef_block,
		 JSAMPARRAY output_buf, JDIMENSION output_col)
{
  DCTELEM tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
  DCTELEM tmp10, tmp11, tmp12, tmp13;
  DCTELEM z5, z10, z11, z12, z13;
  JCOEFPTR inptr;
  IFAST_MULT_TYPE * quantptr;
  int * wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = ((cinfo)->sample_range_limit + 128);
  int ctr;
  int workspace[64];	
  			
  			

  

  inptr = coef_block;
  quantptr = (IFAST_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = 8; ctr > 0; ctr--) {
    







    
    if ((inptr[8*1] | inptr[8*2] | inptr[8*3] | inptr[8*4] | inptr[8*5] | inptr[8*6] | inptr[8*7]) == 0) {
      
      int dcval = (int) (((IFAST_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));

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
    
    

    tmp0 = (((IFAST_MULT_TYPE) (inptr[8*0])) * (quantptr[8*0]));
    tmp1 = (((IFAST_MULT_TYPE) (inptr[8*2])) * (quantptr[8*2]));
    tmp2 = (((IFAST_MULT_TYPE) (inptr[8*4])) * (quantptr[8*4]));
    tmp3 = (((IFAST_MULT_TYPE) (inptr[8*6])) * (quantptr[8*6]));

    tmp10 = tmp0 + tmp2;	
    tmp11 = tmp0 - tmp2;

    tmp13 = tmp1 + tmp3;	
    tmp12 = ((DCTELEM) (((tmp1 - tmp3) * (((INT32) 362))) >> (8))) - tmp13; 

    tmp0 = tmp10 + tmp13;	
    tmp3 = tmp10 - tmp13;
    tmp1 = tmp11 + tmp12;
    tmp2 = tmp11 - tmp12;
    
    

    tmp4 = (((IFAST_MULT_TYPE) (inptr[8*1])) * (quantptr[8*1]));
    tmp5 = (((IFAST_MULT_TYPE) (inptr[8*3])) * (quantptr[8*3]));
    tmp6 = (((IFAST_MULT_TYPE) (inptr[8*5])) * (quantptr[8*5]));
    tmp7 = (((IFAST_MULT_TYPE) (inptr[8*7])) * (quantptr[8*7]));

    z13 = tmp6 + tmp5;		
    z10 = tmp6 - tmp5;
    z11 = tmp4 + tmp7;
    z12 = tmp4 - tmp7;

    tmp7 = z11 + z13;		
    tmp11 = ((DCTELEM) (((z11 - z13) * (((INT32) 362))) >> (8))); 

    z5 = ((DCTELEM) (((z10 + z12) * (((INT32) 473))) >> (8))); 
    tmp10 = ((DCTELEM) (((z12) * (((INT32) 277))) >> (8))) - z5; 
    tmp12 = ((DCTELEM) (((z10) * (- ((INT32) 669))) >> (8))) + z5; 

    tmp6 = tmp12 - tmp7;	
    tmp5 = tmp11 - tmp6;
    tmp4 = tmp10 + tmp5;

    wsptr[8*0] = (int) (tmp0 + tmp7);
    wsptr[8*7] = (int) (tmp0 - tmp7);
    wsptr[8*1] = (int) (tmp1 + tmp6);
    wsptr[8*6] = (int) (tmp1 - tmp6);
    wsptr[8*2] = (int) (tmp2 + tmp5);
    wsptr[8*5] = (int) (tmp2 - tmp5);
    wsptr[8*4] = (int) (tmp3 + tmp4);
    wsptr[8*3] = (int) (tmp3 - tmp4);

    inptr++;			
    quantptr++;
    wsptr++;
  }
  
  
  
  

  wsptr = workspace;
  for (ctr = 0; ctr < 8; ctr++) {
    outptr = output_buf[ctr] + output_col;
    






    

    if ((wsptr[1] | wsptr[2] | wsptr[3] | wsptr[4] | wsptr[5] | wsptr[6] | wsptr[7]) == 0) {
      
      JSAMPLE dcval = range_limit[((int) ((wsptr[0]) >> (2+3)))
				  & (255 * 4 + 3)];
      
      outptr[0] = dcval;
      outptr[1] = dcval;
      outptr[2] = dcval;
      outptr[3] = dcval;
      outptr[4] = dcval;
      outptr[5] = dcval;
      outptr[6] = dcval;
      outptr[7] = dcval;

      wsptr += 8;		
      continue;
    }
    
    

    tmp10 = ((DCTELEM) wsptr[0] + (DCTELEM) wsptr[4]);
    tmp11 = ((DCTELEM) wsptr[0] - (DCTELEM) wsptr[4]);

    tmp13 = ((DCTELEM) wsptr[2] + (DCTELEM) wsptr[6]);
    tmp12 = ((DCTELEM) ((((DCTELEM) wsptr[2] - (DCTELEM) wsptr[6]) * (((INT32) 362))) >> (8)))
	    - tmp13;

    tmp0 = tmp10 + tmp13;
    tmp3 = tmp10 - tmp13;
    tmp1 = tmp11 + tmp12;
    tmp2 = tmp11 - tmp12;

    

    z13 = (DCTELEM) wsptr[5] + (DCTELEM) wsptr[3];
    z10 = (DCTELEM) wsptr[5] - (DCTELEM) wsptr[3];
    z11 = (DCTELEM) wsptr[1] + (DCTELEM) wsptr[7];
    z12 = (DCTELEM) wsptr[1] - (DCTELEM) wsptr[7];

    tmp7 = z11 + z13;		
    tmp11 = ((DCTELEM) (((z11 - z13) * (((INT32) 362))) >> (8))); 

    z5 = ((DCTELEM) (((z10 + z12) * (((INT32) 473))) >> (8))); 
    tmp10 = ((DCTELEM) (((z12) * (((INT32) 277))) >> (8))) - z5; 
    tmp12 = ((DCTELEM) (((z10) * (- ((INT32) 669))) >> (8))) + z5; 

    tmp6 = tmp12 - tmp7;	
    tmp5 = tmp11 - tmp6;
    tmp4 = tmp10 + tmp5;

    

    outptr[0] = range_limit[((int) ((tmp0 + tmp7) >> (2+3)))
			    & (255 * 4 + 3)];
    outptr[7] = range_limit[((int) ((tmp0 - tmp7) >> (2+3)))
			    & (255 * 4 + 3)];
    outptr[1] = range_limit[((int) ((tmp1 + tmp6) >> (2+3)))
			    & (255 * 4 + 3)];
    outptr[6] = range_limit[((int) ((tmp1 - tmp6) >> (2+3)))
			    & (255 * 4 + 3)];
    outptr[2] = range_limit[((int) ((tmp2 + tmp5) >> (2+3)))
			    & (255 * 4 + 3)];
    outptr[5] = range_limit[((int) ((tmp2 - tmp5) >> (2+3)))
			    & (255 * 4 + 3)];
    outptr[4] = range_limit[((int) ((tmp3 + tmp4) >> (2+3)))
			    & (255 * 4 + 3)];
    outptr[3] = range_limit[((int) ((tmp3 - tmp4) >> (2+3)))
			    & (255 * 4 + 3)];

    wsptr += 8;		
  }
}

