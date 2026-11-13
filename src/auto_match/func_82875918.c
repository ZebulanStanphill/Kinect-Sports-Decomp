void fn_82875918(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  if (((param_2 < 0x20) && (param_2 != 0x1f)) && (param_2 == 1)) {
    *(unsigned char *)(param_4 + 0x28) = 1;
    return;
  }
  *(unsigned char *)(param_4 + 0x29) = 1;
  return;
}

