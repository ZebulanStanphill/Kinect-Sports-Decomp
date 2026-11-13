#define true 1
extern unsigned int *auStack_1a0;
extern int fn_8267C498();
extern int fn_826FA080();
extern unsigned int stack0x0000002f;
extern unsigned int uStack0000002f;


void fn_826FBAE8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  char cVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  __int64 lVar16;
  __int64 lVar17;
  int iVar18;
  unsigned char uStack0000002f;
  unsigned int auStack_1a0 [104];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar12 = auStack_1a0;
  uStack0000002f = param_4;
  do {
    while( true ) {
      uVar8 = (unsigned int)param_2;
      uVar7 = (unsigned int)param_3;
      uVar10 = uVar7 - uVar8;
      if ((int)uVar10 < 10) break;
      iVar1 = *param_1;
      iVar5 = (int)((param_2 & 0x3fffffff) << 2);
      iVar2 = *(int *)(iVar5 + iVar1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      iVar18 = (int)(((__int64)((int)uVar10 >> 1) +
                      (unsigned __int64)((int)uVar10 < 0 && (uVar10 & 1) != 0) + param_2 & 0x3fffffff) << 2
                    );
      iVar2 = *(int *)(iVar18 + iVar1);
      iVar3 = *(int *)(iVar5 + iVar1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      if (*(int *)(iVar5 + iVar1) != 0) {
        fn_8267C498();
      }
      *(unsigned int *)(iVar5 + iVar1) = *(unsigned int *)(iVar18 + iVar1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar18 + iVar1) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar18 + iVar1) = iVar3;
      if (iVar3 != 0) {
        fn_8267C498(iVar3);
      }
      uVar13 = param_2 + 1;
      uVar14 = param_3 - 1;
      lVar17 = (uVar13 & 0x3fffffff) << 2;
      lVar16 = (uVar14 & 0x3fffffff) << 2;
      iVar1 = (int)lVar17;
      iVar2 = (int)lVar16;
      cVar9 = fn_826FA080(&stack0x0000002f,*(unsigned int *)(iVar2 + *param_1),
                                *(unsigned int *)(iVar1 + *param_1));
      if (cVar9 != '\0') {
        iVar3 = *param_1;
        iVar18 = *(int *)(iVar2 + iVar3);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        iVar18 = *(int *)(iVar1 + iVar3);
        iVar4 = *(int *)(iVar2 + iVar3);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        if (*(int *)(iVar2 + iVar3) != 0) {
          fn_8267C498();
        }
        *(unsigned int *)(iVar2 + iVar3) = *(unsigned int *)(iVar1 + iVar3);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        }
        if (*(int *)(iVar1 + iVar3) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar1 + iVar3) = iVar4;
        if (iVar4 != 0) {
          fn_8267C498(iVar4);
        }
      }
      cVar9 = fn_826FA080(&stack0x0000002f,*(unsigned int *)(iVar5 + *param_1),
                                *(unsigned int *)(iVar1 + *param_1));
      if (cVar9 != '\0') {
        iVar3 = *param_1;
        iVar18 = *(int *)(iVar5 + iVar3);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        iVar18 = *(int *)(iVar1 + iVar3);
        iVar4 = *(int *)(iVar5 + iVar3);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        if (*(int *)(iVar5 + iVar3) != 0) {
          fn_8267C498();
        }
        *(unsigned int *)(iVar5 + iVar3) = *(unsigned int *)(iVar1 + iVar3);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        }
        if (*(int *)(iVar1 + iVar3) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar1 + iVar3) = iVar4;
        if (iVar4 != 0) {
          fn_8267C498(iVar4);
        }
      }
      cVar9 = fn_826FA080(&stack0x0000002f,*(unsigned int *)(iVar2 + *param_1),
                                *(unsigned int *)(iVar5 + *param_1));
      if (cVar9 == '\0') goto LAB_826fbdbc;
      iVar1 = *param_1;
      iVar3 = *(int *)(iVar2 + iVar1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      iVar3 = *(int *)(iVar5 + iVar1);
      iVar18 = *(int *)(iVar2 + iVar1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar2 + iVar1) != 0) {
        fn_8267C498();
      }
      *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(iVar5 + iVar1);
      if (iVar18 != 0) {
        *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
      }
      if (*(int *)(iVar5 + iVar1) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar5 + iVar1) = iVar18;
      while( true ) {
        if (iVar18 != 0) {
          fn_8267C498(iVar18);
        }
LAB_826fbdbc:
        do {
          lVar17 = lVar17 + 4;
          uVar13 = uVar13 + 1;
          cVar9 = fn_826FA080(&stack0x0000002f,*(unsigned int *)((int)lVar17 + *param_1),
                                    *(unsigned int *)(iVar5 + *param_1));
        } while (cVar9 != '\0');
        do {
          lVar16 = lVar16 + -4;
          uVar14 = uVar14 - 1;
          cVar9 = fn_826FA080(&stack0x0000002f,*(unsigned int *)(iVar5 + *param_1),
                                    *(unsigned int *)((int)lVar16 + *param_1));
        } while (cVar9 != '\0');
        iVar1 = *param_1;
        uVar15 = (unsigned int)uVar14;
        uVar10 = (unsigned int)uVar13;
        if ((int)uVar15 < (int)uVar10) break;
        lVar17 = (uVar13 & 0x3fffffff) << 2;
        lVar16 = (uVar14 & 0x3fffffff) << 2;
        iVar3 = (int)lVar17;
        iVar2 = *(int *)(iVar3 + iVar1);
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        iVar4 = (int)lVar16;
        iVar2 = *(int *)(iVar4 + iVar1);
        iVar18 = *(int *)(iVar3 + iVar1);
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        if (*(int *)(iVar3 + iVar1) != 0) {
          fn_8267C498();
        }
        *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar4 + iVar1);
        if (iVar18 != 0) {
          *(int *)(iVar18 + 4) = *(int *)(iVar18 + 4) + 1;
        }
        if (*(int *)(iVar4 + iVar1) != 0) {
          fn_8267C498();
        }
        *(int *)(iVar4 + iVar1) = iVar18;
      }
      iVar2 = *(int *)(iVar5 + iVar1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      iVar18 = (int)((uVar14 & 0x3fffffff) << 2);
      iVar2 = *(int *)(iVar18 + iVar1);
      iVar3 = *(int *)(iVar5 + iVar1);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      if (*(int *)(iVar5 + iVar1) != 0) {
        fn_8267C498();
      }
      *(unsigned int *)(iVar5 + iVar1) = *(unsigned int *)(iVar18 + iVar1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      if (*(int *)(iVar18 + iVar1) != 0) {
        fn_8267C498();
      }
      *(int *)(iVar18 + iVar1) = iVar3;
      if (iVar3 != 0) {
        fn_8267C498(iVar3);
      }
      if ((int)(uVar7 - uVar10) < (int)(uVar15 - uVar8)) {
        *puVar12 = uVar8;
        puVar12[1] = uVar15;
        uVar14 = param_3;
        param_2 = uVar13;
      }
      else {
        puVar12[1] = uVar7;
        *puVar12 = uVar10;
      }
      param_3 = uVar14;
      puVar12 = puVar12 + 2;
    }
LAB_826fc020:
    uVar14 = param_2;
    param_2 = uVar14 + 1;
    if ((int)param_2 < (int)uVar7) {
      while( true ) {
        iVar1 = (int)((uVar14 & 0x3fffffff) << 2);
        puVar11 = (unsigned int *)(*param_1 + iVar1);
        cVar9 = fn_826FA080(&stack0x0000002f,puVar11[1],*puVar11);
        if (cVar9 == '\0') break;
        piVar6 = (int *)(*param_1 + iVar1);
        iVar1 = piVar6[1];
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        iVar1 = *piVar6;
        iVar2 = piVar6[1];
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        if (piVar6[1] != 0) {
          fn_8267C498();
        }
        piVar6[1] = *piVar6;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
        if (*piVar6 != 0) {
          fn_8267C498();
        }
        *piVar6 = iVar2;
        if (iVar2 != 0) {
          fn_8267C498(iVar2);
        }
        if ((unsigned int)uVar14 == uVar8) break;
        uVar14 = uVar14 - 1;
      }
      goto LAB_826fc020;
    }
    if (puVar12 <= auStack_1a0) {
      return;
    }
    param_2 = (unsigned __int64)puVar12[-2];
    param_3 = (unsigned __int64)puVar12[-1];
    puVar12 = puVar12 + -2;
  } while( true );
}

