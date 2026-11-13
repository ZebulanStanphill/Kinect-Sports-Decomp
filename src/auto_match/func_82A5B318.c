extern unsigned int *auStack_2c;
extern int fn_82A5B238();
extern int fn_82A76B88();
extern unsigned int uStack_30;


void fn_82A5B318(unsigned __int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned int *param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned int in_stack_0000006c)

{
  int iVar1;




  unsigned int uStack_30;
  unsigned int auStack_2c;
  
  uStack_30 = 0;
  auStack_2c = 0;
  iVar1 = fn_82A76B88(param_2,param_5,param_6,param_7,param_8,in_stack_00000054,&uStack_30);
  if ((-1 < iVar1) &&
     (iVar1 = fn_82A5B238(param_1,in_stack_00000064,param_3,uStack_30,in_stack_0000005c,
                            in_stack_0000006c,&auStack_2c), -1 < iVar1)) {
    *param_4 = auStack_2c;
  }
  return;
}

