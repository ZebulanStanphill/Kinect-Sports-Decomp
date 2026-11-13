extern void fn_822A2FE8(void);
extern float lbl_831CE850;

void fn_822A2DD8(int *param_1, int param_2, int param_3)
{
  int iVar1;
  float f;

  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  if (param_2 == 1) {
    fn_822A2FE8();
  }
  iVar1 = *param_1;
  if (iVar1 == 2 || iVar1 == 3 || iVar1 == 4 || iVar1 == 5 || iVar1 == 6 || iVar1 == 7) {
    f = *(float *)(param_1[iVar1 * 4 + 0x89] + param_1[0xa9] * 8 + 4);
  } else {
    f = 0.0f;
  }
  *(float *)&param_1[0x87] = f;
  *(float *)&param_1[6] = lbl_831CE850;
}
