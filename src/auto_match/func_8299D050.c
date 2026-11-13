extern int fn_82996970();


unsigned __int64 fn_8299D050(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int *piVar13;
  int *piVar14;
  unsigned int uVar15;
  __int64 lVar16;
  
  iVar1 = (int)param_1;
  uVar11 = 0x12;
  iVar6 = 0;
  lVar16 = 6;
  do {
    puVar7 = *(unsigned int **)(iVar6 + *(int *)(iVar1 + 0x234));
    if ((puVar7 != (unsigned int *)0x0) && ((*puVar7 & 0xfff00000) != 0x11000000)) {
      uVar11 = uVar11 - 3;
    }
    iVar6 = iVar6 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar8 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x224);
  uVar12 = 0;
  if (uVar8 != 0) {
    piVar13 = *(int **)(iVar1 + 0x230);
    do {
      iVar1 = *piVar13;
      if ((iVar1 != 0) && (uVar9 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc), uVar9 != 0)) {
        uVar2 = *(unsigned int *)((int)param_1 + 0xc);
        iVar6 = 0;
        do {
          uVar15 = 0;
          if (uVar2 != 0) {
            piVar14 = *(int **)((int)param_1 + 0x18);
            do {
              puVar7 = (unsigned int *)*piVar14;
              if ((puVar7[10] != 1) && (iVar4 = fn_82996970(*puVar7 & 0xfff00000), iVar4 == 0)) {
                uVar3 = puVar7[1];
                uVar5 = 0;
                if (uVar3 != 0) {
                  iVar10 = 0;
                  iVar4 = *(int *)(*(int *)(iVar1 + 0x10) + iVar6);
                  do {
                    if ((*(int *)(*(int *)(*(int *)(iVar10 + puVar7[2]) * 4 +
                                          *(int *)((int)param_1 + 0x14)) + 0x38) == iVar4) ||
                       (*(int *)(iVar10 + puVar7[2]) == iVar4)) break;
                    uVar5 = uVar5 + 1;
                    iVar10 = iVar10 + 4;
                  } while (uVar5 < uVar3);
                }
                if (uVar5 != uVar3) break;
              }
              uVar15 = uVar15 + 1;
              piVar14 = piVar14 + 1;
            } while (uVar15 < uVar2);
          }
          if (uVar15 != uVar2) {
            uVar12 = uVar12 + 1;
          }
          uVar9 = uVar9 - 1;
          iVar6 = iVar6 + 4;
        } while (uVar9 != 0);
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 1;
    } while (uVar8 != 0);
    if (uVar11 < uVar12) {
      return 1;
    }
  }
  return 0;
}

