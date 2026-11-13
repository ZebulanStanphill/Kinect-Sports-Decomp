void fn_830A7130(float *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *param_4;
  *(float *)(param_3 + 0xc) = *(float *)(param_2 + 8) * *param_1;
  *(unsigned char *)(iVar1 + 3) = 10;
  *(float *)(iVar1 + 0x30) = param_1[2] * *(float *)(param_2 + 4);
  *param_4 = iVar1 + 0x50;
  *(float *)(iVar1 + 0x34) = param_1[3] * *(float *)(param_2 + 4);
  *(float *)(iVar1 + 0x38) = param_1[1];
  *(float *)(iVar1 + 0x3c) = param_1[4];
  *(float *)(iVar1 + 0x40) = param_1[5];
  return;
}

