extern unsigned int lbl_821CA460;


void fn_8252AF80(double param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  unsigned int uVar3;
  double dVar4;
  
  fVar2 = lbl_821CA460;
  param_2 = param_2 + 0x1d0;
  dVar4 = (double)lbl_821CA460;
  *(float *)(param_3 * 0x10 + param_2 + 0x2c) = (float)param_1;
  *(float *)((param_3 + 0x10) * 4 + param_2) = fVar2;
  iVar1 = (param_3 + 4) * 4;
  uVar3 = *(unsigned int *)(iVar1 + param_2);
  if (dVar4 <= param_1) {
    uVar3 = uVar3 & 0xffffffdf;
  }
  else {
    uVar3 = uVar3 | 0x20;
  }
  *(unsigned int *)(iVar1 + param_2) = uVar3;
  return;
}

