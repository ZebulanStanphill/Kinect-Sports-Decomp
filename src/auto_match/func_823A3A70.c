extern int fn_822ABA88();
extern int fn_8288B760();


unsigned __int64 fn_823A3A70(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  iVar4 = 0;
  piVar3 = *(int **)(*(int *)(param_1 + 8) + 8);
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *piVar3;
      uVar6 = 0;
      if (*(int *)(*(int *)((*(int **)(iVar5 + iVar1))[4] * 4 + **(int **)(iVar5 + iVar1)) + 8) != 0
         ) {
        do {
          iVar1 = fn_822ABA88(*(unsigned int *)
                                ((*(int **)(iVar5 + iVar1))[4] * 4 + **(int **)(iVar5 + iVar1)),
                               uVar6);
          if ((*(int *)(iVar1 + 0x278) == 0) && (*(int *)(iVar1 + 0x24) != 0)) {
            if (*(int *)(iVar1 + 0x168) == 0) {
              uVar2 = *(unsigned int *)(iVar1 + 0x16c);
            }
            else {
              uVar2 = fn_8288B760();
              uVar2 = uVar2 & 0xff;
            }
            if (uVar2 != 0) {
              return 1;
            }
          }
          uVar6 = uVar6 + 1;
          piVar3 = *(int **)(*(int *)(param_1 + 8) + 8);
          iVar1 = *piVar3;
        } while ((uVar6 & 0xffffffff) <
                 (unsigned __int64)
                 *(unsigned int *)(*(int *)((*(int **)(iVar5 + iVar1))[4] * 4 + **(int **)(iVar5 + iVar1)) +
                          8));
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < piVar3[1] - *piVar3 >> 2);
  }
  return 0;
}

