extern int fn_822ABA88();


void fn_82375D78(unsigned __int64 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  int *piVar6;
  
  piVar6 = *(int **)((int)param_1 + 8);
  lVar4 = 0;
  if ((piVar6[1] - *piVar6 & 0xfffffffcU) != 0) {
    lVar5 = 0;
    do {
      piVar1 = *(int **)((int)lVar5 + *piVar6);
      iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
      if (*(int *)(iVar2 + 8) == 2) {
        piVar6 = *(int **)(*(int *)(iVar2 + 0x10) * 4 + *piVar6);
        iVar2 = fn_822ABA88(*(unsigned int *)(piVar6[4] * 4 + *piVar6),0);
        iVar3 = fn_822ABA88(*(unsigned int *)(piVar6[4] * 4 + *piVar6),1);
        if (*(int *)(iVar2 + 0x2a4) == *(int *)(iVar3 + 0x2a4)) {
          *(unsigned int *)(iVar3 + 0x2a4) = (unsigned int)LZCOUNT(*(int *)(iVar2 + 0x2a4)) >> 5;
        }
      }
      piVar6 = *(int **)((int)param_1 + 8);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)lVar4 < piVar6[1] - *piVar6 >> 2);
  }
  return;
}

