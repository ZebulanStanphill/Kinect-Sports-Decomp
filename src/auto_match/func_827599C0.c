extern int fn_8267C4C8();
extern int fn_827594F8();
extern float lbl_8200571C;


void fn_827599C0(unsigned char *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  if (((*param_1 & 0x10) == 0) || (iVar2 != *(int *)(param_1 + 4))) {
    fn_827594F8(param_1);
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 != 0) {
      fn_8267C4C8(param_3);
    }
  }
  *(unsigned int *)(param_1 + 0x10) = *param_4;
  *(unsigned int *)(param_1 + 0x14) = param_4[1];
  *(unsigned int *)(param_1 + 0x18) = param_4[2];
  *(unsigned int *)(param_1 + 0x1c) = param_4[3];
  *(unsigned int *)(param_1 + 0x20) = param_4[4];
  fVar1 = (float)param_4[5];
  *(float *)(param_1 + 0x24) = fVar1;
  fVar1 = fVar1 * lbl_8200571C;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * lbl_8200571C;
  *(float *)(param_1 + 0x24) = fVar1;
  return;
}

