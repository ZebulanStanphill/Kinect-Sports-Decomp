extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8326459C;


double fn_83053258(int param_1)

{
  unsigned __int64 uVar1;
  double dVar2;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x60) + 0x84);
  trapWord(6,uVar1,0);
  dVar2 = (double)(*(float *)(param_1 + 0x98) /
                   (float)(((((unsigned __int64)*(unsigned int *)(param_1 + 0x68) -
                             (unsigned __int64)*(unsigned int *)(param_1 + 0xb0)) + uVar1) - 1 & 0xffffffff) /
                          uVar1) -
                  (float)(*(__int64 *)(*(int *)(param_1 + 0x60) + 0x50) -
                         *(__int64 *)(param_1 + 0x58)) / lbl_8326459C);
  if (dVar2 <= (double)lbl_821AAD20) {
    return (double)lbl_821AAD20;
  }
  return dVar2;
}

