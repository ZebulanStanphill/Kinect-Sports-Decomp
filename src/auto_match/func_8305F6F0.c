extern int fn_82810328();
extern int fn_82810558();
extern int fn_82810BE8();
extern unsigned int lbl_82002C5C;


void fn_8305F6F0(__int64 param_1,unsigned __int64 param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  
  fn_82810328(param_1 + 0xc,param_1,param_2);
  dVar2 = (double)fn_82810BE8(param_2);
  dVar1 = (double)lbl_82002C5C;
  *param_3 = (float)(dVar2 * dVar1);
  fn_82810558(dVar1,param_2,param_1);
  return;
}

