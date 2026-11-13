extern int fn_82F655D8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005778;
extern unsigned int lbl_82015618;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83057CC8(double param_1,double param_2,int param_3)

{
  int iVar1;
  double dVar2;
  
  if (param_2 < lbl_82005710) {
    param_1 = param_1 - lbl_82005778;
  }
  dVar2 = (double)fn_82F655D8(lbl_82015618,param_1 * lbl_82005720);
  iVar1 = *(int *)(param_3 + 8);
  *(float *)(iVar1 + 0x54) = (float)dVar2;
  *(float *)(iVar1 + 0x44) = (float)dVar2;
  return;
}

