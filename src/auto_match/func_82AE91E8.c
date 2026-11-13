unsigned char fn_82AE91E8(int param_1)

{
  unsigned char uVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar2 == 0) || (uVar1 = 1, 0x52 < uVar2)) {
    uVar1 = 0;
  }
  return uVar1;
}

