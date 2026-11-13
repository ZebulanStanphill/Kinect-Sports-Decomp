extern void *memset(void *, int, unsigned int);
typedef struct { int size; int v[14]; } Caps_829C9A70;
extern int (*lbl_8315C3E8)(Caps_829C9A70 *);

int fn_829C9A70(int *param_1)
{
  Caps_829C9A70 c;
  int hr;
  if (param_1 == 0) {
    return 0x80070057;
  }
  memset(&c, 0, sizeof(c));
  c.size = 0x19;
  hr = lbl_8315C3E8(&c);
  if (hr >= 0) {
    param_1[0] = c.v[0] * 0x32;
    param_1[1] = c.v[1] * 0x32;
    param_1[2] = c.v[2] * 0x32;
    param_1[3] = c.v[3] * 0x32;
    param_1[4] = c.v[4] * 0x32;
    param_1[5] = c.v[5] * 0x32;
    param_1[6] = c.v[6] * 0x32;
    param_1[7] = c.v[7] * 0x32;
    param_1[8] = c.v[8] * 0x32;
    param_1[9] = c.v[9] * 0x32;
    param_1[10] = c.v[10] * 0x32;
    param_1[11] = c.v[11] * 0x32;
    param_1[12] = c.v[12] * 0x32;
    param_1[13] = c.v[13] * 0x32;
  }
  return hr;
}
