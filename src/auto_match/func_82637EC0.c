void fn_82637EC0(int param_1,unsigned int param_2)

{
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  
  uVar2 = (param_2 & 1) << 0x1e | *(unsigned int *)(param_1 + 0x2efc) & 0xbfffffff;
  *(unsigned int *)(param_1 + 0x2efc) = uVar2;
  uVar3 = *(unsigned int *)(param_1 + 0x2ef8);
  if (param_2 == 0) {
    uVar3 = (uVar3 & 0x1010 | (uVar3 & 0xefef) << 4) << 0xc | uVar3 & 0xffff;
  }
  if (-1 < (int)uVar2) {
    uVar3 = 0x10001;
  }
  *(unsigned int *)(param_1 + 0x2938) = uVar3;
  *(unsigned int *)(param_1 + 0x2958) = uVar3;
  *(unsigned int *)(param_1 + 0x295c) = uVar3;
  *(unsigned int *)(param_1 + 0x2960) = uVar3;
  uVar1 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x400;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x404;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x406;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar1 | 0x407;
  return;
}

