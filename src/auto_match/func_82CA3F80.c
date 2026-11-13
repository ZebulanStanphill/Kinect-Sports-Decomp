extern int fn_82F68CC0();


void fn_82CA3F80(int param_1,__int64 param_2,__int64 param_3,__int64 param_4,__int64 param_5,
                  __int64 param_6,__int64 param_7,__int64 param_8)

{
  __int64 lVar1;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  int in_stack_00000074;
  
  lVar1 = (__int64)(in_stack_00000074 >> 1);
  if (*(int *)(param_1 + 0x98) == 0) {
    if (0 < in_stack_00000074 >> 1) {
      param_6 = param_6 - param_7;
      param_3 = param_3 - param_4;
      do {
        fn_82F68CC0(param_2,param_5,in_stack_0000006c & 0xfffffffe);
        param_2 = param_2 + (unsigned __int64)in_stack_0000005c;
        fn_82F68CC0(param_2,param_5 + param_8,in_stack_0000006c & 0xfffffffe);
        param_5 = param_5 + param_8 + param_8;
        param_2 = param_2 + (unsigned __int64)in_stack_0000005c;
        fn_82F68CC0(param_3 + param_4,param_6 + param_7,(int)in_stack_0000006c >> 1);
        fn_82F68CC0(param_4,param_7,(int)in_stack_0000006c >> 1);
        lVar1 = lVar1 + -1;
        param_7 = param_7 + (unsigned __int64)in_stack_00000054;
        param_4 = param_4 + (unsigned __int64)in_stack_00000064;
      } while (lVar1 != 0);
    }
  }
  else {
    (**(int (***)())(param_1 + 0x3e4c))();
  }
  return;
}

