unsigned char fn_82A42920(unsigned __int64 param_1,int param_2)

{
  unsigned int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 == 0x566d) {
    return 3;
  }
  if (iVar1 == 0xab63) {
    return 6;
  }
  if (iVar1 == 48000) {
    return 7;
  }
  if (iVar1 == 0x2bf2) {
    return 1;
  }
  if (iVar1 == 0x7dfa) {
    return 5;
  }
  if (iVar1 == 24000) {
    return 4;
  }
  if (iVar1 == 0x3efd) {
    return 2;
  }
  return param_2 != 0x203a ? 8 : 0;
}

