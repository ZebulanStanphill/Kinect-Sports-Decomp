extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_82014E48;
extern unsigned int lbl_821AAD20;


double fn_8304C458(int param_1)

{
  unsigned short uVar1;
  
  uVar1 = *(unsigned short *)(*(int *)(param_1 + 8) + 0xd4);
  if (uVar1 == 0) {
    return (double)lbl_821AAD20;
  }
  return (double)(((((float)(unsigned int)(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c)) *
                     (float)(__int64)(int)(uVar1 - 1) + (float)*(unsigned int *)(param_1 + 0x2c)) /
                   (float)*(unsigned int *)(param_1 + 0x5c)) * lbl_82014E48 * lbl_8200DFF4) /
                 (float)*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x6c) + 0x20));
}

