typedef struct {
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;
  int h;
  int i;
  int j;
} Box_82DDF930;

extern int fn_82DDEF70(int *out, Box_82DDF930 *box, int arg);

void fn_82DDF930(int *param_1, char *param_2, float *param_3, int param_4)
{
  int arg;
  int t;
  Box_82DDF930 box;

  arg = *(int *)(param_2 + 0x20);
  *param_1 = param_4;
  box.e = 0;
  box.f = 0;
  box.g = 0;
  box.h = 0;
  box.j = 0;
  box.i = 0x10;
  param_1[4] = (int)((param_3[0] - *(float *)(param_2 + 0x10)) * *(float *)(param_2 + 0x1c)) - 1;
  box.a = *(short *)(param_1 + 4);
  param_1[5] = (int)((param_3[1] - *(float *)(param_2 + 0x14)) * *(float *)(param_2 + 0x1c)) - 1;
  box.b = *(short *)(param_1 + 5);
  param_1[6] = (int)((param_3[2] - *(float *)(param_2 + 0x18)) * *(float *)(param_2 + 0x1c)) - 1;
  t = (int)(param_3[3] * *(float *)(param_2 + 0x1c)) + 2;
  param_1[7] = t;
  box.d = (t >> 16) + 1;
  box.c = *(short *)(param_1 + 6);
  fn_82DDEF70(param_1, &box, arg);
}
