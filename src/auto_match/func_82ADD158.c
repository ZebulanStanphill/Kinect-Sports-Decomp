unsigned int fn_82ADD158(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_2 + 0x10) & 0xffff;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x70000) != 0) {
    uVar1 = *(unsigned int *)(param_2 + 8) >> 1 & 0xf;
    uVar2 = (uVar2 - _CountLeadingZeros(uVar1 & ~(uVar1 - 1))) + 0x1f;
  }
  return *(unsigned int *)(*(int *)(param_1 + 0x2c4) + (int)(uVar2 << 2));
}

