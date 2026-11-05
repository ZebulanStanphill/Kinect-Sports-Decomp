typedef struct cinfo_829C3988 { char pad[0x148]; unsigned char *sample_range_limit; } cinfo_829C3988;
typedef struct comp_829C3988 { char pad[0x50]; short *dct_table; } comp_829C3988;

#define DCTSIZE 8
#define CONST_BITS 13
#define PASS1_BITS 2
#define RANGE_MASK 0x3ff
#define FIX_0_211164243 1730
#define FIX_0_509795579 4176
#define FIX_0_601344887 4926
#define FIX_0_765366865 6270
#define FIX_0_899976223 7373
#define FIX_1_061594337 8697
#define FIX_1_451774981 11893
#define FIX_1_847759065 15137
#define FIX_2_172734803 17799
#define FIX_2_562915447 20995
#define DEQUANTIZE(coef, quantval) (((int)(coef)) * (quantval))
#define MULTIPLY(var, const) ((var) * (const))
#define DESCALE(x, n) (((x) + (1 << ((n) - 1))) >> (n))

void fn_829C3988(cinfo_829C3988 *cinfo, comp_829C3988 *compptr, short *coef_block,
                 unsigned char **output_buf, unsigned output_col)
{
  int tmp0, tmp2, tmp10, tmp12;
  int z1, z2, z3, z4;
  short *inptr;
  short *quantptr;
  int *wsptr;
  unsigned char *outptr;
  unsigned char *range_limit = cinfo->sample_range_limit + 128;
  int ctr;
  int workspace[DCTSIZE * 4];

  inptr = coef_block;
  quantptr = compptr->dct_table;
  wsptr = workspace;
  for (ctr = DCTSIZE; ctr > 0; inptr++, quantptr++, wsptr++, ctr--) {
    if (ctr == DCTSIZE - 4)
      continue;
    if (inptr[DCTSIZE * 1] == 0 && inptr[DCTSIZE * 2] == 0 &&
        inptr[DCTSIZE * 3] == 0 && inptr[DCTSIZE * 5] == 0 &&
        inptr[DCTSIZE * 6] == 0 && inptr[DCTSIZE * 7] == 0) {
      int dcval = DEQUANTIZE(inptr[DCTSIZE * 0], quantptr[DCTSIZE * 0]) << PASS1_BITS;
      wsptr[DCTSIZE * 0] = dcval;
      wsptr[DCTSIZE * 1] = dcval;
      wsptr[DCTSIZE * 2] = dcval;
      wsptr[DCTSIZE * 3] = dcval;
      continue;
    }
    tmp0 = DEQUANTIZE(inptr[DCTSIZE * 0], quantptr[DCTSIZE * 0]);
    tmp0 <<= (CONST_BITS + 1);
    z2 = DEQUANTIZE(inptr[DCTSIZE * 2], quantptr[DCTSIZE * 2]);
    z3 = DEQUANTIZE(inptr[DCTSIZE * 6], quantptr[DCTSIZE * 6]);
    tmp2 = MULTIPLY(z2, FIX_1_847759065) + MULTIPLY(z3, -FIX_0_765366865);
    tmp10 = tmp0 + tmp2;
    tmp12 = tmp0 - tmp2;
    z1 = DEQUANTIZE(inptr[DCTSIZE * 7], quantptr[DCTSIZE * 7]);
    z2 = DEQUANTIZE(inptr[DCTSIZE * 5], quantptr[DCTSIZE * 5]);
    z3 = DEQUANTIZE(inptr[DCTSIZE * 3], quantptr[DCTSIZE * 3]);
    z4 = DEQUANTIZE(inptr[DCTSIZE * 1], quantptr[DCTSIZE * 1]);
    tmp0 = MULTIPLY(z1, -FIX_0_211164243) + MULTIPLY(z2, FIX_1_451774981) +
           MULTIPLY(z3, -FIX_2_172734803) + MULTIPLY(z4, FIX_1_061594337);
    tmp2 = MULTIPLY(z1, -FIX_0_509795579) + MULTIPLY(z2, -FIX_0_601344887) +
           MULTIPLY(z3, FIX_0_899976223) + MULTIPLY(z4, FIX_2_562915447);
    wsptr[DCTSIZE * 0] = (int)DESCALE(tmp10 + tmp2, CONST_BITS - PASS1_BITS + 1);
    wsptr[DCTSIZE * 3] = (int)DESCALE(tmp10 - tmp2, CONST_BITS - PASS1_BITS + 1);
    wsptr[DCTSIZE * 1] = (int)DESCALE(tmp12 + tmp0, CONST_BITS - PASS1_BITS + 1);
    wsptr[DCTSIZE * 2] = (int)DESCALE(tmp12 - tmp0, CONST_BITS - PASS1_BITS + 1);
  }

  wsptr = workspace;
  for (ctr = 0; ctr < 4; ctr++) {
    outptr = output_buf[ctr] + output_col;
    if (wsptr[1] == 0 && wsptr[2] == 0 && wsptr[3] == 0 && wsptr[5] == 0 &&
        wsptr[6] == 0 && wsptr[7] == 0) {
      unsigned char dcval = range_limit[(int)DESCALE((int)wsptr[0], PASS1_BITS + 3) & RANGE_MASK];
      outptr[0] = dcval;
      outptr[1] = dcval;
      outptr[2] = dcval;
      outptr[3] = dcval;
      wsptr += DCTSIZE;
      continue;
    }
    tmp0 = ((int)wsptr[0]) << (CONST_BITS + 1);
    tmp2 = MULTIPLY((int)wsptr[2], FIX_1_847759065) + MULTIPLY((int)wsptr[6], -FIX_0_765366865);
    tmp10 = tmp0 + tmp2;
    tmp12 = tmp0 - tmp2;
    z1 = (int)wsptr[7];
    z2 = (int)wsptr[5];
    z3 = (int)wsptr[3];
    z4 = (int)wsptr[1];
    tmp0 = MULTIPLY(z1, -FIX_0_211164243) + MULTIPLY(z2, FIX_1_451774981) +
           MULTIPLY(z3, -FIX_2_172734803) + MULTIPLY(z4, FIX_1_061594337);
    tmp2 = MULTIPLY(z1, -FIX_0_509795579) + MULTIPLY(z2, -FIX_0_601344887) +
           MULTIPLY(z3, FIX_0_899976223) + MULTIPLY(z4, FIX_2_562915447);
    outptr[0] = range_limit[(int)DESCALE(tmp10 + tmp2, CONST_BITS + PASS1_BITS + 3 + 1) & RANGE_MASK];
    outptr[3] = range_limit[(int)DESCALE(tmp10 - tmp2, CONST_BITS + PASS1_BITS + 3 + 1) & RANGE_MASK];
    outptr[1] = range_limit[(int)DESCALE(tmp12 + tmp0, CONST_BITS + PASS1_BITS + 3 + 1) & RANGE_MASK];
    outptr[2] = range_limit[(int)DESCALE(tmp12 - tmp0, CONST_BITS + PASS1_BITS + 3 + 1) & RANGE_MASK];
    wsptr += DCTSIZE;
  }
}
