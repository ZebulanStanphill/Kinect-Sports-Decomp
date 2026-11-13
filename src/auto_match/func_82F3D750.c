unsigned __int64 fn_82F3D750(int param_1,unsigned __int64 *param_2,unsigned __int64 *param_3)

{
  unsigned __int64 uVar1;
  
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 0x18 & 0xffffffff;
  if (param_2 != (unsigned __int64 *)0x0) {
    *param_2 = uVar1;
  }
  if (param_3 != (unsigned __int64 *)0x0) {
    *param_3 = uVar1;
  }
  *(unsigned __int64 *)(param_1 + 0x20) = uVar1;
  return 0;
}

