extern unsigned int fn_82E9A160(int, unsigned char *, unsigned int, int, int *);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E9A7B8(int param_1, unsigned char *param_2, unsigned int *param_3, unsigned int param_4,
                void *param_5, unsigned int param_6, int param_7)
{
  unsigned int n;
  int extra;

  n = param_6 + 4;
  if (n > param_4) {
    return -0x64;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 1;
  param_2[3] = 0xf;
  memcpy(param_2 + 4, param_5, param_6);
  *param_3 = n;
  if (param_7 != 0) {
    extra = 0;
    if (fn_82E9A160(param_1, param_2 + n, param_4 - n, 0x1f, &extra) != 0) {
      return -0x64;
    }
    *param_3 = *param_3 + extra;
  }
  return 0;
}
