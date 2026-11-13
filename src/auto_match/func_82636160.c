unsigned int fn_82636160(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  iVar1 = *param_1;
  if (param_1[iVar1 * 0x9b4 + 0x20] != 0) {
    if (param_1[iVar1 * 0x9b4 + 0x18] < 0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3 = (unsigned int *)(param_1[iVar1 * 0x9b4 + 0x20] * 8 + param_1[iVar1 * 0x9b4 + 0x1f] + -8);
    }
    uVar2 = puVar3[1] >> 0xc & 0xf;
    if ((uVar2 != 0) && ((uVar2 < 7 || ((0xc < uVar2 && (uVar2 < 0xf)))))) {
      return *puVar3 >> 0xc & 7;
    }
  }
  return 0;
}

