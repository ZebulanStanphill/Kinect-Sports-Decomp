extern __int64 fn_82EE80A8();


void fn_82EEA150(int param_1)

{
  int iVar1;
  __int64 lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1010);
  lVar2 = fn_82EE80A8(iVar1);
  *(__int64 *)(param_1 + 0x820) = lVar2 - *(__int64 *)(iVar1 + 0x28);
  return;
}

