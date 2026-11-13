extern int fn_82809558();
extern int fn_8280A5D8();
extern int fn_82810558();
extern int fn_82810B78();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13C0;


void fn_827EE128(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  float *in_r10;
  double extraout_f1;
  double dVar2;
  double dVar3;
  double dVar4;
  unsigned int in_stack_00000054;
  
  uVar1 = fn_82F6A548();
  dVar4 = (double)lbl_821AAD20;
  if (dVar4 <= (double)(float)(param_3 * param_3 -
                              (double)(float)((double)(float)(param_2 - param_4) * extraout_f1))) {
    dVar3 = extraout_f1;
    dVar2 = (double)fn_82809558();
    dVar2 = (double)(float)(dVar2 + param_3);
    dVar3 = (double)fn_8280A5D8(dVar3);
    dVar3 = -(double)(float)(dVar3 * dVar2);
    if (((dVar3 <= param_5) && (dVar3 <= (double)*in_r10)) &&
       ((lbl_831F13C0 == 0 || (dVar4 <= dVar3)))) {
      fn_82810558(dVar3,param_7,uVar1,param_8,in_stack_00000054);
      fn_82810B78(in_stack_00000054,in_stack_00000054);
      *in_r10 = (float)dVar3;
      uVar1 = 1;
      goto LAB_827ee1e8;
    }
  }
  uVar1 = 0;
LAB_827ee1e8:
  fn_82F6A594(uVar1);
  return;
}

