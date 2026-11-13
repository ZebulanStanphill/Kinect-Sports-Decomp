__int64 fn_82BBFE28(unsigned int param_1)

{
  int iVar1;
  __int64 lVar2;
  
  lVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != param_1 + 0xc; iVar1 = *(int *)(iVar1 + 8)) {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}

