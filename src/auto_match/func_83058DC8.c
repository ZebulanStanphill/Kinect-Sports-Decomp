extern float lbl_8217E3C8;


void fn_83058DC8(int param_1,unsigned int *param_2)

{
  *param_2 = 1;
  param_2[1] = *(unsigned int *)(param_1 + 0x34);
  param_2[2] = *(float *)(param_1 + 0x38) * lbl_8217E3C8;
  param_2[3] = *(unsigned int *)(param_1 + 0x44);
  return;
}

