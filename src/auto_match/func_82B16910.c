unsigned __int64 fn_82B16910(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = param_3 << (param_2 << 2);
  uVar2 = param_4 << (param_2 << 2);
  if ((*(unsigned int *)(param_1 + 0xc) & uVar1 & 0xffff) == uVar2) {
    return 0;
  }
  *(unsigned short *)(param_1 + 0xe) = (unsigned short)*(unsigned int *)(param_1 + 0xc) & ~(unsigned short)uVar1 | (unsigned short)uVar2;
  return 1;
}

