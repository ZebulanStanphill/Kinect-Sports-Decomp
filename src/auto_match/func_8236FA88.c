extern int fn_822AA770();
extern int fn_8288B760();


unsigned __int64 fn_8236FA88(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int iVar5;
  unsigned int uVar6;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (iVar1 != 8) {
    uVar4 = (iVar1 == 0) * 4;
    iVar5 = fn_822AA770(*(unsigned int *)(**(int **)(param_1 + 8) + uVar4));
    if (iVar5 != 0) {
      if (*(unsigned int *)(iVar5 + 0x168) != 0) {
        uVar6 = fn_8288B760(*(unsigned int *)(iVar5 + 0x168));
        uVar6 = uVar6 & 0xff;
      } else {
        uVar6 = *(unsigned int *)(iVar5 + 0x16c);
      }
      if ((int)uVar6 != 0) {
        piVar2 = *(int **)(**(int **)(param_1 + 8) + uVar4);
        piVar3 = *(int **)(iVar1 * 4 + **(int **)(param_1 + 8));
        uVar4 = (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20);
        uVar6 = (unsigned int)(int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
        if (((uVar4 == uVar6 - 1) && (2 < uVar4)) && (2 < uVar6)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

