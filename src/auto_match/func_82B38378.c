typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABDD90();
extern int fn_82B330F8();
extern int fn_82B44B88();
extern int fn_82B841E8();
extern int fn_82B8F1B0();
extern int fn_82B8F328();


void fn_82B38378(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned int *puVar5;
  char cVar8;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  int *piVar12;
  int *piVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  unsigned int uVar20;
  int iVar21;
  unsigned int *puVar22;
  
  if ((param_1[1] & 1) == 0) {
    puVar9 = (unsigned int *)0x0;
    puVar14 = (unsigned int *)((*param_1 & 0xfffffffe) - 4);
    while (puVar5 = puVar14, puVar5 != (unsigned int *)0x0) {
      if ((*puVar5 & 1) == 0) {
        puVar14 = (unsigned int *)((*puVar5 & 0xfffffffe) - 4);
      }
      else {
        puVar14 = (unsigned int *)0x0;
      }
      if ((puVar5[0x11] & 0x40000000) != 0) {
        uVar10 = -(unsigned int)((puVar5[1] & 1) == 0) & puVar5[1];
        if ((puVar5[3] == 0) || (bVar4 = true, *(int *)(puVar5[3] + 8) == 0)) {
          bVar4 = false;
        }
        uVar16 = uVar10;
        uVar15 = 0;
        if ((bVar4) &&
           (uVar16 = *(unsigned int *)((uVar10 & 0xfffffffe) + 4),
           uVar16 = -(unsigned int)((uVar16 & 1) == 0) & uVar16, uVar15 = uVar10, uVar10 != 0)) {
          if ((*(unsigned int *)(uVar10 + 0x1c) & 1) == 0) {
            uVar20 = *(unsigned int *)(uVar10 + 0x1c);
            iVar18 = uVar10 + 0x18;
          }
          else {
            uVar20 = *(unsigned int *)(uVar10 + 0x24);
            iVar18 = uVar10 + 0x20;
          }
          uVar20 = -(unsigned int)((uVar20 & 1) == 0) & uVar20;
          while (uVar20 != 0) {
            do {
              cVar8 = fn_82ABDA10(uVar20);
              if (cVar8 != '\0') {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 0x28);
            } while (((uVar20 & 1) == 0) && (uVar20 != 0));
            if ((iVar18 == uVar10 + 0x20) ||
               (uVar20 = *(unsigned int *)(uVar10 + 0x24), iVar18 = uVar10 + 0x20, (uVar20 & 1) != 0))
            break;
          }
        }
        else {
          if ((puVar5[7] & 1) == 0) {
            uVar10 = puVar5[7];
            puVar22 = puVar5 + 6;
          }
          else {
            uVar10 = puVar5[9];
            puVar22 = puVar5 + 8;
          }
          uVar10 = -(unsigned int)((uVar10 & 1) == 0) & uVar10;
          while (uVar10 != 0) {
            do {
              cVar8 = fn_82ABDA10(uVar10);
              if (cVar8 != '\0') {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              uVar10 = *(unsigned int *)((uVar10 & 0xfffffffe) + 0x28);
            } while (((uVar10 & 1) == 0) && (uVar10 != 0));
            if ((puVar22 == puVar5 + 8) ||
               (uVar10 = puVar5[9], puVar22 = puVar5 + 8, (uVar10 & 1) != 0)) break;
          }
        }
        if ((*(unsigned int *)(uVar16 + 0x1c) & 1) == 0) {
          uVar10 = *(unsigned int *)(uVar16 + 0x1c);
          iVar18 = uVar16 + 0x18;
        }
        else {
          uVar10 = *(unsigned int *)(uVar16 + 0x24);
          iVar18 = uVar16 + 0x20;
        }
        uVar10 = -(unsigned int)((uVar10 & 1) == 0) & uVar10;
        while (uVar10 != 0) {
          do {
            cVar8 = fn_82ABDA10(uVar10);
            if (cVar8 != '\0') {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            uVar10 = *(unsigned int *)((uVar10 & 0xfffffffe) + 0x28);
          } while (((uVar10 & 1) == 0) && (uVar10 != 0));
          if ((iVar18 == uVar16 + 0x20) ||
             (uVar10 = *(unsigned int *)(uVar16 + 0x24), iVar18 = uVar16 + 0x20, (uVar10 & 1) != 0)) break;
        }
        iVar18 = 0;
        if (*(int **)(uVar16 + 0xc) != (int *)0x0) {
          iVar18 = **(int **)(uVar16 + 0xc);
        }
        iVar19 = 0;
        if (puVar5[2] != 0) {
          iVar19 = *(int *)(puVar5[2] + 4);
        }
        if ((*(unsigned int *)(iVar19 + 0x24) & 1) == 0) {
          iVar21 = (*(unsigned int *)(iVar19 + 0x20) & 0xfffffffe) - 0x28;
        }
        else {
          iVar21 = 0;
        }
        uVar10 = *(unsigned int *)(iVar21 + 8);
        iVar6 = fn_82ABDD90(param_1,uVar10 >> 7 & 0x7f,uVar10 >> 0x13 & 7,uVar10 >> 0xe & 7);
        piVar17 = (int *)(iVar6 + iVar21 + -0x10);
        piVar13 = *(int **)(iVar19 + 0xc);
        for (piVar12 = piVar13; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
          if (iVar18 == *piVar12) {
            bVar4 = true;
            goto LAB_82b38660;
          }
        }
        bVar4 = false;
LAB_82b38660:
        if (!bVar4) {
          for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[2]) {
            puVar22 = (unsigned int *)*piVar13;
            if (puVar22 != puVar5) goto LAB_82b3868c;
          }
          puVar22 = (unsigned int *)0x0;
LAB_82b3868c:
          fn_82B8F1B0(iVar19,puVar22,param_1);
          fn_82B8F328(iVar19,iVar18,param_1);
          if ((unsigned int *)*piVar17 == puVar22) {
            *piVar17 = iVar18;
          }
        }
        fn_82B8F1B0(uVar16,iVar18,param_1);
        if (puVar9 == (unsigned int *)0x0) {
          *(unsigned int *)(puVar5[1] & 0xfffffffe) = *puVar5;
          *(unsigned int *)(*puVar5 & 0xfffffffe) = puVar5[1];
          if (uVar15 != 0) {
            puVar9 = (unsigned int *)(uVar15 & 0xfffffffe);
            *(unsigned int *)(puVar9[1] & 0xfffffffe) = *puVar9;
            *(unsigned int *)(*puVar9 & 0xfffffffe) = puVar9[1];
          }
          puVar9 = (unsigned int *)(uVar16 & 0xfffffffe);
          uVar10 = (unsigned int)param_1 | 1;
          *(unsigned int *)(puVar9[1] & 0xfffffffe) = *puVar9;
          *(unsigned int *)(*puVar9 & 0xfffffffe) = puVar9[1];
          *puVar5 = *param_1;
          *(unsigned int **)(*param_1 & 0xfffffffe) = puVar5;
          puVar5[1] = uVar10;
          *param_1 = (unsigned int)(puVar5 + 1);
          if (uVar15 != 0) {
            puVar3 = (unsigned int *)(uVar15 & 0xfffffffe);
            *puVar3 = puVar5 + 1;
            *(unsigned int **)(*param_1 & 0xfffffffe) = puVar3;
            puVar3[1] = uVar10;
            *param_1 = (unsigned int)(puVar3 + 1);
          }
          *puVar9 = *param_1;
          *(unsigned int **)(*param_1 & 0xfffffffe) = puVar9;
          puVar9[1] = uVar10;
          *param_1 = (unsigned int)(puVar9 + 1);
          puVar7 = (unsigned int *)fn_82B841E8(param_1,uVar16,uVar16 + 0x20,0x53,0,0);
          for (puVar22 = *(unsigned int **)(uVar16 + 0x24);
              (puVar9 = puVar5, ((unsigned int)puVar22 & 1) == 0 && (puVar22 != (unsigned int *)0x0));
              puVar22 = *(unsigned int **)(((unsigned int)puVar22 & 0xfffffffe) + 0x28)) {
            puVar9 = puVar22;
            if ((puVar22[2] & 0x3f80) == 0x3a80) {
              while (puVar1 = (unsigned int *)*puVar9, puVar1 != (unsigned int *)0x0) {
                if ((((*puVar1 & 0xe000000) != 0) && ((*puVar1 >> 0x1e & 1) != 0)) &&
                   ((*(unsigned int *)(puVar1[3] + 8) >> 5 & 1) != 0)) {
                  puVar11 = (unsigned int *)puVar1[4];
                  for (puVar2 = (unsigned int *)*puVar11; puVar2 != puVar1; puVar2 = (unsigned int *)puVar2[1]) {
                    puVar11 = puVar2 + 1;
                  }
                  *puVar11 = puVar1[1];
                  puVar1[1] = *puVar7;
                  *puVar7 = (unsigned int)puVar1;
                  puVar1[4] = (unsigned int)puVar7;
                }
                if ((unsigned int *)*puVar9 == puVar1) {
                  puVar9 = puVar1 + 1;
                }
              }
            }
          }
        }
        else {
          fn_82B8F1B0(iVar19,puVar5,param_1);
          fn_82B8F328(iVar19,puVar9,param_1);
          if ((unsigned int *)*piVar17 == puVar5) {
            *piVar17 = (int)puVar9;
          }
        }
      }
    }
  }
  fn_82B44B88(param_1);
  fn_82B330F8(param_1,0);
  return;
}

