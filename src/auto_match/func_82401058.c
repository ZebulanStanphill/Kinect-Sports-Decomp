extern void fn_822315A0(unsigned);
extern void fn_82366A98(unsigned *);
extern void fn_825708F0(unsigned, unsigned);
extern int lbl_821B7B38[];
extern float lbl_821CC160;
extern unsigned lbl_8327F844;

void fn_82401058(unsigned *param_1)
{
  unsigned base;
  char *p;
  int n;
  float f;
  param_1[0] = (unsigned)lbl_821B7B38;
  fn_825708F0(param_1[0xb7], param_1[0xd9]);
  fn_825708F0(param_1[0xb7], param_1[0xd3]);
  fn_825708F0(param_1[0xb7], param_1[0xd4]);
  fn_825708F0(param_1[0xb7], param_1[0xd5]);
  fn_825708F0(param_1[0xb7], param_1[0xd6]);
  fn_825708F0(param_1[0xb7], param_1[0xd7]);
  fn_825708F0(param_1[0xb7], param_1[0xd8]);
  base = lbl_8327F844;
  if (lbl_8327F844 != 0) {
    p = (char *)(base + 0x14);
    f = lbl_821CC160;
    n = 2;
    do {
      *(float *)(p + 0xa4) = f;
      *(int *)(p + 0x88) = 0;
      *(float *)(p + 0x9c) = f;
      *(int *)(p + 0xac) = 0;
      *(float *)(p + 0xa0) = f;
      *(int *)(p + 0x84) = 0;
      *(float *)(p + 0x98) = f;
      *(int *)(p + 0x4c) = 0;
      *(float *)(p + 0x90) = f;
      *(float *)(p + 0x94) = f;
      *(float *)(p + 0x8c) = f;
      *(float *)(p + 0x3c) = f;
      *(float *)(p + 0x40) = f;
      p = p + 0x2c;
      *p = 0;
      n--;
    } while (n != 0);
    *(int *)(base + 0xf0) = 0;
    *(int *)(base + 0xf4) = 0;
  }
  if (param_1[0x9e] != 0) fn_822315A0(param_1[0x9e]);
  if (param_1[0x9c] != 0) fn_822315A0(param_1[0x9c]);
  if (param_1[0x9a] != 0) fn_822315A0(param_1[0x9a]);
  if (param_1[0x98] != 0) fn_822315A0(param_1[0x98]);
  if (param_1[0x96] != 0) fn_822315A0(param_1[0x96]);
  if (param_1[0x94] != 0) fn_822315A0(param_1[0x94]);
  if (param_1[0x92] != 0) fn_822315A0(param_1[0x92]);
  fn_82366A98(param_1);
}
