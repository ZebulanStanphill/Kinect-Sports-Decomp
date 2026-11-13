unsigned __int64 fn_82EEF3F0(int param_1,__int64 *param_2,__int64 *param_3)

{
  __int64 lVar1;
  
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4c) + 0x1c;
  if (param_2 != (__int64 *)0x0) {
    *param_2 = lVar1;
  }
  if (param_3 != (__int64 *)0x0) {
    *param_3 = lVar1;
  }
  *(__int64 *)(param_1 + 0x20) = lVar1;
  return 0;
}

