extern float lbl_8217E4C8;


void fn_8305A428(int param_1,unsigned int *param_2)

{
  float fVar1;
  
  *param_2 = 6;
  param_2[1] = *(unsigned int *)(param_1 + 0x4c);
  fVar1 = lbl_8217E4C8;
  param_2[2] = *(float *)(param_1 + 0x50) * lbl_8217E4C8;
  param_2[3] = *(float *)(param_1 + 0x70) * fVar1;
  param_2[4] = *(float *)(param_1 + 0x60) * fVar1;
  param_2[5] = *(float *)(param_1 + 0x80) * fVar1;
  param_2[6] = *(float *)(param_1 + 0x90) * fVar1;
  param_2[7] = *(float *)(param_1 + 0xa0) * fVar1;
  param_2[8] = *(unsigned int *)(param_1 + 0x5c);
  param_2[9] = *(unsigned int *)(param_1 + 0x7c);
  param_2[10] = *(unsigned int *)(param_1 + 0x6c);
  param_2[0xb] = *(unsigned int *)(param_1 + 0x8c);
  param_2[0xc] = *(unsigned int *)(param_1 + 0x9c);
  param_2[0xd] = *(unsigned int *)(param_1 + 0xac);
  return;
}

