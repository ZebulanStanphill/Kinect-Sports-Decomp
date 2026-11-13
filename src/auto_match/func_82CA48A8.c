extern int memcpy();


void fn_82CA48A8(int param_1, __int64 param_2, __int64 param_3, __int64 param_4, __int64 param_5, __int64 param_6, __int64 param_7, __int64 param_8, unsigned int in_stack_00000054, unsigned __int64 unused_arg_10, unsigned __int64 unused_arg_11, unsigned int in_stack_0000006c, int in_stack_00000074)

{
  __int64 lVar1;



  
  lVar1 = (__int64)(in_stack_00000074 >> 1);
  if (0 < lVar1) {
    param_6 = param_6 - param_7;
    do {
      memcpy(param_2,param_5,in_stack_0000006c & 0xfffffffe);
      param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5690) + param_2;
      memcpy(param_2,param_5 + param_8,in_stack_0000006c & 0xfffffffe);
      param_5 = param_5 + param_8 + param_8;
      param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5690) + param_2;
      memcpy(param_3,param_6 + param_7,(int)in_stack_0000006c >> 1);
      param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5694) + param_3;
      memcpy(param_4,param_7,(int)in_stack_0000006c >> 1);
      lVar1 = lVar1 + -1;
      param_7 = param_7 + (unsigned __int64)in_stack_00000054;
      param_4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5698) + param_4;
    } while (lVar1 != 0);
  }
  return;
}

