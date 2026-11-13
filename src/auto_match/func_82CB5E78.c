extern unsigned int uStack_101;
extern unsigned int uStack_134;
extern unsigned int uStack_138;


void fn_82CB5E78(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned char bVar16;
  unsigned char uVar17;
  unsigned char uVar18;
  unsigned char uVar19;
  unsigned char uVar20;
  int iVar21;
  int *piVar22;
  unsigned char *pbVar23;
  unsigned char *pbVar24;
  unsigned char *pbVar25;
  int iVar26;
  int iVar27;
  unsigned char *pbVar28;
  int *piVar29;
  int iVar30;
  unsigned char *puVar31;
  int iVar33;
  unsigned char *pbVar34;
  unsigned char *pbVar35;
  unsigned __int64 uVar32;
  int iVar36;
  int iVar37;
  __int64 lVar38;
  __int64 lVar39;
  unsigned int uStack_138;
  unsigned int uStack_134;
  unsigned char uStack_101;
  unsigned char abStack_100 [256];
  
  iVar21 = *(int *)(param_1 + 0x100);
  if (param_7 == 0) {
    if (param_6 == 0) {
      puVar31 = &uStack_101;
      lVar38 = 0xb;
      if (param_8 == 0) {
        pbVar28 = (unsigned char *)(param_4 - param_5);
        do {
          bVar16 = pbVar28[2];
          bVar1 = pbVar28[1];
          bVar2 = *pbVar28;
          bVar3 = pbVar28[3];
          bVar4 = pbVar28[4];
          bVar5 = pbVar28[5];
          bVar6 = pbVar28[6];
          bVar7 = pbVar28[7];
          bVar8 = pbVar28[8];
          bVar9 = pbVar28[9];
          puVar31[1] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar2 + (unsigned int)bVar1) * 9 - (unsigned int)pbVar28[-1]) -
                                (unsigned int)bVar16) + 8) >> 4) + iVar21);
          uVar17 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar3 + (unsigned int)bVar16) * 9 - (unsigned int)bVar4) - (unsigned int)bVar1) + 8) >>
                     4) + iVar21);
          uVar18 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar4 + (unsigned int)bVar3) * 9 - (unsigned int)bVar5) - (unsigned int)bVar16) + 8) >>
                     4) + iVar21);
          uVar19 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar5 + (unsigned int)bVar4) * 9 - (unsigned int)bVar6) - (unsigned int)bVar3) + 8) >>
                     4) + iVar21);
          puVar31[2] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar16 + (unsigned int)bVar1) * 9 - (unsigned int)bVar3) - (unsigned int)bVar2) + 8
                               ) >> 4) + iVar21);
          uVar20 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar6 + (unsigned int)bVar5) * 9 - (unsigned int)bVar7) - (unsigned int)bVar4) + 8) >>
                     4) + iVar21);
          puVar31[3] = uVar17;
          uVar17 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar7 + (unsigned int)bVar6) * 9 - (unsigned int)bVar8) - (unsigned int)bVar5) + 8) >>
                     4) + iVar21);
          puVar31[4] = uVar18;
          puVar31[5] = uVar19;
          puVar31[6] = uVar20;
          puVar31[7] = uVar17;
          pbVar28 = pbVar28 + param_5;
          puVar31 = puVar31 + 8;
          *puVar31 = *(unsigned char *)
                      (((int)(((((unsigned int)bVar8 + (unsigned int)bVar7) * 9 - (unsigned int)bVar9) - (unsigned int)bVar6) + 8)
                       >> 4) + iVar21);
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        puVar31 = (unsigned char *)(param_2 + 2);
        piVar29 = (int *)(param_3 + -4);
        lVar38 = 8;
        pbVar28 = abStack_100;
        do {
          bVar16 = pbVar28[9];
          bVar1 = pbVar28[0x11];
          bVar2 = pbVar28[10];
          bVar3 = pbVar28[0x19];
          bVar4 = pbVar28[0x12];
          bVar5 = pbVar28[0xb];
          bVar6 = pbVar28[1];
          bVar7 = pbVar28[0x13];
          bVar8 = pbVar28[0x1a];
          bVar9 = pbVar28[0x14];
          bVar10 = pbVar28[0x1b];
          bVar11 = pbVar28[0x1c];
          bVar12 = pbVar28[2];
          bVar13 = pbVar28[3];
          bVar14 = pbVar28[4];
          bVar15 = pbVar28[0xc];
          puVar31[-2] = *(unsigned char *)
                         ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar28[0x10] + (unsigned int)pbVar28[8]) * 9 -
                                                  (unsigned int)pbVar28[0x18]) - (unsigned int)*pbVar28) + 8) >> 4)
                                         + iVar21) + piVar29[1] + iVar21);
          puVar31[-1] = *(unsigned char *)
                         ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar1 + (unsigned int)bVar16) * 9 - (unsigned int)bVar3) -
                                                 (unsigned int)bVar6) + 8) >> 4) + iVar21) + piVar29[2] +
                         iVar21);
          *puVar31 = *(unsigned char *)
                      ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar4 + (unsigned int)bVar2) * 9 - (unsigned int)bVar8) -
                                              (unsigned int)bVar12) + 8) >> 4) + iVar21) + piVar29[3] +
                      iVar21);
          puVar31[1] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar7 + (unsigned int)bVar5) * 9 - (unsigned int)bVar10) -
                                                (unsigned int)bVar13) + 8) >> 4) + iVar21) + piVar29[4] +
                        iVar21);
          bVar16 = pbVar28[0x15];
          puVar31[2] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar9 + (unsigned int)bVar15) * 9 - (unsigned int)bVar11) -
                                                (unsigned int)bVar14) + 8) >> 4) + iVar21) + piVar29[5] +
                        iVar21);
          bVar1 = pbVar28[0xe];
          bVar2 = pbVar28[0x16];
          bVar3 = pbVar28[0x1e];
          bVar4 = pbVar28[6];
          bVar5 = pbVar28[0x17];
          bVar6 = pbVar28[0xf];
          bVar7 = pbVar28[0x1f];
          bVar8 = pbVar28[7];
          puVar31[3] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar16 + (unsigned int)pbVar28[0xd]) * 9 -
                                                 (unsigned int)pbVar28[0x1d]) - (unsigned int)pbVar28[5]) + 8) >> 4)
                                        + iVar21) + piVar29[6] + iVar21);
          puVar31[4] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar2 + (unsigned int)bVar1) * 9 - (unsigned int)bVar3) -
                                                (unsigned int)bVar4) + 8) >> 4) + iVar21) + piVar29[7] +
                        iVar21);
          piVar29 = piVar29 + 8;
          puVar31[5] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar5 + (unsigned int)bVar6) * 9 - (unsigned int)bVar7) -
                                                (unsigned int)bVar8) + 8) >> 4) + iVar21) + *piVar29 +
                        iVar21);
          puVar31 = puVar31 + param_5;
          lVar38 = lVar38 + -1;
          pbVar28 = pbVar28 + 8;
        } while (lVar38 != 0);
      }
      else {
        iVar27 = param_4 + param_5 + 1;
        iVar26 = iVar27 - param_5;
        uStack_138 = iVar26 - param_5;
        pbVar28 = (unsigned char *)(uStack_138 + 1);
        do {
          bVar16 = pbVar28[-1];
          bVar1 = pbVar28[-2];
          bVar2 = *pbVar28;
          bVar3 = pbVar28[7];
          bVar4 = pbVar28[1];
          bVar5 = pbVar28[2];
          bVar6 = pbVar28[3];
          bVar7 = pbVar28[4];
          bVar8 = pbVar28[5];
          bVar9 = pbVar28[6];
          puVar31[1] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar16 + (unsigned int)bVar1) * 9 - (unsigned int)pbVar28[-3]) -
                                (unsigned int)bVar2) + 8) >> 4) + iVar21);
          uVar17 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar2 + (unsigned int)bVar4) * 9 - (unsigned int)bVar5) - (unsigned int)bVar16) + 8) >>
                     4) + iVar21);
          uVar18 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar5 + (unsigned int)bVar4) * 9 - (unsigned int)bVar2) - (unsigned int)bVar6) + 8) >>
                     4) + iVar21);
          puVar31[2] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar2 + (unsigned int)bVar16) * 9 - (unsigned int)bVar4) - (unsigned int)bVar1) + 8
                               ) >> 4) + iVar21);
          uVar19 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar6 + (unsigned int)bVar5) * 9 - (unsigned int)bVar7) - (unsigned int)bVar4) + 8) >>
                     4) + iVar21);
          puVar31[3] = uVar17;
          uVar17 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar7 + (unsigned int)bVar6) * 9 - (unsigned int)bVar8) - (unsigned int)bVar5) + 8) >>
                     4) + iVar21);
          puVar31[4] = uVar18;
          uVar18 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar8 + (unsigned int)bVar7) * 9 - (unsigned int)bVar9) - (unsigned int)bVar6) + 8) >>
                     4) + iVar21);
          puVar31[5] = uVar19;
          puVar31[6] = uVar17;
          puVar31[7] = uVar18;
          pbVar28 = pbVar28 + param_5;
          puVar31 = puVar31 + 8;
          *puVar31 = *(unsigned char *)
                      (((int)(((((unsigned int)bVar9 + (unsigned int)bVar8) * 9 - (unsigned int)bVar3) - (unsigned int)bVar7) + 8)
                       >> 4) + iVar21);
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        piVar29 = (int *)(param_3 + 8);
        uStack_134 = 8;
        iVar37 = (iVar26 - iVar27) + param_2 + param_5 + 2;
        iVar27 = iVar26 + param_5 + 2;
        pbVar28 = abStack_100 + 8;
        do {
          lVar38 = 2;
          iVar36 = 0;
          do {
            iVar30 = iVar36 + iVar26;
            bVar16 = pbVar28[iVar36 + -7];
            bVar1 = pbVar28[iVar36 + 9];
            bVar2 = pbVar28[iVar36 + 1];
            bVar3 = pbVar28[iVar36 + 0x11];
            bVar4 = pbVar28[iVar36 + 10];
            bVar5 = pbVar28[iVar36 + 2];
            *(unsigned char *)(iVar30 + (iVar37 - iVar26) + -2) =
                 *(unsigned char *)
                  ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)(pbVar28 + 8)[iVar36] +
                                                                   (unsigned int)pbVar28[iVar36]) * 9 -
                                                                  (unsigned int)pbVar28[iVar36 + 0x10]) -
                                                                 (unsigned int)pbVar28[iVar30 + (-8 - iVar26
                                                                                        )]) + 8) >>
                                                          4) + iVar21) +
                                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar30 + (iVar27
                                                                                             - 
                                                  iVar26) + -2) + (unsigned int)*(unsigned char *)(iVar36 + iVar26))
                                                  * 9 - (unsigned int)*(unsigned char *)(iVar30 + (uStack_138 -
                                                                                 iVar26))) -
                                                  (unsigned int)*(unsigned char *)(iVar30 + ((param_5 + -2) - iVar26)
                                                                           + iVar27)) + 8) >> 4) +
                                                  iVar21) + 1) >> 1) + iVar21) + piVar29[-2] +
                  iVar21);
            *(unsigned char *)(iVar37 + -1 + iVar36) =
                 *(unsigned char *)
                  ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar2 + (unsigned int)bVar1) * 9 -
                                                                  (unsigned int)bVar16) - (unsigned int)bVar3) + 8)
                                                          >> 4) + iVar21) +
                                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((-1 - param_5) +
                                                                                    iVar27 + iVar36)
                                                                   + (unsigned int)*(unsigned char *)(iVar27 + -1 +
                                                                                    iVar36)) * 9 -
                                                                  (unsigned int)*(unsigned char *)(param_5 + -1 +
                                                                                  iVar27 + iVar36))
                                                                 - (unsigned int)*(unsigned char *)(iVar36 + 
                                                  uStack_138 + 1)) + 8) >> 4) + iVar21) + 1) >> 1) +
                                  iVar21) + piVar29[-1] + iVar21);
            bVar16 = pbVar28[iVar36 + 0xb];
            bVar1 = pbVar28[iVar36 + -5];
            bVar2 = pbVar28[iVar36 + 3];
            bVar3 = pbVar28[iVar36 + 0x13];
            *(unsigned char *)(iVar37 + iVar36) =
                 *(unsigned char *)
                  ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar27 + iVar36)
                                                                   + (unsigned int)*(unsigned char *)(iVar36 + iVar26
                                                                                              + 2))
                                                                   * 9 - (unsigned int)*(unsigned char *)(iVar27 + 
                                                  param_5 + iVar36)) -
                                                  (unsigned int)*(unsigned char *)(iVar36 + uStack_138 + 2)) + 8) >>
                                                  4) + iVar21) +
                                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar5 + (unsigned int)bVar4) * 9 -
                                                                  (unsigned int)pbVar28[iVar36 + -6]) -
                                                                 (unsigned int)pbVar28[iVar36 + 0x12]) + 8)
                                                          >> 4) + iVar21) + 1) >> 1) + iVar21) +
                   *piVar29 + iVar21);
            piVar22 = piVar29 + 1;
            piVar29 = piVar29 + 4;
            *(unsigned char *)(iVar37 + 1 + iVar36) =
                 *(unsigned char *)
                  ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((1 - param_5) +
                                                                                    iVar27 + iVar36)
                                                                   + (unsigned int)*(unsigned char *)(iVar27 + 1 +
                                                                                    iVar36)) * 9 -
                                                                  (unsigned int)*(unsigned char *)(param_5 + 1 +
                                                                                  iVar27 + iVar36))
                                                                 - (unsigned int)*(unsigned char *)(uStack_138 + 3 +
                                                                                  iVar36)) + 8) >> 4
                                                          ) + iVar21) +
                                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar2 + (unsigned int)bVar16) * 9
                                                                  - (unsigned int)bVar1) - (unsigned int)bVar3) + 8)
                                                          >> 4) + iVar21) + 1) >> 1) + iVar21) +
                   *piVar22 + iVar21);
            iVar36 = iVar36 + 4;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          uVar32 = (unsigned __int64)uStack_134;
          uStack_138 = uStack_138 + param_5;
          iVar26 = iVar26 + param_5;
          uStack_134 = (unsigned int)(uVar32 - 1);
          iVar27 = iVar27 + param_5;
          iVar37 = iVar37 + param_5;
          pbVar28 = pbVar28 + 8;
        } while (uVar32 - 1 != 0);
      }
    }
    else {
      pbVar28 = (unsigned char *)(param_4 + param_5);
      if (param_8 == 0) {
        lVar38 = 8;
        puVar31 = (unsigned char *)(param_2 + 2);
        piVar29 = (int *)(param_3 + -4);
        pbVar35 = (unsigned char *)((param_4 - param_5) + 2);
        pbVar34 = pbVar28 + 2;
        do {
          pbVar28 = pbVar28 + param_5;
          pbVar34[((param_2 - param_4) - param_5) + -2] =
               *(unsigned char *)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar34[-2 - param_5] + (unsigned int)pbVar34[-2])
                                                  * 9 - (unsigned int)pbVar35[-2]) - (unsigned int)*pbVar28) + 8) >>
                                         4) + iVar21) + piVar29[1] + iVar21);
          puVar31[-1] = *(unsigned char *)
                         ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar34[-1 - param_5] + (unsigned int)pbVar34[-1])
                                                   * 9 - (unsigned int)pbVar35[-1]) - (unsigned int)pbVar28[1]) + 8)
                                          >> 4) + iVar21) + piVar29[2] + iVar21);
          *puVar31 = *(unsigned char *)
                      ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*pbVar34 + (unsigned int)pbVar35[param_5]) * 9 -
                                               (unsigned int)pbVar28[2]) - (unsigned int)*pbVar35) + 8) >> 4) +
                                      iVar21) + piVar29[3] + iVar21);
          puVar31[1] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar34[1 - param_5] + (unsigned int)pbVar34[1]) *
                                                  9 - (unsigned int)pbVar35[1]) - (unsigned int)pbVar28[3]) + 8) >>
                                         4) + iVar21) + piVar29[4] + iVar21);
          puVar31[2] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar34[2 - param_5] + (unsigned int)pbVar34[2]) *
                                                  9 - (unsigned int)pbVar35[2]) - (unsigned int)pbVar28[4]) + 8) >>
                                         4) + iVar21) + piVar29[5] + iVar21);
          puVar31[3] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar34[3 - param_5] + (unsigned int)pbVar34[3]) *
                                                  9 - (unsigned int)pbVar35[3]) - (unsigned int)pbVar28[5]) + 8) >>
                                         4) + iVar21) + piVar29[6] + iVar21);
          puVar31[4] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar34[4 - param_5] + (unsigned int)pbVar34[4]) *
                                                  9 - (unsigned int)pbVar35[4]) - (unsigned int)pbVar28[6]) + 8) >>
                                         4) + iVar21) + piVar29[7] + iVar21);
          pbVar23 = pbVar34 + 5;
          pbVar24 = pbVar34 + (5 - param_5);
          pbVar25 = pbVar35 + 5;
          piVar29 = piVar29 + 8;
          pbVar34 = pbVar34 + param_5;
          pbVar35 = pbVar35 + param_5;
          puVar31[5] = *(unsigned char *)
                        ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*pbVar24 + (unsigned int)*pbVar23) * 9 -
                                                 (unsigned int)*pbVar25) - (unsigned int)pbVar28[7]) + 8) >> 4) +
                                        iVar21) + *piVar29 + iVar21);
          puVar31 = puVar31 + param_5;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
      }
      else {
        iVar26 = (int)pbVar28 - param_5;
        uStack_134 = iVar26 - param_5;
        puVar31 = &uStack_101;
        pbVar35 = (unsigned char *)(uStack_134 + 2);
        lVar38 = 0xb;
        do {
          bVar16 = pbVar35[-1];
          bVar1 = pbVar35[-2];
          bVar2 = *pbVar35;
          bVar3 = pbVar35[7];
          bVar4 = pbVar35[1];
          bVar5 = pbVar35[2];
          bVar6 = pbVar35[3];
          bVar7 = pbVar35[4];
          bVar8 = pbVar35[5];
          bVar9 = pbVar35[6];
          puVar31[1] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar1 + (unsigned int)bVar16) * 9 - (unsigned int)pbVar35[-3]) -
                                (unsigned int)bVar2) + 8) >> 4) + iVar21);
          uVar17 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar2 + (unsigned int)bVar4) * 9 - (unsigned int)bVar5) - (unsigned int)bVar16) + 8) >>
                     4) + iVar21);
          uVar18 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar5 + (unsigned int)bVar4) * 9 - (unsigned int)bVar2) - (unsigned int)bVar6) + 8) >>
                     4) + iVar21);
          puVar31[2] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar2 + (unsigned int)bVar16) * 9 - (unsigned int)bVar4) - (unsigned int)bVar1) + 8
                               ) >> 4) + iVar21);
          uVar19 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar6 + (unsigned int)bVar5) * 9 - (unsigned int)bVar7) - (unsigned int)bVar4) + 8) >>
                     4) + iVar21);
          puVar31[3] = uVar17;
          uVar17 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar7 + (unsigned int)bVar6) * 9 - (unsigned int)bVar8) - (unsigned int)bVar5) + 8) >>
                     4) + iVar21);
          puVar31[4] = uVar18;
          uVar18 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar8 + (unsigned int)bVar7) * 9 - (unsigned int)bVar9) - (unsigned int)bVar6) + 8) >>
                     4) + iVar21);
          puVar31[5] = uVar19;
          puVar31[6] = uVar17;
          puVar31[7] = uVar18;
          pbVar35 = pbVar35 + param_5;
          puVar31 = puVar31 + 8;
          *puVar31 = *(unsigned char *)
                      (((int)(((((unsigned int)bVar9 + (unsigned int)bVar8) * 9 - (unsigned int)bVar3) - (unsigned int)bVar7) + 8)
                       >> 4) + iVar21);
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        piVar29 = (int *)(param_3 + 8);
        uStack_138 = 8;
        iVar37 = (iVar26 - (int)pbVar28) + param_2 + param_5 + 2;
        iVar27 = iVar26 + param_5 + 2;
        pbVar28 = abStack_100 + 8;
        do {
          lVar38 = 2;
          iVar36 = 0;
          do {
            iVar30 = iVar36 + iVar26;
            bVar16 = pbVar28[iVar36 + -7];
            bVar1 = pbVar28[iVar36 + 9];
            bVar2 = pbVar28[iVar36 + 1];
            bVar3 = pbVar28[iVar36 + 0x11];
            bVar4 = pbVar28[iVar36 + 10];
            bVar5 = pbVar28[iVar36 + 2];
            *(unsigned char *)((iVar37 - iVar26) + -2 + iVar30) =
                 *(unsigned char *)
                  ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)(pbVar28 + 8)[iVar36] +
                                                                   (unsigned int)pbVar28[iVar36]) * 9 -
                                                                  (unsigned int)pbVar28[iVar36 + 0x10]) -
                                                                 (unsigned int)pbVar28[iVar30 + (-8 - iVar26
                                                                                        )]) + 8) >>
                                                          4) + iVar21) +
                                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((iVar27 - iVar26
                                                                                    ) + -2 + iVar30)
                                                                   + (unsigned int)*(unsigned char *)(iVar36 + iVar26
                                                                                    )) * 9 -
                                                                  (unsigned int)*(unsigned char *)((uStack_134 -
                                                                                  iVar26) + iVar30))
                                                                 - (unsigned int)*(unsigned char *)(((param_5 + -2) -
                                                                                   iVar26) + iVar27
                                                                                  + iVar30)) + 8) >>
                                                          4) + iVar21) + 1) >> 1) + iVar21) +
                   piVar29[-2] + iVar21);
            *(unsigned char *)(iVar37 + -1 + iVar36) =
                 *(unsigned char *)
                  ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar2 + (unsigned int)bVar1) * 9 -
                                                                  (unsigned int)bVar16) - (unsigned int)bVar3) + 8)
                                                          >> 4) + iVar21) +
                                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((-1 - param_5) +
                                                                                    iVar27 + iVar36)
                                                                   + (unsigned int)*(unsigned char *)(iVar27 + -1 +
                                                                                    iVar36)) * 9 -
                                                                  (unsigned int)*(unsigned char *)(param_5 + -1 +
                                                                                  iVar27 + iVar36))
                                                                 - (unsigned int)*(unsigned char *)(uStack_134 + 1 +
                                                                                  iVar36)) + 8) >> 4
                                                          ) + iVar21) + 1) >> 1) + iVar21) +
                   piVar29[-1] + iVar21);
            bVar16 = pbVar28[iVar36 + 0xb];
            bVar1 = pbVar28[iVar36 + -5];
            bVar2 = pbVar28[iVar36 + 3];
            bVar3 = pbVar28[iVar36 + 0x13];
            *(unsigned char *)(iVar36 + iVar37) =
                 *(unsigned char *)
                  ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar26 + 2 +
                                                                                   iVar36) +
                                                                   (unsigned int)*(unsigned char *)(iVar36 + iVar27))
                                                                   * 9 - (unsigned int)*(unsigned char *)(iVar27 + 
                                                  param_5 + iVar36)) -
                                                  (unsigned int)*(unsigned char *)(uStack_134 + 2 + iVar36)) + 8) >>
                                                  4) + iVar21) +
                                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar5 + (unsigned int)bVar4) * 9 -
                                                                  (unsigned int)pbVar28[iVar36 + -6]) -
                                                                 (unsigned int)pbVar28[iVar36 + 0x12]) + 8)
                                                          >> 4) + iVar21) + 1) >> 1) + iVar21) +
                   *piVar29 + iVar21);
            piVar22 = piVar29 + 1;
            piVar29 = piVar29 + 4;
            *(unsigned char *)(iVar37 + 1 + iVar36) =
                 *(unsigned char *)
                  ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar2 + (unsigned int)bVar16) * 9
                                                                  - (unsigned int)bVar1) - (unsigned int)bVar3) + 8)
                                                          >> 4) + iVar21) +
                                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((1 - param_5) +
                                                                                    iVar27 + iVar36)
                                                                   + (unsigned int)*(unsigned char *)(iVar27 + 1 +
                                                                                    iVar36)) * 9 -
                                                                  (unsigned int)*(unsigned char *)(param_5 + 1 +
                                                                                  iVar27 + iVar36))
                                                                 - (unsigned int)*(unsigned char *)(uStack_134 + 3 +
                                                                                  iVar36)) + 8) >> 4
                                                          ) + iVar21) + 1) >> 1) + iVar21) +
                   *piVar22 + iVar21);
            iVar36 = iVar36 + 4;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          uVar32 = (unsigned __int64)uStack_138;
          uStack_134 = uStack_134 + param_5;
          iVar26 = iVar26 + param_5;
          uStack_138 = (unsigned int)(uVar32 - 1);
          iVar27 = iVar27 + param_5;
          iVar37 = iVar37 + param_5;
          pbVar28 = pbVar28 + 8;
        } while (uVar32 - 1 != 0);
      }
    }
  }
  else if (param_6 == 0) {
    if (param_8 == 0) {
      piVar29 = (int *)(param_3 + -4);
      pbVar28 = (unsigned char *)(param_4 + 2);
      puVar31 = (unsigned char *)(param_2 + 2);
      iVar26 = (param_4 - param_2) + -2;
      lVar38 = 8;
      do {
        puVar31[-2] = *(unsigned char *)
                       ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar28[-1] + (unsigned int)(unsigned char)puVar31[iVar26]) *
                                                 9 - (unsigned int)pbVar28[-3]) - (unsigned int)*pbVar28) + 8) >> 4)
                                       + iVar21) + piVar29[1] + iVar21);
        puVar31[-1] = *(unsigned char *)
                       ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*pbVar28 + (unsigned int)pbVar28[-1]) * 9 -
                                                (unsigned int)pbVar28[1]) - (unsigned int)(unsigned char)puVar31[iVar26]) + 8
                                              ) >> 4) + iVar21) + piVar29[2] + iVar21);
        *puVar31 = *(unsigned char *)
                    ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar28[1] + (unsigned int)*pbVar28) * 9 -
                                             (unsigned int)pbVar28[2]) - (unsigned int)pbVar28[-1]) + 8) >> 4) +
                                    iVar21) + piVar29[3] + iVar21);
        puVar31[1] = *(unsigned char *)
                      ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar28[2] + (unsigned int)pbVar28[1]) * 9 -
                                               (unsigned int)pbVar28[3]) - (unsigned int)*pbVar28) + 8) >> 4) +
                                      iVar21) + piVar29[4] + iVar21);
        puVar31[2] = *(unsigned char *)
                      ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar28[3] + (unsigned int)pbVar28[2]) * 9 -
                                               (unsigned int)pbVar28[4]) - (unsigned int)pbVar28[1]) + 8) >> 4) +
                                      iVar21) + piVar29[5] + iVar21);
        puVar31[3] = *(unsigned char *)
                      ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar28[4] + (unsigned int)pbVar28[3]) * 9 -
                                               (unsigned int)pbVar28[5]) - (unsigned int)pbVar28[2]) + 8) >> 4) +
                                      iVar21) + piVar29[6] + iVar21);
        puVar31[4] = *(unsigned char *)
                      ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)pbVar28[5] + (unsigned int)pbVar28[4]) * 9 -
                                               (unsigned int)pbVar28[6]) - (unsigned int)pbVar28[3]) + 8) >> 4) +
                                      iVar21) + piVar29[7] + iVar21);
        pbVar35 = pbVar28 + 7;
        piVar29 = piVar29 + 8;
        pbVar34 = pbVar28 + 6;
        pbVar23 = pbVar28 + 5;
        pbVar24 = pbVar28 + 4;
        pbVar28 = pbVar28 + param_5;
        puVar31[5] = *(unsigned char *)
                      ((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*pbVar34 + (unsigned int)*pbVar23) * 9 -
                                               (unsigned int)*pbVar35) - (unsigned int)*pbVar24) + 8) >> 4) + iVar21
                                      ) + *piVar29 + iVar21);
        puVar31 = puVar31 + param_5;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
    }
    else {
      piVar29 = (int *)(param_3 + 8);
      iVar27 = param_2 + 2;
      iVar26 = param_4 + 1;
      lVar38 = 8;
      do {
        iVar30 = 0;
        lVar39 = 2;
        iVar37 = iVar26 + 2;
        iVar36 = iVar26 + 1;
        do {
          *(unsigned char *)(iVar30 + iVar26 + (param_2 - param_4) + -1) =
               *(unsigned char *)
                ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar26 + -1 +
                                                                                 iVar30) +
                                                                 (unsigned int)*(unsigned char *)(iVar26 + iVar30)) *
                                                                 9 - (unsigned int)*(unsigned char *)(iVar26 + -2 +
                                                                                    iVar30)) -
                                                               (unsigned int)*(unsigned char *)(iVar36 + iVar30)) + 8
                                                              ) >> 4) + iVar21) +
                                        (unsigned int)*(unsigned char *)(iVar26 + iVar30) + 1) >> 1) + iVar21) +
                 piVar29[-2] + iVar21);
          *(unsigned char *)(iVar27 + -1 + iVar30) =
               *(unsigned char *)
                ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar26 + iVar30) +
                                                                 (unsigned int)*(unsigned char *)(iVar36 + iVar30)) *
                                                                 9 - (unsigned int)*(unsigned char *)(iVar26 + -1 +
                                                                                    iVar30)) -
                                                               (unsigned int)*(unsigned char *)(iVar37 + iVar30)) + 8
                                                              ) >> 4) + iVar21) +
                                        (unsigned int)*(unsigned char *)(iVar36 + iVar30) + 1) >> 1) + iVar21) +
                 piVar29[-1] + iVar21);
          *(unsigned char *)(iVar27 + iVar30) =
               *(unsigned char *)
                ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar36 + iVar30) +
                                                                 (unsigned int)*(unsigned char *)(iVar37 + iVar30)) *
                                                                 9 - (unsigned int)*(unsigned char *)(iVar26 + 3 +
                                                                                    iVar30)) -
                                                               (unsigned int)*(unsigned char *)(iVar26 + iVar30)) + 8
                                                              ) >> 4) + iVar21) +
                                        (unsigned int)*(unsigned char *)(iVar37 + iVar30) + 1) >> 1) + iVar21) +
                 *piVar29 + iVar21);
          piVar22 = piVar29 + 1;
          piVar29 = piVar29 + 4;
          bVar16 = *(unsigned char *)(iVar26 + 3 + iVar30);
          *(unsigned char *)(iVar27 + 1 + iVar30) =
               *(unsigned char *)
                ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar37 + iVar30) +
                                                                 (unsigned int)bVar16) * 9 -
                                                                (unsigned int)*(unsigned char *)(iVar26 + 4 + iVar30)
                                                                ) - (unsigned int)*(unsigned char *)(iVar36 + iVar30)
                                                               ) + 8) >> 4) + iVar21) + (unsigned int)bVar16
                                       + 1) >> 1) + iVar21) + *piVar22 + iVar21);
          iVar30 = iVar30 + 4;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar38 = lVar38 + -1;
        iVar27 = iVar27 + param_5;
        iVar26 = iVar26 + param_5;
      } while (lVar38 != 0);
    }
  }
  else if (param_8 == 0) {
    puVar31 = (unsigned char *)(param_2 + 2);
    pbVar28 = (unsigned char *)(param_4 + 2);
    piVar29 = (int *)(param_3 + -4);
    lVar38 = 8;
    do {
      puVar31[-2] = *(unsigned char *)
                     ((unsigned int)(unsigned char)puVar31[(param_4 - param_2) + -2] + piVar29[1] + iVar21);
      puVar31[-1] = *(unsigned char *)((unsigned int)pbVar28[-1] + piVar29[2] + iVar21);
      *puVar31 = *(unsigned char *)((unsigned int)*pbVar28 + piVar29[3] + iVar21);
      puVar31[1] = *(unsigned char *)((unsigned int)pbVar28[1] + piVar29[4] + iVar21);
      puVar31[2] = *(unsigned char *)((unsigned int)pbVar28[2] + piVar29[5] + iVar21);
      puVar31[3] = *(unsigned char *)((unsigned int)pbVar28[3] + piVar29[6] + iVar21);
      puVar31[4] = *(unsigned char *)((unsigned int)pbVar28[4] + piVar29[7] + iVar21);
      pbVar35 = pbVar28 + 5;
      pbVar28 = pbVar28 + param_5;
      piVar29 = piVar29 + 8;
      puVar31[5] = *(unsigned char *)((unsigned int)*pbVar35 + *piVar29 + iVar21);
      puVar31 = puVar31 + param_5;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
  }
  else {
    piVar29 = (int *)(param_3 + 8);
    iVar27 = param_2 + 2;
    iVar26 = param_4 + 1;
    lVar38 = 8;
    do {
      iVar37 = iVar26 + -1;
      iVar33 = 0;
      lVar39 = 2;
      iVar30 = iVar26 + 1;
      iVar36 = iVar26 + 2;
      do {
        *(unsigned char *)((iVar26 - iVar37) + (param_2 - param_4) + -1 + iVar37 + iVar33) =
             *(unsigned char *)
              ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar26 + iVar33) +
                                                               (unsigned int)*(unsigned char *)(iVar37 + iVar33)) * 9
                                                              - (unsigned int)*(unsigned char *)(iVar33 + iVar26 + -2
                                                                               )) -
                                                             (unsigned int)*(unsigned char *)(iVar30 + iVar33)) + 8)
                                                      >> 4) + iVar21) +
                                      (unsigned int)*(unsigned char *)(iVar37 + iVar33) + 1) >> 1) + iVar21) +
               piVar29[-2] + iVar21);
        *(unsigned char *)(iVar33 + iVar27 + -1) =
             *(unsigned char *)
              ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar30 + iVar33) +
                                                               (unsigned int)*(unsigned char *)(iVar26 + iVar33)) * 9
                                                              - (unsigned int)*(unsigned char *)(iVar36 + iVar33)) -
                                                             (unsigned int)*(unsigned char *)(iVar37 + iVar33)) + 8)
                                                      >> 4) + iVar21) +
                                      (unsigned int)*(unsigned char *)(iVar26 + iVar33) + 1) >> 1) + iVar21) +
               piVar29[-1] + iVar21);
        *(unsigned char *)(iVar27 + iVar33) =
             *(unsigned char *)
              ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar36 + iVar33) +
                                                               (unsigned int)*(unsigned char *)(iVar30 + iVar33)) * 9
                                                              - (unsigned int)*(unsigned char *)(iVar33 + iVar26 + 3)
                                                              ) - (unsigned int)*(unsigned char *)(iVar26 + iVar33))
                                                            + 8) >> 4) + iVar21) +
                                      (unsigned int)*(unsigned char *)(iVar30 + iVar33) + 1) >> 1) + iVar21) + iVar21
              + *piVar29);
        piVar22 = piVar29 + 1;
        piVar29 = piVar29 + 4;
        *(unsigned char *)(iVar27 + 1 + iVar33) =
             *(unsigned char *)
              ((unsigned int)*(unsigned char *)(((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar33 + iVar26 + 3)
                                                               + (unsigned int)*(unsigned char *)(iVar36 + iVar33)) *
                                                               9 - (unsigned int)*(unsigned char *)(iVar26 + 4 +
                                                                                  iVar33)) -
                                                             (unsigned int)*(unsigned char *)(iVar30 + iVar33)) + 8)
                                                      >> 4) + iVar21) +
                                      (unsigned int)*(unsigned char *)(iVar36 + iVar33) + 1) >> 1) + iVar21) +
               *piVar22 + iVar21);
        iVar33 = iVar33 + 4;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
      lVar38 = lVar38 + -1;
      iVar27 = iVar27 + param_5;
      iVar26 = iVar26 + param_5;
    } while (lVar38 != 0);
  }
  return;
}

