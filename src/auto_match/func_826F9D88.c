extern float lbl_82005718;


void fn_826F9D88(int param_1,unsigned int param_2,float *param_3,float *param_4,unsigned int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (*(unsigned int *)(param_1 + 0x9d4) <= param_2) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xbc);
  fVar2 = *(float *)(param_1 + 0xb4);
  iVar4 = param_2 * 0x24 + param_1;
  fVar3 = *(float *)(iVar4 + 0x95c) * lbl_82005718;
  if (param_3 != (float *)0x0) {
    *param_3 = (*(float *)(iVar4 + 0x958) * lbl_82005718 - *(float *)(param_1 + 0xb8)) /
               *(float *)(param_1 + 0xb0);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (fVar3 - fVar1) / fVar2;
  }
  if (param_5 == (unsigned int *)0x0) {
    return;
  }
  *param_5 = *(unsigned int *)(iVar4 + 0x950);
  return;
}

