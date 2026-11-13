unsigned char   fn_82ABDA10(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if ((*(unsigned int *)(param_1 + 8) & 0x40) == 0) {
    return 0;
  }
  uVar1 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if (((uVar1 < 0x15) || (0x18 < uVar1)) && ((uVar1 < 0x3b || (0x42 < uVar1)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

