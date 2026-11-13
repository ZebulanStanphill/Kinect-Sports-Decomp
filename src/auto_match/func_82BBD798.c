extern unsigned int lbl_82015BD4;
extern unsigned int lbl_820885F0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82BBD798(double param_1)

{
  int iVar1;
  
  if ((double)lbl_82015BD4 <= param_1) {
    return 0x7fffffe;
  }
  if (param_1 <= (double)lbl_820885F0) {
    return 0x8000000;
  }
  iVar1 = 0x81 - ((int)(float)param_1 >> 0x17 & 0xffU);
  if (0xf < iVar1) {
    iVar1 = 0xf;
  }
  return ((int)((double)(1L << ((__int64)(iVar1 + 0x19) & 0x7fU)) * param_1) + 1 >> 1 & 0xfffffffU)
         + iVar1 * 0x10000000;
}

