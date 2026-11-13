extern int fn_82E50330();


unsigned __int64 fn_82E47028(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  uVar1 = 0;
  if (*(unsigned int *)(param_1 + 0x28) > 0) {
    lVar2 = 0;
    do {
      fn_82E50330((unsigned __int64)*(unsigned int *)(param_1 + 0x20) + lVar2 + 0x10);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar1 < *(unsigned int *)(param_1 + 0x28));
  }
  *(unsigned int *)(param_1 + 0x28) = 0;
  return 0;
}

