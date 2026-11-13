/* libjpeg jdsample.c h2v2_fancy_upsample (open-source IJG libjpeg). */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef unsigned int JDIMENSION;

#define GETJSAMPLE(value) ((int) (value))

typedef struct DecompressInfo_829BEE00 {
  char pad[0x13c];
  int max_v_samp_factor;
} DecompressInfo_829BEE00;

typedef struct ComponentInfo_829BEE00 {
  char pad[0x28];
  JDIMENSION downsampled_width;
} ComponentInfo_829BEE00;

void fn_829BEE00(DecompressInfo_829BEE00 *cinfo, ComponentInfo_829BEE00 *compptr,
                 JSAMPARRAY input_data, JSAMPARRAY *output_data_ptr)
{
  JSAMPARRAY output_data = *output_data_ptr;
  register JSAMPROW inptr0, inptr1, outptr;
  register int thiscolsum, lastcolsum, nextcolsum;
  register JDIMENSION colctr;
  int inrow, outrow, v;

  inrow = outrow = 0;
  while (outrow < cinfo->max_v_samp_factor) {
    for (v = 0; v < 2; v++) {
      /* inptr0 points to nearest input row, inptr1 points to next nearest */
      inptr0 = input_data[inrow];
      if (v == 0)
        inptr1 = input_data[inrow - 1];
      else
        inptr1 = input_data[inrow + 1];
      outptr = output_data[outrow++];

      /* Special case for first column */
      thiscolsum = GETJSAMPLE(*inptr0++) * 3 + GETJSAMPLE(*inptr1++);
      nextcolsum = GETJSAMPLE(*inptr0++) * 3 + GETJSAMPLE(*inptr1++);
      *outptr++ = (JSAMPLE) ((thiscolsum * 4 + 8) >> 4);
      *outptr++ = (JSAMPLE) ((thiscolsum * 3 + nextcolsum + 7) >> 4);
      lastcolsum = thiscolsum; thiscolsum = nextcolsum;

      for (colctr = compptr->downsampled_width - 2; colctr > 0; colctr--) {
        nextcolsum = GETJSAMPLE(*inptr0++) * 3 + GETJSAMPLE(*inptr1++);
        *outptr++ = (JSAMPLE) ((thiscolsum * 3 + lastcolsum + 8) >> 4);
        *outptr++ = (JSAMPLE) ((thiscolsum * 3 + nextcolsum + 7) >> 4);
        lastcolsum = thiscolsum; thiscolsum = nextcolsum;
      }

      /* Special case for last column */
      *outptr++ = (JSAMPLE) ((thiscolsum * 3 + lastcolsum + 8) >> 4);
      *outptr++ = (JSAMPLE) ((thiscolsum * 4 + 7) >> 4);
    }
    inrow++;
  }
}
