typedef unsigned int U32;
extern int fn_82A1BB28(U32 h, void *a, U32 *b, void *c, U32 n);
extern int fn_82A1BB50(int a, int b, int c, U32 *out);
extern void fn_82A1BC70(U32 h);
extern void *memcpy(void *d, const void *s, U32 n);

int fn_82520A38(unsigned char *param_1, void *param_2)
{
  int hr;
  int result;
  U32 h;

  result = 0;
  if (param_2 != 0) {
    memcpy(param_1 + 8, param_2, 1000);
    h = 0;
    hr = fn_82A1BB50(0, 0, 0, &h);
    if (hr >= 0) {
      *(U32 *)(param_1 + 0x7d8) = 1000;
      hr = fn_82A1BB28(h, param_1 + 0x3f0, (U32 *)(param_1 + 0x7d8), param_1 + 8, 1000);
      fn_82A1BC70(h);
      if (hr >= 0) {
        result = 1;
      }
    }
  }
  return result;
}
