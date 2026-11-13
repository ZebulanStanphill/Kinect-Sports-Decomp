void fn_8309FD30(float *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *param_4;
  *(float *)(param_3 + 0x1c) = *(float *)(param_2 + 8) * *param_1;
  *(unsigned char *)(iVar1 + 3) = 0xf;
  *(float *)(iVar1 + 0x20) = param_1[2] * *(float *)(param_2 + 4);
  *param_4 = iVar1 + 0x40;
  *(float *)(iVar1 + 0x24) = param_1[3] * *(float *)(param_2 + 4);
  *(float *)(iVar1 + 0x28) = param_1[1];
  *(float *)(iVar1 + 0x2c) = param_1[4];
  *(float *)(iVar1 + 0x30) = param_1[5];
  return;
}

