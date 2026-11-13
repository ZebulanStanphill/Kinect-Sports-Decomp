unsigned int fn_82AD2020(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  
  if ((*(unsigned int *)(param_1 + 0x28) & 0x80000) == 0) {
    if ((*(unsigned int *)(param_2 + 0x24) & 1) == 0) {
      uVar1 = *(unsigned int *)(param_2 + 0x20);
LAB_82ad2058:
      uVar3 = (uVar1 & 0xfffffffe) - 0x28;
      if (uVar3 == 0) {
        return 0;
      }
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) - 0x20) >> 7 & 0x7f;
      if ((((uVar1 == 0x56) || (uVar1 == 0x57)) || (uVar1 == 0x59)) ||
         (((uVar1 == 0x5a || (uVar1 == 0x54)) || (bVar2 = 0, uVar1 == 0x55)))) {
        bVar2 = 1;
      }
      return -(unsigned int)bVar2 & uVar3;
    }
  }
  else if ((*(unsigned int *)(param_2 + 0x1c) & 1) == 0) {
    uVar1 = *(unsigned int *)(param_2 + 0x18);
    goto LAB_82ad2058;
  }
  return 0;
}

