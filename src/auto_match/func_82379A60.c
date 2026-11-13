extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1BFC;
extern unsigned int lbl_831D1C00;
extern unsigned int lbl_831D1C04;


double fn_82379A60(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x124);
  if (uVar1 == 0) {
    return (double)lbl_831D1BFC;
  }
  if (uVar1 != 1) {
    if (2 < uVar1) {
      return (double)ltcg_pool_0_0f;
    }
    return (double)lbl_831D1C04;
  }
  return (double)lbl_831D1C00;
}

