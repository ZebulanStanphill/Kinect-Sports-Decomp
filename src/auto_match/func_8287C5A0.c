extern unsigned int lbl_82022E78;


unsigned int fn_8287C5A0(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  puVar1 = (unsigned int *)&lbl_82022E78;
  uVar3 = 0x30;
  do {
    uVar2 = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    if (puVar1[uVar2] < param_1) {
      puVar1 = puVar1 + uVar2 + 1;
      uVar2 = (uVar3 - uVar2) - 1;
    }
    uVar3 = uVar2;
  } while (0 < (int)uVar2);
  return *puVar1;
}

