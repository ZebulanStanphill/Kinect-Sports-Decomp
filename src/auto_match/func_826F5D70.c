__int64 fn_826F5D70(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  unsigned int uVar2;
  
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = *(unsigned int *)(param_1 + 0x50);
  }
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x58) + 1;
  uVar2 = (unsigned int)lVar1;
  *(unsigned int *)(param_1 + 0x58) = uVar2;
  *(unsigned int *)(param_1 + 0x50) = uVar2;
  return lVar1;
}

