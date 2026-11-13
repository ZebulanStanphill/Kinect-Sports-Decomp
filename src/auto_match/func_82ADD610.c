extern int fn_82ADD198();


unsigned int fn_82ADD610(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *(unsigned int *)(param_2 + 8) >> 1 & 0xf;
  iVar2 = fn_82ADD198(param_1,(*(unsigned short *)(param_2 + 0x12) -
                                _CountLeadingZeros(uVar1 & ~(uVar1 - 1))) + 0x1f);
  return *(unsigned int *)(*(int *)(param_1 + 0x2b0) + iVar2 * 4);
}

