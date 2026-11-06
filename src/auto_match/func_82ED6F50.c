typedef struct Dec_82ED6F50 {
  char pad0[0x564];
  int strideY;
  int strideC;
  char pad56c[0x5ac - 0x56c];
  int qY;
  int qC;
  char pad5b4[0x5c0 - 0x5b4];
  int dcScaleY;
  int dcScaleC;
  char pad5c8[0x628 - 0x5c8];
  int noSkip;
  char pad62c[0x1f7c - 0x62c];
  void (*idct)(void);
  char pad1f80[0x1f94 - 0x1f80];
  void (*put)(unsigned char *dst, int stride, short *blk);
  char pad1f98[0x4a90 - 0x1f98];
  int rowStepY;
} Dec_82ED6F50;
typedef struct Coded_82ED6F50 {
  int f0;
  int coded[6];
} Coded_82ED6F50;
typedef struct MB_82ED6F50 {
  char pad[0x80];
  short blk[6][128];
} MB_82ED6F50;
extern void fn_82F0AB90(unsigned char *src, int stride, unsigned short *out);
extern int fn_82F07F68(Dec_82ED6F50 *d, short *blk, int pos, unsigned short *coef);
extern void fn_82F07F08(Dec_82ED6F50 *d, short *blk, short *tmp);
extern void fn_82F0A9F0(void);
extern void fn_82F1C568(short *tmp);

void fn_82ED6F50(Dec_82ED6F50 *d, Coded_82ED6F50 *cs, unsigned char *srcY, unsigned char *srcCb,
                 unsigned char *srcCr, unsigned char *dstY, unsigned char *dstCb,
                 unsigned char *dstCr, short *tmp, int unused9, int unused10, MB_82ED6F50 *mb,
                 int pos)
{
  short dc[8];
  unsigned short coefC[64];
  unsigned short coefY[64];
  short *blk;
  short *b;
  unsigned i;
  unsigned char y;
  int x;
  unsigned char v;
  unsigned char *p;
  short *cr;
  int *coded = cs->coded;

  b = mb->blk[0];
  blk = b;
  for (i = 1; i <= 4; i++) {
    fn_82F0AB90(srcY, 0x10, coefY);
    *b = dc[i] = (short)((short)coefY[0] * d->dcScaleY >> 18);
    coded[i - 1] = fn_82F07F68(d, b, pos, coefY);
    b += 128;
    pos += 2;
    srcY += (i != 2) ? 8 : 0x78;
  }
  fn_82F0AB90(srcCb, 8, coefC);
  *b = dc[5] = (short)((short)coefC[0] * d->dcScaleC >> 18);
  coded[4] = fn_82F07F68(d, b, pos, coefC);
  fn_82F0AB90(srcCr, 8, coefC);
  b += 128;
  *b = dc[6] = (short)((short)coefC[0] * d->dcScaleC >> 18);
  coded[5] = fn_82F07F68(d, b, pos + 2, coefC);

  for (i = 1; i <= 4; i++) {
    if (coded[i - 1] == 0 && d->noSkip == 0) {
      v = (unsigned char)(dc[i] * d->qY + 4 >> 3);
      p = dstY;
      for (y = 0; y < 8; y++) {
        for (x = 0; x < 8; x++)
          p[x] = v;
        p += d->strideY;
      }
    } else {
      *tmp = dc[i] * d->qY;
      fn_82F07F08(d, blk, tmp);
      if (d->idct == fn_82F0A9F0)
        fn_82F1C568(tmp);
      d->put(dstY, d->strideY, tmp);
    }
    blk += 128;
    dstY += (i != 2) ? 8 : d->rowStepY;
  }
  if (coded[4] == 0 && d->noSkip == 0) {
    v = (unsigned char)(dc[5] * d->qC + 4 >> 3);
    p = dstCb;
    for (y = 0; y < 8; y++) {
      for (x = 0; x < 8; x++)
        p[x] = v;
      p += d->strideC;
    }
  } else {
    *tmp = dc[5] * d->qC;
    fn_82F07F08(d, blk, tmp);
    if (d->idct == fn_82F0A9F0)
      fn_82F1C568(tmp);
    d->put(dstCb, d->strideC, tmp);
  }
  cr = blk + 128;
  if (coded[5] == 0 && d->noSkip == 0) {
    v = (unsigned char)(dc[6] * d->qC + 4 >> 3);
    p = dstCr;
    for (y = 0; y < 8; y++) {
      for (x = 0; x < 8; x++)
        p[x] = v;
      p += d->strideC;
    }
  } else {
    *tmp = dc[6] * d->qC;
    fn_82F07F08(d, cr, tmp);
    if (d->idct == fn_82F0A9F0)
      fn_82F1C568(tmp);
    d->put(dstCr, d->strideC, tmp);
  }
}
