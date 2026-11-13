void fn_82A774D8(int param_1)

{
  unsigned int *piVar1;
  unsigned int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0xb8);
  if (*(int *)(param_1 + 0xbc) != piVar1[7] + *piVar1 + piVar1[6]) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xbc) = *piVar1 + piVar1[6];
  if ((iVar2 != 0) && (iVar2 != 0xff)) {
    *(int *)(param_1 + 0xc0) = iVar2 + -1;
  }
  piVar3 = *(int **)(param_1 + 0x108);
  if (piVar3 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82a77540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*piVar3 + 0x24))(piVar3,piVar1[1],piVar1[2]);
  return;
}

