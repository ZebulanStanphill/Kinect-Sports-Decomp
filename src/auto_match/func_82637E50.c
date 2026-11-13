void fn_82637E50(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = (param_2 & 0x1f) << 0x18 | *(unsigned int *)(param_1 + 0x2ef8) & 0xe0ffffff;
  *(unsigned int *)(param_1 + 0x2ef8) = uVar1;
  if ((*(unsigned int *)(param_1 + 0x2efc) & 0x80000000) == 0) {
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x2efc) & 0x40000000) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x2938) = uVar1;
  *(unsigned int *)(param_1 + 0x2958) = uVar1;
  *(unsigned int *)(param_1 + 0x295c) = uVar1;
  *(unsigned int *)(param_1 + 0x2960) = uVar1;
  uVar2 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x400;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x404;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x406;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x407;
  return;
}

