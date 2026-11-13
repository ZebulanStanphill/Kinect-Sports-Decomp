extern unsigned int iStack_148;
extern unsigned int uStack_101;
extern unsigned int uStack_150;


void fn_82CB49E0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

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
  unsigned char bVar17;
  unsigned char bVar18;
  unsigned char bVar19;
  unsigned char bVar20;
  unsigned char bVar21;
  unsigned char bVar22;
  unsigned char uVar23;
  unsigned char uVar24;
  unsigned char uVar25;
  unsigned char uVar26;
  unsigned char *pbVar27;
  unsigned char *pbVar28;
  unsigned char *pbVar29;
  unsigned char *pbVar30;
  int iVar31;
  int iVar32;
  unsigned char *pbVar33;
  int iVar34;
  int iVar36;
  unsigned char *puVar37;
  unsigned char *pbVar38;
  unsigned char *pbVar39;
  unsigned __int64 uVar35;
  int iVar40;
  unsigned char *puVar41;
  int iVar42;
  __int64 lVar43;
  unsigned int uStack_150;
  int iStack_148;
  unsigned char uStack_101;
  unsigned char abStack_100 [256];
  
  iVar36 = *(int *)(param_1 + 0x100);
  if (param_6 == 0) {
    param_3 = param_3 + param_4;
    if (param_5 == 0) {
      param_3 = param_3 + 1;
      iVar32 = param_3 - param_4;
      iStack_148 = iVar32 - param_4;
      puVar41 = &uStack_101;
      pbVar33 = (unsigned char *)(iStack_148 + 1);
      lVar43 = 0xb;
      if (param_7 == 0) {
        do {
          bVar22 = *pbVar33;
          bVar1 = pbVar33[-1];
          bVar2 = pbVar33[1];
          bVar3 = pbVar33[2];
          bVar4 = pbVar33[3];
          bVar5 = pbVar33[4];
          bVar6 = pbVar33[5];
          bVar7 = pbVar33[6];
          bVar8 = pbVar33[7];
          uVar23 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar1 + (unsigned int)bVar22) * 9 - (unsigned int)bVar2) - (unsigned int)pbVar33[-2]) +
                           8) >> 4) + iVar36);
          puVar41[1] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar1 + (unsigned int)pbVar33[-2]) * 9 - (unsigned int)pbVar33[-3]) -
                                (unsigned int)bVar22) + 8) >> 4) + iVar36);
          uVar24 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar2 + (unsigned int)bVar22) * 9 - (unsigned int)bVar1) - (unsigned int)bVar3) + 8) >>
                     4) + iVar36);
          uVar25 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar2 + (unsigned int)bVar3) * 9 - (unsigned int)bVar22) - (unsigned int)bVar4) + 8) >>
                     4) + iVar36);
          puVar41[2] = uVar23;
          uVar23 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar4 + (unsigned int)bVar3) * 9 - (unsigned int)bVar2) - (unsigned int)bVar5) + 8) >>
                     4) + iVar36);
          uVar26 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar5 + (unsigned int)bVar4) * 9 - (unsigned int)bVar6) - (unsigned int)bVar3) + 8) >>
                     4) + iVar36);
          puVar41[3] = uVar24;
          uVar24 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar6 + (unsigned int)bVar5) * 9 - (unsigned int)bVar7) - (unsigned int)bVar4) + 8) >>
                     4) + iVar36);
          puVar41[4] = uVar25;
          puVar41[5] = uVar23;
          puVar41[6] = uVar26;
          puVar41[7] = uVar24;
          pbVar33 = pbVar33 + param_4;
          puVar41 = puVar41 + 8;
          *puVar41 = *(unsigned char *)
                      (((int)(((((unsigned int)bVar7 + (unsigned int)bVar6) * 9 - (unsigned int)bVar8) - (unsigned int)bVar5) + 8)
                       >> 4) + iVar36);
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
        puVar41 = (unsigned char *)(param_2 + 2);
        lVar43 = 8;
        pbVar33 = abStack_100;
        do {
          bVar22 = pbVar33[9];
          bVar1 = pbVar33[0x11];
          bVar2 = pbVar33[0x19];
          bVar3 = pbVar33[1];
          bVar4 = pbVar33[0x12];
          bVar5 = pbVar33[10];
          bVar6 = pbVar33[0x1a];
          bVar7 = pbVar33[0x1b];
          bVar8 = pbVar33[0x13];
          bVar9 = pbVar33[0xb];
          bVar10 = pbVar33[3];
          bVar11 = pbVar33[0x14];
          bVar12 = pbVar33[0xc];
          bVar13 = pbVar33[2];
          bVar14 = pbVar33[0xd];
          bVar15 = pbVar33[0x1c];
          bVar16 = pbVar33[0x15];
          bVar17 = pbVar33[4];
          bVar18 = pbVar33[0x1d];
          bVar19 = pbVar33[5];
          puVar41[-2] = *(unsigned char *)
                         (((int)(((((unsigned int)pbVar33[8] + (unsigned int)pbVar33[0x10]) * 9 -
                                  (unsigned int)pbVar33[0x18]) - (unsigned int)*pbVar33) + 8) >> 4) + iVar36);
          bVar20 = pbVar33[0x16];
          bVar21 = pbVar33[0xe];
          puVar41[-1] = *(unsigned char *)
                         (((int)(((((unsigned int)bVar1 + (unsigned int)bVar22) * 9 - (unsigned int)bVar2) - (unsigned int)bVar3) +
                                8) >> 4) + iVar36);
          *puVar41 = *(unsigned char *)
                      (((int)(((((unsigned int)bVar4 + (unsigned int)bVar5) * 9 - (unsigned int)bVar6) - (unsigned int)bVar13) + 8)
                       >> 4) + iVar36);
          puVar41[1] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar8 + (unsigned int)bVar9) * 9 - (unsigned int)bVar7) - (unsigned int)bVar10) + 8
                               ) >> 4) + iVar36);
          puVar41[2] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar11 + (unsigned int)bVar12) * 9 - (unsigned int)bVar15) - (unsigned int)bVar17)
                               + 8) >> 4) + iVar36);
          puVar41[3] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar16 + (unsigned int)bVar14) * 9 - (unsigned int)bVar18) - (unsigned int)bVar19)
                               + 8) >> 4) + iVar36);
          bVar22 = pbVar33[0xf];
          bVar1 = pbVar33[0x17];
          bVar2 = pbVar33[0x1f];
          bVar3 = pbVar33[7];
          puVar41[4] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar20 + (unsigned int)bVar21) * 9 - (unsigned int)pbVar33[0x1e]) -
                                (unsigned int)pbVar33[6]) + 8) >> 4) + iVar36);
          puVar41[5] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar1 + (unsigned int)bVar22) * 9 - (unsigned int)bVar2) - (unsigned int)bVar3) + 8
                               ) >> 4) + iVar36);
          puVar41 = puVar41 + param_4;
          lVar43 = lVar43 + -1;
          pbVar33 = pbVar33 + 8;
        } while (lVar43 != 0);
      }
      else {
        do {
          bVar22 = *pbVar33;
          bVar1 = pbVar33[-1];
          bVar2 = pbVar33[-2];
          bVar3 = pbVar33[1];
          bVar4 = pbVar33[2];
          bVar5 = pbVar33[3];
          bVar6 = pbVar33[4];
          bVar7 = pbVar33[5];
          bVar8 = pbVar33[6];
          bVar9 = pbVar33[7];
          puVar41[1] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar1 + (unsigned int)bVar2) * 9 - (unsigned int)pbVar33[-3]) -
                                (unsigned int)bVar22) + 8) >> 4) + iVar36);
          uVar23 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar22 + (unsigned int)bVar3) * 9 - (unsigned int)bVar4) - (unsigned int)bVar1) + 8) >>
                     4) + iVar36);
          uVar24 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar4 + (unsigned int)bVar3) * 9 - (unsigned int)bVar22) - (unsigned int)bVar5) + 8) >>
                     4) + iVar36);
          uVar25 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar5 + (unsigned int)bVar4) * 9 - (unsigned int)bVar6) - (unsigned int)bVar3) + 8) >>
                     4) + iVar36);
          puVar41[2] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar22 + (unsigned int)bVar1) * 9 - (unsigned int)bVar3) - (unsigned int)bVar2) + 8
                               ) >> 4) + iVar36);
          uVar26 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar6 + (unsigned int)bVar5) * 9 - (unsigned int)bVar7) - (unsigned int)bVar4) + 8) >>
                     4) + iVar36);
          puVar41[3] = uVar23;
          uVar23 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar7 + (unsigned int)bVar6) * 9 - (unsigned int)bVar8) - (unsigned int)bVar5) + 8) >>
                     4) + iVar36);
          puVar41[4] = uVar24;
          puVar41[5] = uVar25;
          puVar41[6] = uVar26;
          puVar41[7] = uVar23;
          pbVar33 = pbVar33 + param_4;
          puVar41 = puVar41 + 8;
          *puVar41 = *(unsigned char *)
                      (((int)(((((unsigned int)bVar8 + (unsigned int)bVar7) * 9 - (unsigned int)bVar9) - (unsigned int)bVar6) + 8)
                       >> 4) + iVar36);
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
        iVar31 = iVar32 + param_4 + 2;
        uStack_150 = 8;
        iVar42 = (iVar32 - param_3) + param_2 + param_4 + 1;
        pbVar33 = abStack_100 + 8;
        do {
          lVar43 = 2;
          iVar40 = 0;
          do {
            iVar34 = iVar40 + iVar32;
            bVar22 = pbVar33[iVar40 + 9];
            bVar1 = pbVar33[iVar40 + 1];
            bVar2 = pbVar33[iVar40 + -6];
            bVar3 = pbVar33[iVar40 + -7];
            bVar4 = pbVar33[iVar40 + 0x11];
            bVar5 = pbVar33[iVar40 + 0x12];
            bVar6 = pbVar33[iVar40 + 2];
            bVar7 = pbVar33[iVar40 + 10];
            *(unsigned char *)((iVar42 - iVar32) + -1 + iVar34) =
                 *(unsigned char *)
                  (((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)(pbVar33 + 8)[iVar40] +
                                                   (unsigned int)pbVar33[iVar40]) * 9 -
                                                  (unsigned int)pbVar33[iVar40 + 0x10]) -
                                                 (unsigned int)pbVar33[iVar34 + (-8 - iVar32)]) + 8) >> 4) +
                                         iVar36) +
                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((iVar31 - iVar32) + -2 + iVar34)
                                                   + (unsigned int)*(unsigned char *)(iVar40 + iVar32)) * 9 -
                                                  (unsigned int)*(unsigned char *)((iStack_148 - iVar32) + iVar34)) -
                                                 (unsigned int)*(unsigned char *)((iVar31 - iVar32) + param_4 + -2 +
                                                                iVar34)) + 8) >> 4) + iVar36) + 1)
                   >> 1) + iVar36);
            bVar8 = pbVar33[iVar40 + -5];
            *(unsigned char *)(iVar40 + iVar42) =
                 *(unsigned char *)
                  (((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((-1 - param_4) + iVar31 + iVar40
                                                                   ) +
                                                   (unsigned int)*(unsigned char *)((param_3 - param_2) + iVar42 +
                                                                  iVar40)) * 9 -
                                                  (unsigned int)*(unsigned char *)(param_4 + -1 + iVar31 + iVar40)) -
                                                 (unsigned int)*(unsigned char *)(iVar40 + iStack_148 + 1)) + 8) >> 4
                                          ) + iVar36) +
                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar22 + (unsigned int)bVar1) * 9 - (unsigned int)bVar3) -
                                                 (unsigned int)bVar4) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            bVar22 = pbVar33[iVar40 + 0xb];
            bVar1 = pbVar33[iVar40 + 3];
            bVar3 = pbVar33[iVar40 + 0x13];
            *(unsigned char *)(iVar42 + 1 + iVar40) =
                 *(unsigned char *)
                  (((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar40 + iVar31) +
                                                   (unsigned int)*(unsigned char *)(iVar40 + iVar32 + 2)) * 9 -
                                                  (unsigned int)*(unsigned char *)(iVar31 + param_4 + iVar40)) -
                                                 (unsigned int)*(unsigned char *)(iVar40 + iStack_148 + 2)) + 8) >> 4
                                          ) + iVar36) +
                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar6 + (unsigned int)bVar7) * 9 - (unsigned int)bVar2) -
                                                 (unsigned int)bVar5) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            *(unsigned char *)(iVar42 + 2 + iVar40) =
                 *(unsigned char *)
                  (((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar1 + (unsigned int)bVar22) * 9 - (unsigned int)bVar8) -
                                                 (unsigned int)bVar3) + 8) >> 4) + iVar36) +
                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((1 - param_4) + iVar31 + iVar40)
                                                   + (unsigned int)*(unsigned char *)(iVar31 + 1 + iVar40)) * 9 -
                                                  (unsigned int)*(unsigned char *)(param_4 + 1 + iVar31 + iVar40)) -
                                                 (unsigned int)*(unsigned char *)(iStack_148 + 3 + iVar40)) + 8) >> 4
                                          ) + iVar36) + 1) >> 1) + iVar36);
            iVar40 = iVar40 + 4;
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
          uVar35 = (unsigned __int64)uStack_150;
          iStack_148 = iStack_148 + param_4;
          iVar32 = iVar32 + param_4;
          uStack_150 = (unsigned int)(uVar35 - 1);
          iVar31 = iVar31 + param_4;
          iVar42 = iVar42 + param_4;
          pbVar33 = pbVar33 + 8;
        } while (uVar35 - 1 != 0);
      }
    }
    else {
      iVar32 = param_3 - param_4;
      pbVar33 = (unsigned char *)(iVar32 - param_4);
      if (param_7 == 0) {
        puVar41 = (unsigned char *)(param_2 + 2);
        pbVar38 = (unsigned char *)(param_3 + param_4 + 2);
        pbVar39 = (unsigned char *)(iVar32 + 2);
        lVar43 = 8;
        do {
          puVar41[-2] = *(unsigned char *)
                         (((int)(((((unsigned int)pbVar39[param_4 + -2] + (unsigned int)pbVar39[-2]) * 9 -
                                  (unsigned int)pbVar38[-2]) - (unsigned int)*pbVar33) + 8) >> 4) + iVar36);
          puVar41[-1] = *(unsigned char *)
                         (((int)(((((unsigned int)pbVar39[param_4 + -1] + (unsigned int)pbVar39[-1]) * 9 -
                                  (unsigned int)pbVar38[-1]) - (unsigned int)pbVar33[1]) + 8) >> 4) + iVar36);
          *puVar41 = *(unsigned char *)
                      (((int)(((((unsigned int)pbVar39[param_4] + (unsigned int)*pbVar39) * 9 - (unsigned int)pbVar33[2]) -
                              (unsigned int)*pbVar38) + 8) >> 4) + iVar36);
          puVar41[1] = *(unsigned char *)
                        (((int)(((((unsigned int)pbVar39[param_4 + 1] + (unsigned int)pbVar39[1]) * 9 -
                                 (unsigned int)pbVar38[1]) - (unsigned int)pbVar33[3]) + 8) >> 4) + iVar36);
          puVar41[2] = *(unsigned char *)
                        (((int)(((((unsigned int)pbVar39[param_4 + 2] + (unsigned int)pbVar39[2]) * 9 -
                                 (unsigned int)pbVar38[2]) - (unsigned int)pbVar33[4]) + 8) >> 4) + iVar36);
          puVar41[3] = *(unsigned char *)
                        (((int)(((((unsigned int)pbVar39[param_4 + 3] + (unsigned int)pbVar39[3]) * 9 -
                                 (unsigned int)pbVar38[3]) - (unsigned int)pbVar33[5]) + 8) >> 4) + iVar36);
          puVar41[4] = *(unsigned char *)
                        (((int)(((((unsigned int)pbVar39[param_4 + 4] + (unsigned int)pbVar39[4]) * 9 -
                                 (unsigned int)pbVar38[4]) - (unsigned int)pbVar33[6]) + 8) >> 4) + iVar36);
          pbVar27 = pbVar33 + 7;
          pbVar33 = pbVar33 + param_4;
          pbVar28 = pbVar39 + 5;
          pbVar29 = pbVar39 + param_4 + 5;
          pbVar39 = pbVar39 + param_4;
          pbVar30 = pbVar38 + 5;
          pbVar38 = pbVar38 + param_4;
          puVar41[5] = *(unsigned char *)
                        (((int)(((((unsigned int)*pbVar29 + (unsigned int)*pbVar28) * 9 - (unsigned int)*pbVar30) -
                                (unsigned int)*pbVar27) + 8) >> 4) + iVar36);
          puVar41 = puVar41 + param_4;
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
      }
      else {
        pbVar38 = pbVar33 + 2;
        puVar41 = &uStack_101;
        lVar43 = 0xb;
        do {
          bVar22 = *pbVar38;
          bVar1 = pbVar38[-1];
          bVar2 = pbVar38[-2];
          bVar3 = pbVar38[1];
          bVar4 = pbVar38[2];
          bVar5 = pbVar38[3];
          bVar6 = pbVar38[4];
          bVar7 = pbVar38[5];
          bVar8 = pbVar38[6];
          bVar9 = pbVar38[7];
          puVar41[1] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar2 + (unsigned int)bVar1) * 9 - (unsigned int)pbVar38[-3]) -
                                (unsigned int)bVar22) + 8) >> 4) + iVar36);
          uVar23 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar22 + (unsigned int)bVar3) * 9 - (unsigned int)bVar1) - (unsigned int)bVar4) + 8) >>
                     4) + iVar36);
          uVar24 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar4 + (unsigned int)bVar3) * 9 - (unsigned int)bVar22) - (unsigned int)bVar5) + 8) >>
                     4) + iVar36);
          puVar41[2] = *(unsigned char *)
                        (((int)(((((unsigned int)bVar1 + (unsigned int)bVar22) * 9 - (unsigned int)bVar2) - (unsigned int)bVar3) + 8
                               ) >> 4) + iVar36);
          uVar25 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar5 + (unsigned int)bVar4) * 9 - (unsigned int)bVar6) - (unsigned int)bVar3) + 8) >>
                     4) + iVar36);
          puVar41[3] = uVar23;
          uVar23 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar6 + (unsigned int)bVar5) * 9 - (unsigned int)bVar7) - (unsigned int)bVar4) + 8) >>
                     4) + iVar36);
          puVar41[4] = uVar24;
          uVar24 = *(unsigned char *)
                    (((int)(((((unsigned int)bVar7 + (unsigned int)bVar6) * 9 - (unsigned int)bVar8) - (unsigned int)bVar5) + 8) >>
                     4) + iVar36);
          puVar41[5] = uVar25;
          puVar41[6] = uVar23;
          puVar41[7] = uVar24;
          pbVar38 = pbVar38 + param_4;
          puVar41 = puVar41 + 8;
          *puVar41 = *(unsigned char *)
                      (((int)(((((unsigned int)bVar8 + (unsigned int)bVar7) * 9 - (unsigned int)bVar9) - (unsigned int)bVar6) + 8)
                       >> 4) + iVar36);
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
        iVar31 = iVar32 + param_4 + 2;
        uStack_150 = 8;
        iVar42 = (iVar32 - param_3) + param_2 + param_4 + 1;
        pbVar38 = abStack_100 + 8;
        do {
          lVar43 = 2;
          iVar40 = 0;
          do {
            iVar34 = iVar40 + iVar32;
            bVar22 = pbVar38[iVar40 + 1];
            bVar1 = pbVar38[iVar40 + 9];
            bVar2 = pbVar38[iVar40 + -6];
            bVar3 = pbVar38[iVar40 + -7];
            bVar4 = pbVar38[iVar40 + 0x11];
            bVar5 = pbVar38[iVar40 + 10];
            bVar6 = pbVar38[iVar40 + 2];
            bVar7 = pbVar38[iVar40 + 0x12];
            *(unsigned char *)((iVar42 - iVar32) + -1 + iVar34) =
                 *(unsigned char *)
                  (((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)(pbVar38 + 8)[iVar40] +
                                                   (unsigned int)pbVar38[iVar40]) * 9 -
                                                  (unsigned int)pbVar38[iVar40 + 0x10]) -
                                                 (unsigned int)pbVar38[iVar34 + (-8 - iVar32)]) + 8) >> 4) +
                                         iVar36) +
                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((iVar31 - iVar32) + -2 + iVar34)
                                                   + (unsigned int)*(unsigned char *)(iVar40 + iVar32)) * 9 -
                                                  (unsigned int)pbVar33[iVar34 - iVar32]) -
                                                 (unsigned int)*(unsigned char *)((iVar31 - iVar32) + param_4 + -2 +
                                                                iVar34)) + 8) >> 4) + iVar36) + 1)
                   >> 1) + iVar36);
            *(unsigned char *)(iVar42 + iVar40) =
                 *(unsigned char *)
                  (((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((-1 - param_4) + iVar31 + iVar40
                                                                   ) +
                                                   (unsigned int)*(unsigned char *)((param_3 - param_2) + iVar42 +
                                                                  iVar40)) * 9 -
                                                  (unsigned int)*(unsigned char *)(param_4 + -1 + iVar31 + iVar40)) -
                                                 (unsigned int)pbVar33[iVar40 + 1]) + 8) >> 4) + iVar36) +
                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar22 + (unsigned int)bVar1) * 9 - (unsigned int)bVar3) -
                                                 (unsigned int)bVar4) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            bVar22 = pbVar38[iVar40 + 0xb];
            bVar1 = pbVar38[iVar40 + -5];
            bVar3 = pbVar38[iVar40 + 3];
            bVar4 = pbVar38[iVar40 + 0x13];
            *(unsigned char *)(iVar42 + 1 + iVar40) =
                 *(unsigned char *)
                  (((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)(iVar31 + iVar40) +
                                                   (unsigned int)*(unsigned char *)(iVar32 + 2 + iVar40)) * 9 -
                                                  (unsigned int)*(unsigned char *)(iVar31 + param_4 + iVar40)) -
                                                 (unsigned int)pbVar33[iVar40 + 2]) + 8) >> 4) + iVar36) +
                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar6 + (unsigned int)bVar5) * 9 - (unsigned int)bVar2) -
                                                 (unsigned int)bVar7) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            *(unsigned char *)(iVar42 + 2 + iVar40) =
                 *(unsigned char *)
                  (((int)((unsigned int)*(unsigned char *)(((int)(((((unsigned int)*(unsigned char *)((1 - param_4) + iVar31 + iVar40)
                                                   + (unsigned int)*(unsigned char *)(iVar31 + 1 + iVar40)) * 9 -
                                                  (unsigned int)*(unsigned char *)(param_4 + 1 + iVar31 + iVar40)) -
                                                 (unsigned int)pbVar33[iVar40 + 3]) + 8) >> 4) + iVar36) +
                          (unsigned int)*(unsigned char *)(((int)(((((unsigned int)bVar3 + (unsigned int)bVar22) * 9 - (unsigned int)bVar1) -
                                                 (unsigned int)bVar4) + 8) >> 4) + iVar36) + 1) >> 1) +
                  iVar36);
            iVar40 = iVar40 + 4;
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
          uVar35 = (unsigned __int64)uStack_150;
          pbVar33 = pbVar33 + param_4;
          iVar32 = iVar32 + param_4;
          uStack_150 = (unsigned int)(uVar35 - 1);
          iVar31 = iVar31 + param_4;
          iVar42 = iVar42 + param_4;
          pbVar38 = pbVar38 + 8;
        } while (uVar35 - 1 != 0);
      }
    }
  }
  else if (param_5 == 0) {
    pbVar38 = (unsigned char *)(param_3 + 1);
    iVar32 = param_3 - param_2;
    pbVar33 = pbVar38 + (param_2 - param_3) + 1;
    lVar43 = 8;
    if (param_7 == 0) {
      do {
        pbVar33[-2] = *(unsigned char *)(((int)(((((unsigned int)*pbVar38 + (unsigned int)pbVar38[-1]) * 9 -
                                        (unsigned int)pbVar38[-2]) - (unsigned int)pbVar33[iVar32]) + 8) >> 4) +
                               iVar36);
        pbVar33[-1] = *(unsigned char *)(((int)(((((unsigned int)pbVar33[iVar32] + (unsigned int)*pbVar38) * 9 -
                                        (unsigned int)pbVar38[2]) - (unsigned int)pbVar38[-1]) + 8) >> 4) + iVar36);
        *pbVar33 = *(unsigned char *)(((int)(((((unsigned int)pbVar38[2] + (unsigned int)pbVar33[iVar32]) * 9 -
                                     (unsigned int)pbVar38[3]) - (unsigned int)*pbVar38) + 8) >> 4) + iVar36);
        pbVar33[1] = *(unsigned char *)(((int)(((((unsigned int)pbVar38[3] + (unsigned int)pbVar38[2]) * 9 - (unsigned int)pbVar38[4]
                                       ) - (unsigned int)pbVar33[iVar32]) + 8) >> 4) + iVar36);
        pbVar33[2] = *(unsigned char *)(((int)(((((unsigned int)pbVar38[4] + (unsigned int)pbVar38[3]) * 9 - (unsigned int)pbVar38[5]
                                       ) - (unsigned int)pbVar38[2]) + 8) >> 4) + iVar36);
        pbVar33[3] = *(unsigned char *)(((int)(((((unsigned int)pbVar38[5] + (unsigned int)pbVar38[4]) * 9 - (unsigned int)pbVar38[6]
                                       ) - (unsigned int)pbVar38[3]) + 8) >> 4) + iVar36);
        pbVar33[4] = *(unsigned char *)(((int)(((((unsigned int)pbVar38[6] + (unsigned int)pbVar38[5]) * 9 - (unsigned int)pbVar38[7]
                                       ) - (unsigned int)pbVar38[4]) + 8) >> 4) + iVar36);
        pbVar39 = pbVar38 + 8;
        pbVar27 = pbVar38 + 5;
        pbVar28 = pbVar38 + 7;
        pbVar29 = pbVar38 + 6;
        pbVar38 = pbVar38 + param_4;
        pbVar33[5] = *(unsigned char *)(((int)(((((unsigned int)*pbVar28 + (unsigned int)*pbVar29) * 9 - (unsigned int)*pbVar39) -
                                      (unsigned int)*pbVar27) + 8) >> 4) + iVar36);
        pbVar33 = pbVar33 + param_4;
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
    }
    else {
      do {
        bVar22 = *(unsigned char *)(((int)(((((unsigned int)*pbVar38 + (unsigned int)pbVar38[-1]) * 9 - (unsigned int)pbVar38[-2]) -
                                  (unsigned int)pbVar33[iVar32]) + 8) >> 4) + iVar36);
        pbVar33[-2] = bVar22;
        pbVar33[-2] = *(unsigned char *)(((int)((unsigned int)bVar22 + (unsigned int)*pbVar38 + 1) >> 1) + iVar36);
        bVar22 = *(unsigned char *)(((int)(((((unsigned int)pbVar33[iVar32] + (unsigned int)*pbVar38) * 9 - (unsigned int)pbVar38[2])
                                  - (unsigned int)pbVar38[-1]) + 8) >> 4) + iVar36);
        pbVar33[-1] = bVar22;
        pbVar33[-1] = *(unsigned char *)(((int)((unsigned int)bVar22 + (unsigned int)pbVar33[iVar32] + 1) >> 1) + iVar36);
        *pbVar33 = *(unsigned char *)(((int)(((((unsigned int)pbVar38[2] + (unsigned int)pbVar33[iVar32]) * 9 -
                                     (unsigned int)pbVar38[3]) - (unsigned int)*pbVar38) + 8) >> 4) + iVar36);
        *pbVar33 = *(unsigned char *)(((int)((unsigned int)pbVar38[2] + (unsigned int)*pbVar33 + 1) >> 1) + iVar36);
        bVar22 = *(unsigned char *)(((int)(((((unsigned int)pbVar38[3] + (unsigned int)pbVar38[2]) * 9 - (unsigned int)pbVar38[4]) -
                                  (unsigned int)pbVar33[iVar32]) + 8) >> 4) + iVar36);
        pbVar33[1] = bVar22;
        pbVar33[1] = *(unsigned char *)(((int)((unsigned int)bVar22 + (unsigned int)pbVar38[3] + 1) >> 1) + iVar36);
        bVar22 = *(unsigned char *)(((int)(((((unsigned int)pbVar38[4] + (unsigned int)pbVar38[3]) * 9 - (unsigned int)pbVar38[5]) -
                                  (unsigned int)pbVar38[2]) + 8) >> 4) + iVar36);
        pbVar33[2] = bVar22;
        pbVar33[2] = *(unsigned char *)(((int)((unsigned int)bVar22 + (unsigned int)pbVar38[4] + 1) >> 1) + iVar36);
        bVar22 = *(unsigned char *)(((int)(((((unsigned int)pbVar38[5] + (unsigned int)pbVar38[4]) * 9 - (unsigned int)pbVar38[6]) -
                                  (unsigned int)pbVar38[3]) + 8) >> 4) + iVar36);
        pbVar33[3] = bVar22;
        pbVar33[3] = *(unsigned char *)(((int)((unsigned int)bVar22 + (unsigned int)pbVar38[5] + 1) >> 1) + iVar36);
        bVar22 = *(unsigned char *)(((int)(((((unsigned int)pbVar38[6] + (unsigned int)pbVar38[5]) * 9 - (unsigned int)pbVar38[7]) -
                                  (unsigned int)pbVar38[4]) + 8) >> 4) + iVar36);
        pbVar33[4] = bVar22;
        pbVar33[4] = *(unsigned char *)(((int)((unsigned int)bVar22 + (unsigned int)pbVar38[6] + 1) >> 1) + iVar36);
        bVar22 = *(unsigned char *)(((int)(((((unsigned int)pbVar38[7] + (unsigned int)pbVar38[6]) * 9 - (unsigned int)pbVar38[8]) -
                                  (unsigned int)pbVar38[5]) + 8) >> 4) + iVar36);
        pbVar33[5] = bVar22;
        pbVar39 = pbVar38 + 7;
        pbVar38 = pbVar38 + param_4;
        pbVar33[5] = *(unsigned char *)(((int)((unsigned int)bVar22 + (unsigned int)*pbVar39 + 1) >> 1) + iVar36);
        pbVar33 = pbVar33 + param_4;
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
    }
  }
  else {
    puVar41 = (unsigned char *)(param_3 + -1);
    puVar37 = (unsigned char *)(param_2 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    puVar41 = (unsigned char *)(param_3 + param_4 + -1);
    puVar37 = (unsigned char *)(param_2 + param_4 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = param_3 + param_4 + param_4;
    iVar36 = param_2 + param_4 + param_4;
    puVar41 = (unsigned char *)(iVar32 + -1);
    puVar37 = (unsigned char *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = iVar32 + param_4;
    iVar36 = iVar36 + param_4;
    puVar41 = (unsigned char *)(iVar32 + -1);
    puVar37 = (unsigned char *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = iVar32 + param_4;
    iVar36 = iVar36 + param_4;
    puVar41 = (unsigned char *)(iVar32 + -1);
    puVar37 = (unsigned char *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = iVar32 + param_4;
    iVar36 = iVar36 + param_4;
    puVar41 = (unsigned char *)(iVar32 + -1);
    puVar37 = (unsigned char *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar32 = iVar32 + param_4;
    iVar36 = iVar36 + param_4;
    puVar41 = (unsigned char *)(iVar32 + -1);
    puVar37 = (unsigned char *)(iVar36 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    puVar41 = (unsigned char *)(iVar32 + param_4 + -1);
    puVar37 = (unsigned char *)(iVar36 + param_4 + -1);
    lVar43 = 8;
    do {
      puVar41 = puVar41 + 1;
      puVar37 = puVar37 + 1;
      *puVar37 = *puVar41;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
  }
  return;
}

