void fn_82A1E928(unsigned int param_1,unsigned __int64 param_2)

{
  
  if (param_1 == 0xff) {
    param_2 = param_2 | 0x40000000;
    param_1 = 0;
  }
  XamInputGetKeystrokeEx(&param_1,param_2);
  return;
}

