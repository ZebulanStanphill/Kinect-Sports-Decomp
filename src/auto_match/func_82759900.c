extern int fn_827594F8();
extern int fn_82759580();
extern float lbl_8200571C;


void fn_82759900(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  float fVar1;
  float fVar2;
  
  fn_827594F8();
  *(unsigned char *)(param_1 + 1) = 2;
  *(unsigned int *)(param_1 + 0x10) = *param_4;
  *(unsigned int *)(param_1 + 0x14) = param_4[1];
  *(unsigned int *)(param_1 + 0x18) = param_4[2];
  *(unsigned int *)(param_1 + 0x1c) = param_4[3];
  *(unsigned int *)(param_1 + 0x20) = param_4[4];
  *(unsigned int *)(param_1 + 0x24) = param_4[5];
  fVar2 = lbl_8200571C;
  fVar1 = *(float *)(param_1 + 0x1c) * lbl_8200571C;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * lbl_8200571C;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * fVar2;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * fVar2;
  *(float *)(param_1 + 0x1c) = fVar1;
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * fVar2;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar2;
  fn_82759580(param_1 + 8,param_3);
  return;
}

