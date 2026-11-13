unsigned __int64 fn_82F47F50(int param_1,__int64 *param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 == (__int64 *)0x0) {
    return 0xffffffff80070057;
  }
  uVar1 = 0;
  if ((*(unsigned int *)(param_1 + 0x28) & 1) != 0) {
    uVar1 = (int)*(int *)(param_1 + 0x24) * (int)*(int *)(param_1 + 0x1c) & 0xffffffff;
  }
  *param_2 = *(unsigned int *)(param_1 + 0x5c) + uVar1;
  return 0;
}

