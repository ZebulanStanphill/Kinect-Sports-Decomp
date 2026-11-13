extern unsigned int *auStack_2c;
extern int fn_82A5CF88();
extern int fn_82A76808();
extern unsigned int uStack_30;


void fn_82A5D068(unsigned __int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned int *param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c)

{
  int iVar1;


  unsigned int uStack_30;
  unsigned int auStack_2c;

  uStack_30 = 0;
  auStack_2c = 0;
  iVar1 = fn_82A76808(param_2,param_3,param_5,param_6,&uStack_30);
  if ((-1 < iVar1) &&
     (iVar1 = fn_82A5CF88(param_1,in_stack_00000054,param_4,uStack_30,param_7,in_stack_0000005c,
                            &auStack_2c), -1 < iVar1)) {
    *param_8 = auStack_2c;
  }
  return;
}
