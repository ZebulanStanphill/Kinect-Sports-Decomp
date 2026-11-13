extern unsigned int lbl_82196288;
extern unsigned int lbl_821AAD20;


double fn_827F2328(int param_1)

{
  int iVar1;
  float fVar2;
  
  if ((unsigned int)*(unsigned char *)(param_1 + 0x54) == (unsigned int)*(unsigned char *)(param_1 + 0x53)) {
    return (double)lbl_821AAD20;
  }
  iVar1 = *(int *)(((*(unsigned char *)(param_1 + 0x53) - 1 & 3) + 0xc) * 4 + param_1);
  fVar2 = *(float *)(iVar1 + 0x2c) - *(float *)(iVar1 + 0x30);
  return (double)((float)(lbl_82196288 <= fVar2) * fVar2);
}

