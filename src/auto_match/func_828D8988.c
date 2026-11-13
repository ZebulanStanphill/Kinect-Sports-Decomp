extern int fn_8289F2E0();


unsigned __int64 fn_828D8988(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != 0) {
    fn_8289F2E0(iVar1,*(unsigned int *)(param_1 + 0x18));
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  }
  return 1;
}

