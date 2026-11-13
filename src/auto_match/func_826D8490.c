extern float lbl_82005718;


void fn_826D8490(float *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0xc) + 0x20);
  fVar2 = *(float *)(iVar1 + 0x34) * lbl_82005718;
  fVar3 = *(float *)(iVar1 + 0x38) * lbl_82005718;
  fVar4 = *(float *)(iVar1 + 0x3c) * lbl_82005718;
  *param_1 = *(float *)(iVar1 + 0x30) * lbl_82005718;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar4;
  return;
}

