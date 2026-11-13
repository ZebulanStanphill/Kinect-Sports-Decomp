extern int fn_82A1E108();


unsigned __int64 fn_82C01268(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x170);
  while (iVar1 != 0) {
    fn_82A1E108(0x32);
    iVar1 = *(int *)(param_1 + 0x170);
  }
  return 0;
}

