extern int fn_82ADD198();


unsigned int fn_82ADD810(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int uVar3;
  
  uVar3 = *(unsigned int *)(param_2 + 0x10) & 0xffff;
  if ((*(unsigned int *)(param_2 + 0x10) & 0x70000) != 0) {
    uVar1 = *(unsigned int *)(param_2 + 8) >> 1 & 0xf;
    uVar3 = (uVar3 - _CountLeadingZeros(uVar1 & ~(uVar1 - 1))) + 0x1f;
  }
  iVar2 = fn_82ADD198(param_1,uVar3);
  return *(unsigned int *)(*(int *)(param_1 + 0x2b0) + iVar2 * 4);
}

