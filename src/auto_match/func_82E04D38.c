extern int fn_82E04B20();


unsigned int fn_82E04D38(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82E04B20();
  if (iVar1 != -1) {
    return *(unsigned int *)(iVar1 * 8 + *(int *)(param_1 + 8) + 4) & 0xfffffffe;
  }
  return 0;
}

