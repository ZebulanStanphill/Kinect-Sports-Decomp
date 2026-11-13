extern unsigned int lbl_820957E0;
extern unsigned int lbl_820958FC;


double fn_82A7C8B8(unsigned __int64 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 1) {
    if (iVar1 < -0x48) {
      param_1 = 0xffffffffffffffb9;
    }
    return (double)(*(float *)(&lbl_820957E0 + -(int)((param_1 & 0xffffffff) << 2)) /
                   (float)(__int64)(1 << (-(int)param_1 >> 2 & 0x3fU)));
  }
  if (0x3d < iVar1) {
    param_1 = 0x3e;
  }
  return (double)((float)(__int64)(1 << ((int)param_1 >> 2 & 0x3fU)) *
                 *(float *)((int)&lbl_820958FC + (int)((param_1 & 0xffffffff) << 2)));
}

