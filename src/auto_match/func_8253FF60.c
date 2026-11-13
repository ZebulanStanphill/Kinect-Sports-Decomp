extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821925C0;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8253FF60(double param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = (unsigned int)param_1;
  uVar2 = (unsigned __int64)uVar1;
  if (param_1 < (double)ltcg_pool_0_0f) {
    if (lbl_821925C0 < (float)(param_1 - (double)(__int64)(int)uVar1)) {
      return uVar2;
    }
    return uVar2 - 1;
  }
  if ((float)(param_1 - (double)(__int64)(int)uVar1) < lbl_8218E8E8) {
    return uVar2;
  }
  return uVar2 + 1;
}

