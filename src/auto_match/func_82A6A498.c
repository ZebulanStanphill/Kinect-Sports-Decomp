extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82A6A498(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  float fVar2;
  unsigned __int64 uVar3;
  
  uVar1 = 1 << (param_3 - 1U & 0x3f);
  fVar2 = *(float *)(param_4 * 4 + param_1) * (float)(__int64)(int)uVar1;
  if (lbl_821AAD20 <= fVar2) {
    uVar3 = (unsigned __int64)uVar1 - 1;
    if ((int)(fVar2 + lbl_82002C5C) <= (int)uVar3) {
      return (unsigned __int64)(unsigned int)(int)(fVar2 + lbl_82002C5C);
    }
    return uVar3;
  }
  uVar3 = ~((unsigned __int64)uVar1 - 1);
  if ((int)uVar3 <= (int)(fVar2 - lbl_82002C5C)) {
    return (unsigned __int64)(unsigned int)(int)(fVar2 - lbl_82002C5C);
  }
  return uVar3;
}

