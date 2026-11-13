typedef unsigned char bool;
extern unsigned int *auStack_20;
extern unsigned int *auStack_40;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_827EF590();
extern int fn_827EF608();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_8281CAE8();
extern unsigned int lbl_82002AE0;


bool fn_827EC428(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  float *param_5,unsigned __int64 param_6)

{
  double dVar1;
  unsigned char auStack_40 [16];
  struct { float first; float second; } stack_pair_30;

  float fStack_28;
  unsigned char auStack_20 [16];
  
  stack_pair_30.first = (float)((double)*param_5 + param_1);
  stack_pair_30.second = (float)((double)param_5[1] + param_1);
  fStack_28 = (float)((double)param_5[2] + param_1);
  fn_82810328(param_2,param_4,auStack_40);
  fn_8281CAE8(param_6,auStack_40,auStack_40);
  fn_827EF590(&stack_pair_30.first,auStack_20);
  fn_827EF608(auStack_20,auStack_40,auStack_40);
  dVar1 = (double)fn_82810308(auStack_40);
  return dVar1 <= (double)lbl_82002AE0;
}

