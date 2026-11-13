unsigned __int64 fn_82B169D0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = 3 << (param_2 << 2);
  uVar2 = 2 << (param_2 << 2);
  if ((*(unsigned int *)(param_1 + 0xc) & uVar1 & 0xffff) == uVar2) {
    return 0;
  }
  *(unsigned short *)(param_1 + 0xe) = (unsigned short)*(unsigned int *)(param_1 + 0xc) & ~(unsigned short)uVar1 | (unsigned short)uVar2;
  return 1;
}

