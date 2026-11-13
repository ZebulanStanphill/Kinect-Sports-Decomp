extern int fn_82D00FB0();


__int64 fn_82D01D88(int *param_1)

{
  __int64 lVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  __int64 lVar7;
  __int64 lVar8;
  int *piVar9;
  int *piVar13;
  unsigned __int64 uVar10;
  unsigned int uVar14;
  unsigned __int64 uVar11;
  __int64 lVar12;
  int *piVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  
  piVar15 = (int *)param_1[3];
  piVar9 = param_1 + 3;
  if (piVar15 == (int *)0x0) {
    lVar1 = 0;
  }
  else {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      piVar15 = (int *)*piVar15;
      uVar17 = uVar18 + 1;
    } while (piVar15 != (int *)0x0);
    lVar1 = (uVar17 & 0x3fffffff) << 2;
    puVar3 = (unsigned int *)(**(int (***)())(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],lVar1);
    if (puVar3 != (unsigned int *)0x0) {
      piVar15 = (int *)*piVar9;
      if (piVar15 != (int *)0x0) {
        piVar13 = puVar3 + -1;
        do {
          piVar13 = piVar13 + 1;
          *piVar13 = (int)piVar15;
          piVar15 = (int *)*piVar15;
        } while (piVar15 != (int *)0x0);
      }
      if (1 < (int)uVar17) {
        fn_82D00FB0(puVar3,0,uVar18,0xffffffff82d01418);
      }
      puVar5 = (unsigned int *)*param_1;
      trapWord(6,(unsigned __int64)(unsigned int)param_1[1],0);
      uVar18 = ((unsigned __int64)(unsigned int)param_1[9] - (unsigned __int64)(unsigned int)param_1[8] & 0xffffffff) /
               (unsigned __int64)(unsigned int)param_1[1];
      for (; puVar5 != (unsigned int *)0x0; puVar5 = (unsigned int *)*puVar5) {
        uVar18 = uVar18 + 1;
      }
      lVar16 = (uVar18 & 0x3fffffff) * 4;
      uVar2 = (**(int (***)())(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],lVar16);
      if ((uVar2 & 0xffffffff) != 0) {
        piVar15 = (int *)*param_1;
        uVar10 = 0;
        if (piVar15 != (int *)0x0) {
          lVar7 = uVar2 - 4;
          do {
            lVar7 = lVar7 + 4;
            *(int *)lVar7 = (int)piVar15;
            uVar10 = uVar10 + 1;
            piVar15 = (int *)*piVar15;
          } while (piVar15 != (int *)0x0);
        }
        uVar14 = param_1[8];
        if (uVar14 < (unsigned int)param_1[9]) {
          lVar7 = (uVar10 & 0x3fffffff) * 4 + uVar2 + -4;
          do {
            lVar7 = lVar7 + 4;
            *(unsigned int *)lVar7 = uVar14;
            uVar14 = uVar14 + param_1[1];
          } while (uVar14 < (unsigned int)param_1[9]);
        }
        param_1[9] = 0;
        param_1[8] = 0;
        if (1 < (int)uVar18) {
          fn_82D00FB0(uVar2,0,uVar18 - 1,0xffffffff82d01418);
        }
        uVar4 = lVar16 + uVar2;
        lVar7 = 0;
        uVar10 = 0;
        uVar18 = uVar2;
        puVar5 = puVar3;
        if ((uVar17 & 0xffffffff) != 0) {
          do {
            if ((uVar4 & 0xffffffff) <= (uVar18 & 0xffffffff)) break;
            piVar15 = (int *)*puVar5;
            uVar14 = piVar15[2];
            uVar6 = param_1[1] * piVar15[3] + uVar14;
            do {
              if ((uVar14 != *(unsigned int *)uVar18) || (uVar6 <= uVar14)) break;
              uVar18 = uVar18 + 4;
              uVar14 = param_1[1] + uVar14;
            } while ((uVar18 & 0xffffffff) < (uVar4 & 0xffffffff));
            if (uVar14 == uVar6) {
              lVar7 = lVar7 + 1;
              uVar11 = uVar18 + ((unsigned __int64)(unsigned int)piVar15[3] & 0x3fffffff) * -4;
              *piVar15 = param_1[4];
              param_1[4] = (int)piVar15;
              *puVar5 = 0;
              if ((uVar11 & 0xffffffff) < (uVar18 & 0xffffffff)) {
                lVar8 = uVar11 - 4;
                for (lVar12 = (((uVar18 - uVar11) - 1 & 0xffffffff) >> 2) + 1; lVar12 != 0;
                    lVar12 = lVar12 + -1) {
                  lVar8 = lVar8 + 4;
                  *(unsigned int *)lVar8 = 0;
                }
              }
            }
            else if ((uVar18 & 0xffffffff) < (uVar4 & 0xffffffff)) {
              do {
                if (uVar6 <= *(unsigned int *)uVar18) break;
                uVar18 = uVar18 + 4;
              } while ((uVar18 & 0xffffffff) < (uVar4 & 0xffffffff));
            }
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + 1;
          } while ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff));
        }
        puVar5 = puVar3;
        uVar18 = uVar17 & 0xffffffff;
        while (uVar18 != 0) {
          piVar15 = (int *)*puVar5;
          if (piVar15 != (int *)0x0) {
            *piVar9 = (int)piVar15;
            piVar9 = piVar15;
          }
          puVar5 = puVar5 + 1;
          uVar17 = uVar17 - 1;
          uVar18 = uVar17;
        }
        *piVar9 = 0;
        piVar15 = param_1;
        if ((uVar2 & 0xffffffff) < (uVar4 & 0xffffffff)) {
          lVar8 = (((uVar4 - uVar2) - 1 & 0xffffffff) >> 2) + 1;
          uVar17 = uVar2;
          do {
            piVar9 = (int *)*(unsigned int *)uVar17;
            if (piVar9 != (int *)0x0) {
              *piVar15 = (int)piVar9;
              piVar15 = piVar9;
            }
            uVar17 = uVar17 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        *piVar15 = 0;
        (**(int (***)())(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],uVar2,lVar16);
        (**(int (***)())(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],puVar3,lVar1);
        param_1[2] = 0;
        return lVar7;
      }
      (**(int (***)())(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],puVar3,lVar1);
    }
    lVar1 = -1;
  }
  return lVar1;
}

