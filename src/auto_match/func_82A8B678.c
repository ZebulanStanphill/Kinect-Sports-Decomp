extern int fn_82A92220();


__int64 fn_82A8B678(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                      unsigned __int64 param_9)

{
  __int64 lVar1;
  unsigned int in_stack_0000005c;
  
  if ((param_3 & 0xffffffff) == 0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = (**(int (***)())(*param_2 + 8))(param_2);
    if (-1 < lVar1) {
      fn_82A92220(param_1,param_2 + 9,param_3,in_stack_0000005c,param_5,param_6,param_7,param_8,
                      param_9);
    }
  }
  return lVar1;
}

