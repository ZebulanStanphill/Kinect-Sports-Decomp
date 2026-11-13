extern unsigned int *auStack_60;
extern int fn_825359D8();
extern int fn_825354B8();
extern int fn_82535298();
extern int fn_82535DB8();
extern int fn_82552B50();


int fn_82552788(int *param_1, int *param_2, unsigned int *param_3, unsigned __int64 param_4, __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned int in_stack_00000054)

{
  unsigned __int64 uVar1;
  int iVar2;

  unsigned int auStack_60;

  if (((param_4 & 0xffffffff) != 0) && ((int *)*param_2 != (int *)0x0)) {
    uVar1 = (**(int (***)())(*(int *)*param_2 + 0x20))();
    fn_82535DB8(param_4,param_5,uVar1);
  }
  fn_82552B50(param_2,(param_5 + -3) - (param_5 + -4 + (unsigned __int64)(param_5 + -3 == 0)));
  auStack_60 = *param_3;
  if ((param_4 & 0xffffffff) == 0) {
    if ((param_6 & 0xffffffff) == 0) {
      iVar2 = fn_825359D8(&auStack_60,*param_1,param_8,in_stack_00000054);
    }
    else {
      if ((param_7 & 0xffffffff) == 0) {
        param_7 = 0;
      }
      iVar2 = fn_825354B8(&auStack_60,param_6,param_7,*param_1,param_8,in_stack_00000054);
    }
  }
  else {
    iVar2 = fn_82535298(&auStack_60,param_4,param_5,*param_1,param_8,in_stack_00000054);
  }
  *param_2 = iVar2;
  param_2[1] = *param_1;
  return iVar2;
}
