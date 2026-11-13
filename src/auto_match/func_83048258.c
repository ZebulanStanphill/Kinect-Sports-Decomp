extern float lbl_8200DFF4;
extern unsigned int lbl_821AAD20;


double fn_83048258(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  
  uVar1 = *(unsigned short *)(*(int *)(param_1 + 8) + 0xd4);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  if (uVar1 == 0) {
    return (double)lbl_821AAD20;
  }
  return (double)(((((float)(__int64)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) *
                     (float)(__int64)(int)(uVar1 - 1) + (float)*(unsigned int *)(param_1 + 0x34)) /
                   (float)(*(unsigned int *)(iVar2 + 0x24) >> 3 & 0x1f)) * lbl_8200DFF4) /
                 (float)*(unsigned int *)(iVar2 + 0x20));
}

