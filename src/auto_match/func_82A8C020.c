extern float lbl_820D1764;
extern float lbl_82196284;

void fn_82A8C020(int param_1,unsigned int *param_2,float *param_3)
{
  param_3[1] = *(float *)(param_1 + 8) * (float)param_2[1] + *(float *)(param_1 + 0x14);
  param_3[2] = (float)param_2[2] * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x18);
  if ((param_2[1] & 1) != 0) {
    param_3[2] += *(float *)(param_1 + 0xc) * lbl_820D1764;
  }
  param_3[0] = (float)*param_2 * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x10);
  if (((param_2[2] ^ param_2[1]) & 1) == 0) {
    return;
  }
  param_3[0] += *(float *)(param_1 + 4) * lbl_82196284;
}
