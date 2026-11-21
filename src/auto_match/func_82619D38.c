unsigned __int64 fn_82619D38(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 == 8) {
    *(unsigned int *)(*(int *)(param_1 + 4) + 400) = 1;
    *(unsigned char *)(param_1 + 0xfb0) = 0;
  }
  else {
    if (param_2 != 0xe) {
      uVar1 = fn_82591730();
      return uVar1;
    }
    *(unsigned char *)(param_1 + 0xfb0) = 1;
  }
  return 0;
}
