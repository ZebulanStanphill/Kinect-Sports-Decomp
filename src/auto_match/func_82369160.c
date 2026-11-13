unsigned char fn_82369160(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_2 * 0x84 + *(int *)(param_1 + 0x4bc) + 0xc);
  uVar2 = *(unsigned int *)(((unsigned int)LZCOUNT(param_2) >> 5) * 0x84 + *(int *)(param_1 + 0x4bc) + 0xc);
  if (uVar2 < uVar1) {
    return 2;
  }
  return -(uVar2 <= uVar1) & 1;
}

