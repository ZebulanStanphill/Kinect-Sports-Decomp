int fn_82B45430(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = (((((param_2 & 0xfffffff) << 4 | param_2 & 0xffffffff) & 0xfffffff) << 4 |
           param_2 & 0xffffffff) & 0xfffffff) << 4;
  uVar2 = uVar1 | param_2;
  if ((*(unsigned int *)(param_1 + 0xc) & uVar2 & 0xffff) == (uVar1 | param_2 & 0xffffffff)) {
    return 0;
  }
  *(unsigned short *)(param_1 + 0xe) = (unsigned short)*(unsigned int *)(param_1 + 0xc) | (unsigned short)uVar2;
  return 1;
}

