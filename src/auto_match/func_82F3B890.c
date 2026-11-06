extern void fn_82E4FE40(void *p);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void fn_82E57620(void *a, void *b);
extern void fn_82E576A8(void *a, void *b);
extern void fn_82E59EC8(void *a, void *b);
extern int fn_82EE5E28(void *a, unsigned int n);
extern int fn_82EE5F60(void *a, void *buf, unsigned int n);

typedef struct Self_82F3B890 {
  char pad0[0xc];
  unsigned int fc;
  char pad10[0x40 - 0x10];
  unsigned int f40;
  char pad44[0x4c - 0x44];
  unsigned int f4c;
  char pad50[0x6c - 0x50];
  unsigned int f6c;
  void *f70;
} Self_82F3B890;

int fn_82F3B890(Self_82F3B890 *param_1, int *param_2)
{
  void *sub;
  unsigned int *pcnt;
  int hr;

  if (param_1->fc == 0) {
    return 0xc00d36b6;
  }
  if (param_2 == 0) {
    return 0x80070057;
  }
  *param_2 = 0x38;
  if (param_1->f40 < 0x38) {
    return 0xc00d36b1;
  }
  if (param_1->f70 != 0) {
    fn_82E4FE40(param_1->f70);
  }
  sub = (char *)param_1 + 0x28;
  param_1->f70 = 0;
  fn_82E57620((char *)param_1 + 0x10, sub);
  fn_82E576A8((char *)param_1 + 0x20, sub);
  fn_82E57620((char *)param_1 + 0x50, sub);
  fn_82E576A8((char *)param_1 + 0x60, sub);
  fn_82E59EC8((char *)param_1 + 0x68, sub);
  pcnt = &param_1->f6c;
  fn_82E59EC8(pcnt, sub);
  if ((param_1->f4c & 1) == 0) {
    return 0;
  }
  *param_2 = *pcnt * 6 + *param_2;
  if (param_1->f40 < *pcnt * 6) {
    return 0xc00d36b1;
  }
  param_1->f70 = fn_82E50BE8(*pcnt * 6, 0, 0, 0, 0);
  if (param_1->f70 == 0) {
    hr = 0x8007000e;
  } else {
    hr = fn_82EE5F60(sub, param_1->f70, *pcnt * 6);
    if (hr >= 0) {
      hr = fn_82EE5E28(sub, *pcnt * 6);
      if (hr >= 0) {
        return hr;
      }
    }
  }
  if (param_1->f70 != 0) {
    fn_82E4FE40(param_1->f70);
  }
  param_1->f70 = 0;
  return hr;
}
