extern unsigned char *lbl_8324E3B0;

void fn_82ED78B8(int unused, unsigned char *d, short *r, int dstride, int rstride)
{
  int i;
  for (i = 0; i < 4; i++) {
    d[0] = lbl_8324E3B0[d[0] + r[0]];
    d[1] = lbl_8324E3B0[d[1] + r[1]];
    d[2] = lbl_8324E3B0[d[2] + r[2]];
    d[3] = lbl_8324E3B0[d[3] + r[3]];
    d += dstride;
    r += rstride;
  }
}
