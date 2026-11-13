extern int fn_82F655D8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005778;
extern unsigned int lbl_82015618;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83058F80(double param_1,unsigned __int64 param_2,double param_3,int param_4)

{
  double dVar1;
  
  if (param_1 < lbl_82005710) {
    param_3 = param_3 - lbl_82005778;
  }
  dVar1 = (double)fn_82F655D8(lbl_82015618,param_3 * lbl_82005720);
  *(float *)(*(int *)(param_4 + 8) + 0x3c) = (float)dVar1;
  return;
}

