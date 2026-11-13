extern unsigned int lbl_820F3D88;
extern unsigned int lbl_820F3EA4;


double fn_82C3F530(unsigned __int64 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 1) {
    if (iVar1 < -0x48) {
      param_1 = 0xffffffffffffffb9;
    }
    return (double)(*(float *)(&lbl_820F3D88 + -(int)((param_1 & 0xffffffff) << 2)) /
                   (float)(__int64)(1 << (-(int)param_1 >> 2 & 0x3fU)));
  }
  if (0x3d < iVar1) {
    param_1 = 0x3e;
  }
  return (double)((float)(__int64)(1 << ((int)param_1 >> 2 & 0x3fU)) *
                 *(float *)((int)&lbl_820F3EA4 + (int)((param_1 & 0xffffffff) << 2)));
}

