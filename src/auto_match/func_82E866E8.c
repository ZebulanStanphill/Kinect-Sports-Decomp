extern float lbl_82015610;
extern unsigned int lbl_8215F6A8;


void fn_82E866E8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  double dVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 0x7658);
  uVar2 = *(unsigned int *)(param_1 + 0xa1c);
  dVar3 = (double)(*(int *)(param_1 + 0x7650) + *(unsigned int *)(param_1 + 0x7654) + uVar1);
  if ((dVar3 <= (double)((__int64)
                         ((double)(((unsigned __int64)*(unsigned int *)(param_1 + 0x2d8) & 0x3fffffff) << 2) *
                         *(double *)(param_1 + 0x7648)) & 0xffffffff) * lbl_82015610) ||
     ((double)uVar1 <= dVar3 * lbl_82015610)) {
    if (((double)uVar1 <= dVar3 * lbl_8215F6A8) &&
       ((double)*(unsigned int *)(param_1 + 0x7654) <= dVar3 * lbl_82015610)) {
      uVar2 = uVar2 - 1;
    }
  }
  else {
    uVar2 = uVar2 + 1;
  }
  if (1 < (int)uVar2) {
    *(unsigned int *)(param_1 + 0xa1c) = 1;
    return;
  }
  *(unsigned int *)(param_1 + 0xa1c) = -((int)uVar2 >> 0x1f) - 1U & uVar2;
  return;
}

