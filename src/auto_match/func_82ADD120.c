unsigned int fn_82ADD120(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 0x10) & 0xffff;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x70000) != 0) {
    uVar1 = *(unsigned int *)(param_1 + 8) >> 1 & 0xf;
    uVar2 = (uVar2 - _CountLeadingZeros(uVar1 & ~(uVar1 - 1))) + 0x1f;
  }
  return uVar2;
}

