typedef unsigned char JSAMPLE;
typedef long INT32;
typedef struct { char pad[0x74]; JSAMPLE **colormap; } Cinfo_827CC0D0;

void fn_827CC0D0(Cinfo_827CC0D0 *cinfo, int minc0, int minc1, int minc2, int numcolors, JSAMPLE colorlist[], JSAMPLE bestcolor[])
{
  int ic0, ic1, ic2;
  int i, icolor;
  register INT32 *bptr;
  JSAMPLE *cptr;
  INT32 dist0, dist1;
  register INT32 dist2;
  INT32 xx0, xx1;
  register INT32 xx2;
  INT32 inc0, inc1, inc2;
  INT32 bestdist[4 * 8 * 4];

  bptr = bestdist;
  for (i = 4 * 8 * 4 - 1; i >= 0; i--)
    *bptr++ = 0x7FFFFFFFL;

  for (i = 0; i < numcolors; i++) {
    icolor = colorlist[i];
    inc0 = (minc0 - cinfo->colormap[0][icolor]) * 2;
    dist0 = inc0 * inc0;
    inc1 = (minc1 - cinfo->colormap[1][icolor]) * 3;
    dist0 += inc1 * inc1;
    inc2 = (minc2 - cinfo->colormap[2][icolor]) * 1;
    dist0 += inc2 * inc2;
    inc0 = inc0 * (2 * 16) + 16 * 16;
    inc1 = inc1 * (2 * 12) + 12 * 12;
    inc2 = inc2 * (2 * 8) + 8 * 8;
    bptr = bestdist;
    cptr = bestcolor;
    xx0 = inc0;
    for (ic0 = 4 - 1; ic0 >= 0; ic0--) {
      dist1 = dist0;
      xx1 = inc1;
      for (ic1 = 8 - 1; ic1 >= 0; ic1--) {
        dist2 = dist1;
        xx2 = inc2;
        for (ic2 = 4 - 1; ic2 >= 0; ic2--) {
          if (dist2 < *bptr) {
            *bptr = dist2;
            *cptr = (JSAMPLE)icolor;
          }
          dist2 += xx2;
          xx2 += 2 * 8 * 8;
          bptr++;
          cptr++;
        }
        dist1 += xx1;
        xx1 += 2 * 12 * 12;
      }
      dist0 += xx0;
      xx0 += 2 * 16 * 16;
    }
  }
}
