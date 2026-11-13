extern int fn_82F68B6C();


unsigned __int64 fn_82F603C8(int param_1)

{
  unsigned __int64 uVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    uVar1 = fn_82F68B6C(param_1 + 0x24);
    return uVar1;
  }
  return 0xffffffff82240404;
}

