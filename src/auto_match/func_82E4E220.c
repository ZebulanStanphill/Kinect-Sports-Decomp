int fn_82E4E220(int *param_1)
{
  unsigned short sVar1;
  unsigned iVar2;
  unsigned iVar3;

  iVar2 = *(unsigned *)(*param_1 + 0x10);
  if (!(((((((iVar2 == 0x56555949) || (iVar2 == 0x30323449)) || (iVar2 == 0x32315659)) ||
        ((iVar2 == 0x3131564e || (iVar2 == 0x3231564e)))) || (iVar2 == 0x56343130)) ||
      (((((iVar2 == 0x32595559 || (iVar2 == 0x59565955)) ||
         ((iVar2 == 0x55595659 ||
          (((iVar2 == 0x41595556 || (iVar2 == 0x50313459)) || (iVar2 == 0x54313459)))))) ||
        ((iVar2 == 0x54323459 || (iVar2 == 0x39555659)))) || (iVar2 == 0)))) || (iVar2 == 3))) {
    return 3;
  }
  iVar3 = *(unsigned *)(param_1[1] + 0x10);
  if (((iVar3 != 0x56555949) && (iVar3 != 0x30323449)) && (iVar3 != 0x32315659)) {
    return 4;
  }
  if (((((iVar2 != 0) && (iVar2 != 3)) || (sVar1 = *(unsigned short *)(*param_1 + 0xe), sVar1 == 8)) ||
      ((sVar1 == 0x10 || (sVar1 == 0x18)))) || (sVar1 == 0x20)) {
    if (iVar2 == iVar3) {
      return 7;
    }
    if (((iVar2 == 0x39555659) && (iVar3 != 0x30323449)) &&
       ((iVar3 != 0x32315659 && (iVar3 != 0x56555949)))) {
      return 5;
    }
    return 0;
  }
  return 3;
}
