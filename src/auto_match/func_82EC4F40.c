extern int fn_82EA37F0();


void fn_82EC4F40(int param_1, int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, unsigned int param_6, unsigned int param_7, __int64 param_8, int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064, unsigned __int64 unused_arg_12, unsigned __int64 unused_arg_13, unsigned __int64 unused_arg_14, unsigned __int64 unused_arg_15, unsigned int in_stack_0000008c, unsigned __int64 unused_arg_17, unsigned __int64 unused_arg_18, unsigned __int64 unused_arg_19, unsigned int in_stack_000000ac)

{
  unsigned __int64 uVar1;
  __int64 lVar2;





  int *in_stack_000000ec;
  int *in_stack_000000f4;
  unsigned int *in_stack_000000fc;
  
  in_stack_00000054 = in_stack_00000054 + in_stack_00000064;
  uVar1 = (unsigned __int64)in_stack_0000005c;
  lVar2 = (__int64)(in_stack_00000054 >> 1) * (__int64)*(int *)(param_1 + 0x568) +
          (unsigned __int64)(unsigned int)((int)(param_8 + uVar1) >> 1);
  fn_82EA37F0(param_1,param_2,param_3,param_4,
                (unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x564) * in_stack_00000054) +
                (unsigned __int64)param_5 + param_8 + uVar1,lVar2 + (unsigned __int64)param_6,
                lVar2 + (unsigned __int64)param_7,uVar1 - in_stack_0000008c);
  *in_stack_000000ec = (int)((param_8 + uVar1 & 0xffffffff) << 2) + param_1;
  *in_stack_000000f4 = in_stack_00000054 * 4 + param_2;
  *in_stack_000000fc = in_stack_000000ac;
  return;
}

