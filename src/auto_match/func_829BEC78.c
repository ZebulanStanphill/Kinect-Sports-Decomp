typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef struct Decomp_829BEC78 {
  char pad0[0x70];
  unsigned int output_width;
  char pad74[0x13c - 0x74];
  int max_v_samp_factor;
} Decomp_829BEC78;
extern void d3dx_jcopy_sample_rows(JSAMPARRAY input_array, int source_row, JSAMPARRAY output_array, int dest_row,
                        int num_rows, unsigned int num_cols);

void fn_829BEC78(Decomp_829BEC78 *cinfo, void *compptr, JSAMPARRAY input_data, JSAMPARRAY *output_data_ptr)
{
  JSAMPARRAY output_data = *output_data_ptr;
  register JSAMPROW inptr, outptr;
  register JSAMPLE invalue;
  JSAMPROW outend;
  int inrow, outrow;

  inrow = outrow = 0;
  while (outrow < cinfo->max_v_samp_factor) {
    inptr = input_data[inrow];
    outptr = output_data[outrow];
    outend = outptr + cinfo->output_width;
    while (outptr < outend) {
      invalue = *inptr++;
      *outptr++ = invalue;
      *outptr++ = invalue;
    }
    d3dx_jcopy_sample_rows(output_data, outrow, output_data, outrow + 1, 1, cinfo->output_width);
    inrow++;
    outrow += 2;
  }
}
