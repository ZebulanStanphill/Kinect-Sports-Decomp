extern int fn_82E4FE08(int);
extern int fn_82E50F00(int, int);
extern int fn_82E51028(int, int);
extern short *fn_82E52428(int, int);
extern unsigned fn_82F64CE0(int);
extern void *memcpy(void *, const void *, unsigned);

int fn_82EE27E8(int param_1, int param_2, void **param_3, unsigned *param_4)
{
  short *p;
  unsigned n;
  int sz;
  int hr = 0;
  void *buf;
  fn_82E50F00(param_1 + 4, 1);
  p = fn_82E52428(param_1, param_2);
  if (p != 0) {
    if (*(unsigned short *)p == 0x1f) {
      n = fn_82F64CE0(*(int *)(p + 4));
      if (n >= 0x7ffffffe) goto fail3;
      if (param_4 != 0) *param_4 = n;
      sz = (n + 1) * 2;
      buf = (void *)fn_82E4FE08(sz);
      *param_3 = buf;
      if (buf == 0) {
fail3:
        hr = 0x8007000E;
      } else {
        memcpy(buf, *(void **)(p + 4), sz);
      }
    } else hr = 0xC00D36BD;
  } else hr = 0xC00D36E6;
  fn_82E51028(param_1 + 4, 1);
  return hr;
}
