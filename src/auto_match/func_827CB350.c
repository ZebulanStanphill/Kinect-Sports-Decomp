/* libjpeg jdmerge.c h2v2_merged_upsample */
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef unsigned int JDIMENSION;
typedef long INT32;
typedef struct {
    void *start_pass; void *upsample; int need_context_rows;
    void *upmethod;
    int *Cr_r_tab;
    int *Cb_b_tab;
    INT32 *Cr_g_tab;
    INT32 *Cb_g_tab;
} MergedUpsampler_827CB350;
typedef struct {
    char pad0[0x5c];
    JDIMENSION output_width;
    char pad60[0xc0];
    JSAMPLE *sample_range_limit;
    char pad124[0x7c];
    MergedUpsampler_827CB350 *upsample;
} Decompress_827CB350;

void fn_827CB350(Decompress_827CB350 *cinfo, JSAMPIMAGE input_buf, JDIMENSION in_row_group_ctr, JSAMPARRAY output_buf)
{
  MergedUpsampler_827CB350 *upsample = cinfo->upsample;
  register int y, cred, cgreen, cblue;
  int cb, cr;
  register JSAMPROW outptr0, outptr1;
  JSAMPROW inptr00, inptr01, inptr1, inptr2;
  JDIMENSION col;
  register JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = upsample->Cr_r_tab;
  int *Cbbtab = upsample->Cb_b_tab;
  INT32 *Crgtab = upsample->Cr_g_tab;
  INT32 *Cbgtab = upsample->Cb_g_tab;

  inptr00 = input_buf[0][in_row_group_ctr*2];
  inptr01 = input_buf[0][in_row_group_ctr*2 + 1];
  inptr1 = input_buf[1][in_row_group_ctr];
  inptr2 = input_buf[2][in_row_group_ctr];
  outptr0 = output_buf[0];
  outptr1 = output_buf[1];
  for (col = cinfo->output_width >> 1; col > 0; col--) {
    cb = *inptr1++;
    cr = *inptr2++;
    cred = Crrtab[cr];
    cgreen = (int) ((Cbgtab[cb] + Crgtab[cr]) >> 16);
    cblue = Cbbtab[cb];
    y  = *inptr00++;
    outptr0[0] = range_limit[y + cred];
    outptr0[1] = range_limit[y + cgreen];
    outptr0[2] = range_limit[y + cblue];
    outptr0 += 3;
    y  = *inptr00++;
    outptr0[0] = range_limit[y + cred];
    outptr0[1] = range_limit[y + cgreen];
    outptr0[2] = range_limit[y + cblue];
    outptr0 += 3;
    y  = *inptr01++;
    outptr1[0] = range_limit[y + cred];
    outptr1[1] = range_limit[y + cgreen];
    outptr1[2] = range_limit[y + cblue];
    outptr1 += 3;
    y  = *inptr01++;
    outptr1[0] = range_limit[y + cred];
    outptr1[1] = range_limit[y + cgreen];
    outptr1[2] = range_limit[y + cblue];
    outptr1 += 3;
  }
  if (cinfo->output_width & 1) {
    cb = *inptr1;
    cr = *inptr2;
    cred = Crrtab[cr];
    cgreen = (int) ((Cbgtab[cb] + Crgtab[cr]) >> 16);
    cblue = Cbbtab[cb];
    y  = *inptr00;
    outptr0[0] = range_limit[y + cred];
    outptr0[1] = range_limit[y + cgreen];
    outptr0[2] = range_limit[y + cblue];
    y  = *inptr01;
    outptr1[0] = range_limit[y + cred];
    outptr1[1] = range_limit[y + cgreen];
    outptr1[2] = range_limit[y + cblue];
  }
}
