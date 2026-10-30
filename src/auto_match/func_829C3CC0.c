/* libjpeg jidctred.c: jpeg_idct_2x2 */
typedef short JCOEF;
typedef short ISLOW_MULT_TYPE;
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef unsigned int JDIMENSION;
typedef struct jdc_829C3CC0 { char pad[0x148]; JSAMPLE *sample_range_limit; } *j_decompress_ptr;
typedef struct jci_829C3CC0 { char pad[0x50]; void *dct_table; } jpeg_component_info;

#define DCTSIZE 8
#define CONST_BITS 13
#define PASS1_BITS 2
#define RANGE_MASK 1023
#define FIX_0_720959822 5906
#define FIX_0_850430095 6967
#define FIX_1_272758580 10426
#define FIX_3_624509785 29692
#define ONE ((int) 1)
#define DEQUANTIZE(coef,quantval) (((ISLOW_MULT_TYPE) (coef)) * (quantval))
#define MULTIPLY(var,const) ((var) * (const))
#define DESCALE(x,n) (((x) + (ONE << ((n)-1))) >> (n))

void fn_829C3CC0(j_decompress_ptr cinfo, jpeg_component_info *compptr, JCOEF *coef_block,
                 JSAMPARRAY output_buf, JDIMENSION output_col)
{
  int tmp0, tmp10, z1;
  JCOEF *inptr;
  ISLOW_MULT_TYPE *quantptr;
  int *wsptr;
  JSAMPROW outptr;
  JSAMPLE *range_limit = cinfo->sample_range_limit + 128;
  int ctr;
  int workspace[DCTSIZE * 2];

  inptr = coef_block;
  quantptr = (ISLOW_MULT_TYPE *) compptr->dct_table;
  wsptr = workspace;
  for (ctr = DCTSIZE; ctr > 0; inptr++, quantptr++, wsptr++, ctr--) {
    if (ctr == DCTSIZE-2 || ctr == DCTSIZE-4 || ctr == DCTSIZE-6)
      continue;
    if (inptr[DCTSIZE*1] == 0 && inptr[DCTSIZE*3] == 0 &&
        inptr[DCTSIZE*5] == 0 && inptr[DCTSIZE*7] == 0) {
      int dcval = DEQUANTIZE(inptr[DCTSIZE*0], quantptr[DCTSIZE*0]) << PASS1_BITS;
      wsptr[DCTSIZE*0] = dcval;
      wsptr[DCTSIZE*1] = dcval;
      continue;
    }
    z1 = DEQUANTIZE(inptr[DCTSIZE*0], quantptr[DCTSIZE*0]);
    tmp10 = z1 << (CONST_BITS+2);
    z1 = DEQUANTIZE(inptr[DCTSIZE*7], quantptr[DCTSIZE*7]);
    tmp0 = MULTIPLY(z1, - FIX_0_720959822);
    z1 = DEQUANTIZE(inptr[DCTSIZE*5], quantptr[DCTSIZE*5]);
    tmp0 += MULTIPLY(z1, FIX_0_850430095);
    z1 = DEQUANTIZE(inptr[DCTSIZE*3], quantptr[DCTSIZE*3]);
    tmp0 += MULTIPLY(z1, - FIX_1_272758580);
    z1 = DEQUANTIZE(inptr[DCTSIZE*1], quantptr[DCTSIZE*1]);
    tmp0 += MULTIPLY(z1, FIX_3_624509785);
    wsptr[DCTSIZE*0] = (int) DESCALE(tmp10 + tmp0, CONST_BITS-PASS1_BITS+2);
    wsptr[DCTSIZE*1] = (int) DESCALE(tmp10 - tmp0, CONST_BITS-PASS1_BITS+2);
  }

  wsptr = workspace;
  for (ctr = 0; ctr < 2; ctr++) {
    outptr = output_buf[ctr] + output_col;
    if (wsptr[1] == 0 && wsptr[3] == 0 && wsptr[5] == 0 && wsptr[7] == 0) {
      JSAMPLE dcval = range_limit[(int) DESCALE((int) wsptr[0], PASS1_BITS+3) & RANGE_MASK];
      outptr[0] = dcval;
      outptr[1] = dcval;
      wsptr += DCTSIZE;
      continue;
    }
    tmp10 = ((int) wsptr[0]) << (CONST_BITS+2);
    tmp0 = MULTIPLY((int) wsptr[7], - FIX_0_720959822)
         + MULTIPLY((int) wsptr[5], FIX_0_850430095)
         + MULTIPLY((int) wsptr[3], - FIX_1_272758580)
         + MULTIPLY((int) wsptr[1], FIX_3_624509785);
    outptr[0] = range_limit[(int) DESCALE(tmp10 + tmp0, CONST_BITS+PASS1_BITS+3+2) & RANGE_MASK];
    outptr[1] = range_limit[(int) DESCALE(tmp10 - tmp0, CONST_BITS+PASS1_BITS+3+2) & RANGE_MASK];
    wsptr += DCTSIZE;
  }
}
