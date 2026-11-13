extern float lbl_8218E8E8[];
extern unsigned int lbl_821917B0;
extern float lbl_821CA45C[];


void fn_824936E8(int param_1)

{
  unsigned iVar1;
  int iVar2;
  float uVar3;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  iVar1 = *(unsigned *)(param_1 + 0x3c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x194);
  *(int *)(iVar2 + 0x208) = iVar1;
  if ((iVar1 != 0) && (iVar1 = *(unsigned *)(*(int *)(iVar2 + 0x2c4) + 0x94), iVar1 != 0)) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    *(float *)(iVar1 + 0x24) = lbl_8218E8E8[0];
    { float v[2]; v[0]=lbl_8218E8E8[0x2ec8/4]; v[1]=lbl_821CA45C[1]; *(float *)(iVar1+0x28)=v[0]; *(float *)(iVar1+0x2c)=v[1]; }
  }
  *(unsigned int *)(iVar2 + 0x2a4) = 1;
  *(unsigned int *)(param_1 + 0x44) = 0;
  return;
}

