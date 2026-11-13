unsigned __int64 fn_82B16998(int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  
  uVar1 = param_3 << (param_2 * 4);
  if ((*(unsigned int *)(param_1 + 0xc) & uVar1 & 0xffff) == uVar1) {
    return 0;
  }
  *(unsigned short *)(param_1 + 0xe) = (unsigned short)*(unsigned int *)(param_1 + 0xc) | (unsigned short)uVar1;
  return 1;
}

