unsigned __int64 fn_8261AC20(int param_1,int param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  
  if (param_2 != 0) {
    uVar1 = fn_82591730();
    return uVar1;
  }
  *(char *)(param_1 + 0x1d) = '\x01' - (param_3 == 0);
  return 1;
}
