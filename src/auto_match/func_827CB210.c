typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef unsigned int JDIMENSION;

typedef struct {
  char pad0[0x10];
  int *Cr_r_tab;
  int *Cb_b_tab;
  int *Cr_g_tab;
  int *Cb_g_tab;
} my_upsampler_func_827CB210;

typedef struct {
  char pad0[0x5c];
  JDIMENSION output_width;
  char pad1[0x120 - 0x60];
  JSAMPLE *sample_range_limit;
  char pad2[0x1a0 - 0x124];
  my_upsampler_func_827CB210 *upsample;
} cinfo_func_827CB210;

void fn_827CB210(cinfo_func_827CB210 *cinfo, JSAMPIMAGE input_buf, JDIMENSION in_row_group_ctr, JSAMPARRAY output_buf)
{
  my_upsampler_func_827CB210 *upsample = cinfo->upsample;
  int y, cred, cgreen, cblue;
  int cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = upsample->Cr_r_tab;
  int *Cbbtab = upsample->Cb_b_tab;
  int *Crgtab = upsample->Cr_g_tab;
  int *Cbgtab = upsample->Cb_g_tab;

  inptr0 = input_buf[0][in_row_group_ctr];
  inptr1 = input_buf[1][in_row_group_ctr];
  inptr2 = input_buf[2][in_row_group_ctr];
  outptr = output_buf[0];
  for (col = cinfo->output_width >> 1; col > 0; col--) {
    cb = *inptr1++;
    cr = *inptr2++;
    cred = Crrtab[cr];
    cgreen = (Cbgtab[cb] + Crgtab[cr]) >> 16;
    cblue = Cbbtab[cb];
    y = *inptr0++;
    outptr[0] = range_limit[y + cred];
    outptr[1] = range_limit[y + cgreen];
    outptr[2] = range_limit[y + cblue];
    outptr += 3;
    y = *inptr0++;
    outptr[0] = range_limit[y + cred];
    outptr[1] = range_limit[y + cgreen];
    outptr[2] = range_limit[y + cblue];
    outptr += 3;
  }
  if (cinfo->output_width & 1) {
    cb = *inptr1;
    cr = *inptr2;
    cred = Crrtab[cr];
    cgreen = (Cbgtab[cb] + Crgtab[cr]) >> 16;
    cblue = Cbbtab[cb];
    y = *inptr0;
    outptr[0] = range_limit[y + cred];
    outptr[1] = range_limit[y + cgreen];
    outptr[2] = range_limit[y + cblue];
  }
}
