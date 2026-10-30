extern int *fn_8251F720(void *, int);
extern void fn_8251FA58(void *);
extern float lbl_821CC160;


void fn_8236AD40(int *d, void *arg)
{
  int *s;
  float fv;
  int base;
  int j;
  int k;
  s = fn_8251F720(arg, 0);
  d[0x3f9] = s[0x0];
  fv = lbl_821CC160;
  d[0x3fa] = s[0x1];
  d[0x3fb] = s[0x2];
  d[0x3fc] = s[0x3];
  d[0x3fd] = s[0x4];
  d[0x3fe] = s[0x5];
  d[0x3ff] = s[0x6];
  d[0x400] = s[0x7];
  d[0x40f] = s[0x10];
  d[0x411] = s[0x15];
  d[0x401] = s[0x11];
  d[0x402] = s[0x12];
  d[0x403] = s[0x13];
  d[0x404] = s[0x14];
  d[0x405] = s[0x8];
  d[0x406] = s[0x9];
  d[0x407] = s[0xa];
  d[0x1020 / 4] = s[0xb];
  ((float *)d)[0x1024 / 4] = fv;
  d[0x1028 / 4] = 0;
  d[0x102c / 4] = s[0xc];
  d[0x1030 / 4] = s[0xd];
  d[0x1034 / 4] = s[0xe];
  d[0x1038 / 4] = s[0xf];
  j = 0;
  base = 0x412;
  do {
    j = 0;
    do {
      k = j + base;
      j++;
      *(float *)(k * 4 + (int)d) = fv;
    } while (j < 8);
    base += 8;
  } while (base < 0x422);
  fn_8251FA58(s);
}
