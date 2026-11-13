extern int fn_82399C38();


unsigned __int64 fn_823A31C0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) && (iVar3 = fn_82399C38(), iVar3 != 0))
     && (piVar1 = (int *)**(int **)(*(int *)(param_1 + 8) + 8), piVar2 = (int *)*piVar1,
        piVar1 = (int *)piVar1[1],
        (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) +
        (int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) !=
        *(int *)(*(int *)(param_1 + 8) + 0x214))) {
    return 1;
  }
  return 0;
}

