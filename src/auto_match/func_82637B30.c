void fn_82637B30(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2efc);
  *(unsigned int *)(param_1 + 0x2efc) = param_2 << 0x1f | uVar1 & 0x7fffffff;
  uVar3 = *(unsigned int *)(param_1 + 0x2ef8);
  if ((uVar1 & 0x40000000) == 0) {
    uVar3 = (uVar3 & 0x1010 | (uVar3 & 0xefef) << 4) << 0xc | uVar3 & 0xffff;
  }
  if (param_2 == 0) {
    uVar3 = 0x10001;
  }
  *(unsigned int *)(param_1 + 0x295c) = uVar3;
  *(unsigned int *)(param_1 + 0x2938) = uVar3;
  *(unsigned int *)(param_1 + 0x2958) = uVar3;
  *(unsigned int *)(param_1 + 0x2960) = uVar3;
  uVar2 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x400;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x404;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x406;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x407;
  return;
}

