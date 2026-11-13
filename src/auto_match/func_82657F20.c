extern unsigned int *__imp__VdGlobalDevice;


unsigned __int64 fn_82657F20(int *param_1)

{
  int iVar1;
  
  iVar1 = *__imp__VdGlobalDevice;
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return 0xffffffff80004005;
  }
  return -(unsigned __int64)((*(unsigned int *)(iVar1 + 0x5e88) & 0x100) != 0) & 0xffffffff80004005;
}

