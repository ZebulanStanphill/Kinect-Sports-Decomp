int fn_82FB63A8(unsigned __int64 param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  for (; (param_4 != 0 && (param_4 != param_2)); param_4 = *(int *)(param_4 + 0x10)) {
    if (*(int *)(param_4 + 0xc) == param_3) {
      return param_4;
    }
  }
  return 0;
}

