extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_827E9A68();
extern int fn_827EF590();
extern int fn_827EF608();
extern int fn_8280A5E8();
extern int fn_82810328();
extern int fn_8281CAE8();
extern unsigned int lbl_82002AE0;


unsigned __int64
fn_827EDD58(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,float *param_7,unsigned __int64 param_8,
             unsigned __int64 param_9)

{
  int iVar2;
  unsigned __int64 uVar1;
  struct { float first; float second; } stack_pair_70;

  float fStack_68;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  
  stack_pair_70.first = (float)((double)*param_7 + param_1);
  stack_pair_70.second = (float)((double)param_7[1] + param_1);
  fStack_68 = (float)((double)param_7[2] + param_1);
  fn_82810328(param_3,param_6,auStack_50);
  fn_82810328(param_5,param_9,auStack_60);
  fn_8281CAE8(param_8,auStack_50,auStack_50);
  fn_8281CAE8(param_8,auStack_60,auStack_60);
  iVar2 = fn_8280A5E8((double)stack_pair_70.first);
  if (((iVar2 == 0) && (iVar2 = fn_8280A5E8((double)stack_pair_70.second), iVar2 == 0)) &&
     (iVar2 = fn_8280A5E8((double)fStack_68), iVar2 == 0)) {
    fn_827EF590(&stack_pair_70.first,auStack_40);
    fn_827EF608(auStack_40,auStack_50,auStack_50);
    fn_827EF608(auStack_40,auStack_60,auStack_60);
    uVar1 = fn_827E9A68((double)lbl_82002AE0,param_2,auStack_50,auStack_60);
    return uVar1;
  }
  return 0;
}

