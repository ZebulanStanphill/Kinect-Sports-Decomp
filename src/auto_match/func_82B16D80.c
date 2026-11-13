unsigned __int64 fn_82B16D80(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  uVar2 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  if ((int)uVar1 > (int)uVar2) {
    if (uVar1 == 0x7d) {
      return 1;
    }
    if (((uVar2 != 0x7d) && (uVar1 != 0x6e)) && (uVar2 != 0x6e)) {
      return 1;
    }
  }
  return 0;
}

