extern int fn_82AC86B0();


unsigned __int64 fn_82AC88B8(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82AC86B0(param_2);
  if ((iVar2 == 0) || (*(int *)(param_1 + 0x28) == iVar2)) {
    uVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar2;
    uVar1 = 1;
  }
  return uVar1;
}

