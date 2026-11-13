unsigned int fn_82FAE0E8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  uVar1 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x7c) >> 3;
  if (uVar1 != 0) {
    do {
      if (*(int *)(uVar2 * 8 + *(int *)(param_1 + 0x7c) + 4) == param_2) {
        return uVar2;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < uVar1);
  }
  return 0xffffffff;
}

