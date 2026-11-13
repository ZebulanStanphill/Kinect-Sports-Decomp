extern int fn_82575DF0();
extern int fn_82612D08();
extern unsigned int lbl_82195D48;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825C4190(double param_1,int param_2)

{
  __int64 lVar1;
  int *piVar2;
  unsigned char uVar5;
  int iVar3;
  int iVar4;
  int *piVar6;
  __int64 lVar7;
  double dVar8;
  
  piVar6 = *(int **)(param_2 + 8);
  piVar2 = (int *)(param_2 + 0xc);
  lVar1 = 3;
  do {
    if (((int *)*piVar2 != (int *)0x0) && (iVar3 = *(int *)*piVar2, iVar3 != 0)) {
      if (((double)*(float *)(iVar3 + 0x14) < param_1) || (uVar5 = 1, *(int *)(iVar3 + 0x10) != 0))
      {
        uVar5 = 0;
      }
      iVar3 = 0;
      lVar7 = 2;
      do {
        *(unsigned char *)(*(int *)*piVar2 + iVar3) = uVar5;
        iVar3 = iVar3 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  if (piVar6 != (int *)0x0) {
    dVar8 = (double)lbl_82195D48;
    do {
      iVar3 = *(int *)(*piVar6 + 4);
      if (((*(char *)(iVar3 + 0x1a4) == '\0') && (*(char *)(iVar3 + 0x1a5) == '\0')) &&
         (*(char *)(iVar3 + 0x1a6) != '\0')) {
        iVar3 = **(int **)((*(int *)(*piVar6 + 0x8c) + 3) * 4 + param_2);
        if ((param_1 <= (double)*(float *)(iVar3 + 0x14)) && (*(int *)(iVar3 + 0x10) == 1)) {
          iVar3 = 0;
          lVar1 = 2;
          do {
            *(unsigned char *)(**(int **)((*(int *)(*piVar6 + 0x8c) + 3) * 4 + param_2) + iVar3) = 1;
            iVar3 = iVar3 + 1;
            lVar1 = lVar1 + -1;
          } while (lVar1 != 0);
        }
        iVar3 = *piVar6;
        piVar6 = (int *)piVar6[1];
        fn_82575DF0(*(unsigned int *)(param_2 + 4),*(unsigned int *)(iVar3 + 4));
      }
      else {
        fn_82612D08(param_1);
        iVar4 = 0;
        iVar3 = 0x84;
        lVar1 = 2;
        do {
          if ((double)*(float *)(iVar3 + *piVar6) < dVar8) {
            *(unsigned char *)(**(int **)((*(int *)(*piVar6 + 0x8c) + 3) * 4 + param_2) + iVar4) = 1;
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        piVar6 = (int *)piVar6[1];
      }
    } while (piVar6 != (int *)0x0);
  }
  return;
}

