extern unsigned int fn_82A458C8();


unsigned int fn_82A47900(int param_1)
{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;

  uVar2 = 0;
  for (uVar3 = 0; uVar3 < *(unsigned int *)(param_1 + 0x1c0); uVar3++) {
    uVar1 = fn_82A458C8(*(unsigned int *)(param_1 + 0x1d8), uVar3);
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}
