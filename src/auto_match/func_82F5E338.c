typedef unsigned char bool;
extern int fn_829C8668();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82167C7C;


bool fn_82F5E338(double param_1,unsigned __int64 param_2)

{
  int iVar1;
  float afStack_20;
  
  afStack_20 = (float)(param_1 - (double)lbl_82002AE0);
  iVar1 = fn_829C8668(0,param_2,&afStack_20);
  return iVar1 == 0 && ABS((float)((double)afStack_20 - param_1)) < lbl_82167C7C;
}

