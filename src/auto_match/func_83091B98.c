#define true 1
extern unsigned int *auStack_284;
extern unsigned int *auStack_494;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int lbl_821878B0;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_498;
extern unsigned int uStack_49c;


void fn_83091B98(int param_1,int param_2,int *param_3,char param_4)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned char **ppuVar9;
  unsigned char *puVar10;
  unsigned char *puVar11;
  int iVar12;
  int *piVar13;
  unsigned short *puVar14;
  int *piVar15;
  unsigned int uVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  unsigned char *puStack_4a0;
  unsigned int uStack_49c;
  unsigned int uStack_498;
  unsigned char auStack_494 [516];
  unsigned char *puStack_290;
  unsigned int uStack_28c;
  unsigned int uStack_288;
  unsigned char auStack_284 [500];
  
  iVar8 = *(int *)(param_1 + 0xb0);
  puVar2 = *(unsigned short **)(param_1 + 0xac);
  uStack_288 = 0x80000100;
  uStack_498 = 0x80000100;
  uStack_28c = 0;
  puStack_290 = auStack_284;
  uStack_49c = 0;
  puStack_4a0 = auStack_494;
  puVar4 = puVar2;
  do {
    while( true ) {
      puVar14 = puVar4 + 2;
      if (puVar2 + iVar8 * 2 + -2 <= puVar14) {
        iVar8 = fn_82CE5410();
        uStack_49c = 0;
        if ((uStack_498 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),puStack_4a0,uStack_498 & 0x3fffffff,2);
        }
        puStack_4a0 = (unsigned char *)0x0;
        uStack_498 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_28c = 0;
        if ((uStack_288 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),puStack_290,uStack_288 & 0x3fffffff,2);
        }
        return;
      }
      uVar1 = puVar4[3];
      uVar16 = *(unsigned int *)(((int)(unsigned int)uVar1 >> 5) * 4 + param_2) &
               *(unsigned int *)(&lbl_821878B0 + (uVar1 & 0x1f) * 4);
      puVar4 = puVar14;
      if ((*puVar14 & 1) != 0) break;
      iVar7 = 0;
      piVar17 = (int *)((unsigned int)uVar1 * 0x10 + *(int *)(param_1 + 0xa0));
      if (0 < (int)uStack_28c) {
        iVar18 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0xa0);
          piVar19 = (int *)((unsigned int)*(unsigned short *)(puStack_290 + iVar18) * 0x10 + iVar5);
          if (((piVar19[1] - *piVar17 |
               piVar17[1] - *(int *)((unsigned int)*(unsigned short *)(puStack_290 + iVar18) * 0x10 + iVar5)) &
              0x80008000U) == 0) {
            piVar15 = piVar17;
            piVar13 = piVar19;
            if (((piVar17[3] & 1U) == 0) &&
               (piVar15 = piVar19, piVar13 = piVar17, (piVar19[3] & 1U) == 0)) {
              iVar5 = fn_82CE5410();
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),param_3,8);
              }
              iVar5 = *param_3;
              iVar6 = param_3[1] * 8;
              param_3[1] = param_3[1] + 1;
              *(int *)(iVar6 + iVar5) = piVar19[3];
              *(int *)(iVar6 + iVar5 + 4) = piVar17[3];
            }
            else {
              uVar3 = (int)piVar13 - iVar5 >> 4;
              iVar5 = (piVar15[3] & 0xfffffffeU) + *(int *)(param_1 + 0xd8);
              if (param_4 == '\0') {
                iVar6 = 0;
                if (0 < *(int *)(iVar5 + 8)) {
                  puVar14 = *(unsigned short **)(iVar5 + 4);
                  do {
                    if ((unsigned int)*puVar14 == (uVar3 & 0xffff)) goto LAB_83091e4c;
                    iVar6 = iVar6 + 1;
                    puVar14 = puVar14 + 1;
                  } while (iVar6 < *(int *)(iVar5 + 8));
                }
                iVar6 = -1;
LAB_83091e4c:
                iVar12 = *(int *)(iVar5 + 8) + -1;
                *(int *)(iVar5 + 8) = iVar12;
                if (iVar12 != iVar6) {
                  *(unsigned short *)(iVar6 * 2 + *(int *)(iVar5 + 4)) =
                       *(unsigned short *)(iVar12 * 2 + *(int *)(iVar5 + 4));
                }
              }
              else {
                iVar6 = fn_82CE5410();
                if (*(unsigned int *)(iVar5 + 8) == (*(unsigned int *)(iVar5 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),(int *)(iVar5 + 4),2);
                }
                *(short *)(*(int *)(iVar5 + 8) * 2 + *(int *)(iVar5 + 4)) = (short)uVar3;
                *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
              }
            }
          }
          iVar7 = iVar7 + 1;
          iVar18 = iVar18 + 2;
        } while (iVar7 < (int)uStack_28c);
      }
      if (uVar16 == 0) {
        iVar7 = fn_82CE5410();
        if (uStack_49c == (uStack_498 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),&puStack_4a0,2);
        }
        *(unsigned short *)(puStack_4a0 + uStack_49c * 2) = uVar1;
        uStack_49c = uStack_49c + 1;
      }
      else {
        iVar7 = 0;
        if (0 < (int)uStack_49c) {
          iVar18 = 0;
          do {
            iVar5 = *(int *)(param_1 + 0xa0);
            piVar19 = (int *)((unsigned int)*(unsigned short *)(puStack_4a0 + iVar18) * 0x10 + iVar5);
            if (((piVar19[1] - *piVar17 |
                 piVar17[1] - *(int *)((unsigned int)*(unsigned short *)(puStack_4a0 + iVar18) * 0x10 + iVar5)) &
                0x80008000U) == 0) {
              piVar15 = piVar19;
              piVar13 = piVar17;
              if (((piVar17[3] & 1U) == 0) &&
                 (piVar15 = piVar17, piVar13 = piVar19, (piVar19[3] & 1U) == 0)) {
                iVar5 = fn_82CE5410();
                if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),param_3,8);
                }
                iVar5 = param_3[1];
                param_3[1] = iVar5 + 1;
                piVar15 = (int *)(iVar5 * 8 + *param_3);
                *piVar15 = piVar19[3];
                piVar15[1] = piVar17[3];
              }
              else {
                uVar16 = (int)piVar15 - iVar5 >> 4;
                iVar5 = (piVar13[3] & 0xfffffffeU) + *(int *)(param_1 + 0xd8);
                if (param_4 == '\0') {
                  iVar6 = 0;
                  if (0 < *(int *)(iVar5 + 8)) {
                    puVar14 = *(unsigned short **)(iVar5 + 4);
                    do {
                      if ((unsigned int)*puVar14 == (uVar16 & 0xffff)) goto LAB_83092018;
                      iVar6 = iVar6 + 1;
                      puVar14 = puVar14 + 1;
                    } while (iVar6 < *(int *)(iVar5 + 8));
                  }
                  iVar6 = -1;
LAB_83092018:
                  iVar12 = *(int *)(iVar5 + 8) + -1;
                  *(int *)(iVar5 + 8) = iVar12;
                  if (iVar12 != iVar6) {
                    *(unsigned short *)(iVar6 * 2 + *(int *)(iVar5 + 4)) =
                         *(unsigned short *)(iVar12 * 2 + *(int *)(iVar5 + 4));
                  }
                }
                else {
                  iVar6 = fn_82CE5410();
                  if (*(unsigned int *)(iVar5 + 8) == (*(unsigned int *)(iVar5 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                    fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),(int *)(iVar5 + 4),2);
                  }
                  *(short *)(*(int *)(iVar5 + 8) * 2 + *(int *)(iVar5 + 4)) = (short)uVar16;
                  *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar18 = iVar18 + 2;
          } while (iVar7 < (int)uStack_49c);
        }
        iVar7 = fn_82CE5410();
        if (uStack_28c == (uStack_288 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),&puStack_290,2);
        }
        *(unsigned short *)(puStack_290 + uStack_28c * 2) = uVar1;
        uStack_28c = uStack_28c + 1;
      }
    }
    ppuVar9 = &puStack_290;
    if (uVar16 == 0) {
      ppuVar9 = &puStack_4a0;
    }
    puVar11 = ppuVar9[1];
    puVar10 = (unsigned char *)0x0;
    if (0 < (int)puVar11) {
      puVar14 = (unsigned short *)*ppuVar9;
      do {
        if ((unsigned int)*puVar14 == (unsigned int)uVar1) goto LAB_83091c88;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      } while ((int)puVar10 < (int)puVar11);
    }
    puVar10 = (unsigned char *)0xffffffff;
LAB_83091c88:
    puVar11 = puVar11 + -1;
    ppuVar9[1] = puVar11;
    if (puVar11 != puVar10) {
      *(unsigned short *)(*ppuVar9 + (int)puVar10 * 2) = *(unsigned short *)(*ppuVar9 + (int)puVar11 * 2);
    }
  } while( true );
}

