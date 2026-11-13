void fn_82637BC0(int param_1,unsigned int param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  
  *(unsigned int *)(param_1 + 0x2ef8) = (param_2 & 7) << 5 | *(unsigned int *)(param_1 + 0x2ef8) & 0xffffff1f;
  if ((*(unsigned int *)(param_1 + 0x2efc) & 0x80000000) == 0) {
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x2ef8);
  if ((*(unsigned int *)(param_1 + 0x2efc) & 0x40000000) == 0) {
    uVar2 = (uVar2 & 0x1010 | (uVar2 & 0xefef) << 4) << 0xc | uVar2 & 0xffff;
  }
  *(unsigned int *)(param_1 + 0x2938) = uVar2;
  *(unsigned int *)(param_1 + 0x2958) = uVar2;
  *(unsigned int *)(param_1 + 0x295c) = uVar2;
  *(unsigned int *)(param_1 + 0x2960) = uVar2;
  uVar1 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x400;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x404;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x406;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x407;
  return;
}

