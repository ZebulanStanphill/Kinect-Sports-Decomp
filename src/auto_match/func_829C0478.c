typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef struct { char pad[0x10]; int *Cr_r_tab; int *Cb_b_tab; int *Cr_g_tab; int *Cb_g_tab; } Upsample_829C0478;
typedef struct {
  char pad0[0x70]; unsigned output_width;
  char pad1[0x148 - 0x74]; JSAMPLE *sample_range_limit;
  char pad2[0x1c8 - 0x14c]; Upsample_829C0478 *upsample;
} Cinfo_829C0478;

void fn_829C0478(Cinfo_829C0478 *cinfo, JSAMPIMAGE input_buf, unsigned in_row_group_ctr, JSAMPARRAY output_buf)
{
  Upsample_829C0478 *upsample = cinfo->upsample;
  int y, cred, cgreen, cblue;
  int cb, cr;
  JSAMPROW outptr0, outptr1;
  JSAMPROW inptr00, inptr01, inptr1, inptr2;
  unsigned col;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = upsample->Cr_r_tab;
  int *Cbbtab = upsample->Cb_b_tab;
  int *Crgtab = upsample->Cr_g_tab;
  int *Cbgtab = upsample->Cb_g_tab;
  inptr00 = input_buf[0][in_row_group_ctr * 2];
  inptr01 = input_buf[0][in_row_group_ctr * 2 + 1];
  inptr1 = input_buf[1][in_row_group_ctr];
  inptr2 = input_buf[2][in_row_group_ctr];
  outptr0 = output_buf[0];
  outptr1 = output_buf[1];
  for (col = cinfo->output_width >> 1; col > 0; col--) {
    cb = *inptr1++;
    cr = *inptr2++;
    cred = Crrtab[cr];
    cgreen = (Cbgtab[cb] + Crgtab[cr]) >> 16;
    cblue = Cbbtab[cb];
    y = *inptr00++;
    outptr0[0] = range_limit[y + cred];
    outptr0[1] = range_limit[y + cgreen];
    outptr0[2] = range_limit[y + cblue];
    outptr0 += 3;
    y = *inptr00++;
    outptr0[0] = range_limit[y + cred];
    outptr0[1] = range_limit[y + cgreen];
    outptr0[2] = range_limit[y + cblue];
    outptr0 += 3;
    y = *inptr01++;
    outptr1[0] = range_limit[y + cred];
    outptr1[1] = range_limit[y + cgreen];
    outptr1[2] = range_limit[y + cblue];
    outptr1 += 3;
    y = *inptr01++;
    outptr1[0] = range_limit[y + cred];
    outptr1[1] = range_limit[y + cgreen];
    outptr1[2] = range_limit[y + cblue];
    outptr1 += 3;
  }
  if (cinfo->output_width & 1) {
    cb = *inptr1;
    cr = *inptr2;
    cred = Crrtab[cr];
    cgreen = (Cbgtab[cb] + Crgtab[cr]) >> 16;
    cblue = Cbbtab[cb];
    y = *inptr00;
    outptr0[0] = range_limit[y + cred];
    outptr0[1] = range_limit[y + cgreen];
    outptr0[2] = range_limit[y + cblue];
    outptr0 += 3;
    y = *inptr01;
    outptr1[0] = range_limit[y + cred];
    outptr1[1] = range_limit[y + cgreen];
    outptr1[2] = range_limit[y + cblue];
  }
}
