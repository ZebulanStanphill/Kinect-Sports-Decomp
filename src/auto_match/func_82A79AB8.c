extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int iStack_130;
extern unsigned int iStack_150;
extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_18c;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


int fn_82A79AB8(unsigned char *param_1,unsigned int param_2,unsigned char *param_3,int param_4,unsigned int param_5)

{
  unsigned char bVar1;
  int iVar2;
  unsigned char *pbVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  unsigned int uVar14;
  int iVar15;
  int iVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  int iVar19;
  int iVar20;
  __int64 lVar21;
  unsigned int uStack_18c;
  int aiStack_160 [4];
  int iStack_150;
  int aiStack_140 [4];
  int iStack_130;
  unsigned int auStack_120 [4];
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_108;
  unsigned int auStack_100 [4];
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  int aiStack_e0 [8];
  int aiStack_c0 [48];
  
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar4 = 0;
  }
  else {
    uStack_18c = param_2 >> 1;
    pbVar6 = param_3;
    if (uStack_18c != 0) {
      do {
        uVar7 = uStack_18c;
        if ((param_5 & 0xffff) <= uStack_18c) {
          uVar7 = param_5 & 0xffff;
        }
        uStack_18c = uStack_18c - uVar7;
        uVar9 = 0;
        uVar17 = 0;
        iVar4 = 0;
        lVar21 = 5;
        pbVar5 = param_1;
        do {
          if (uVar17 < uVar7) {
            bVar1 = pbVar5[1];
            *(unsigned int *)((int)aiStack_140 + iVar4) = (*pbVar5 - 0x80) * 0x100;
            pbVar5 = pbVar5 + 2;
            *(unsigned int *)((int)aiStack_160 + iVar4) = (bVar1 - 0x80) * 0x100;
          }
          else {
            *(unsigned int *)((int)aiStack_140 + iVar4) = 0;
            *(unsigned int *)((int)aiStack_160 + iVar4) = 0;
          }
          uVar17 = uVar17 + 1;
          iVar4 = iVar4 + 4;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        do {
          iVar4 = *(int *)(&lbl_820A6CF8 + uVar9);
          iVar2 = *(int *)(&lbl_820A6D14 + uVar9);
          iVar16 = aiStack_140[0] * iVar2 + aiStack_140[1] * iVar4 >> 8;
          *(unsigned int *)((int)auStack_100 + uVar9) = 0;
          *(unsigned int *)((int)auStack_120 + uVar9) = 0;
          iVar11 = iVar16 - aiStack_140[2];
          if (iVar16 <= aiStack_140[2]) {
            iVar11 = aiStack_140[2] - iVar16;
          }
          iVar16 = aiStack_140[1] * iVar2 + aiStack_140[2] * iVar4 >> 8;
          iVar12 = iVar16 - aiStack_140[3];
          if (iVar16 <= aiStack_140[3]) {
            iVar12 = aiStack_140[3] - iVar16;
          }
          iVar16 = aiStack_140[2] * iVar2 + aiStack_140[3] * iVar4 >> 8;
          if (iStack_130 < iVar16) {
            iVar16 = iVar16 - iStack_130;
          }
          else {
            iVar16 = iStack_130 - iVar16;
          }
          iVar16 = (iVar16 + iVar12 + iVar11) / 0xc;
          if (iVar16 < 0x10) {
            iVar16 = 0x10;
          }
          iVar11 = aiStack_160[0] * iVar2 + aiStack_160[1] * iVar4 >> 8;
          iVar12 = iVar11 - aiStack_160[2];
          if (iVar11 <= aiStack_160[2]) {
            iVar12 = aiStack_160[2] - iVar11;
          }
          iVar11 = aiStack_160[1] * iVar2 + aiStack_160[2] * iVar4 >> 8;
          iVar13 = iVar11 - aiStack_160[3];
          if (iVar11 <= aiStack_160[3]) {
            iVar13 = aiStack_160[3] - iVar11;
          }
          iVar11 = aiStack_160[2] * iVar2 + aiStack_160[3] * iVar4 >> 8;
          if (iStack_150 < iVar11) {
            iVar11 = iVar11 - iStack_150;
          }
          else {
            iVar11 = iStack_150 - iVar11;
          }
          iVar11 = (iVar11 + iVar13 + iVar12) / 0xc;
          if (iVar11 < 0x10) {
            iVar11 = 0x10;
          }
          *(int *)((int)aiStack_e0 + uVar9) = iVar16;
          *(int *)((int)aiStack_c0 + uVar9) = iVar11;
          if (2 < uVar7) {
            lVar21 = (unsigned __int64)uVar7 - 2;
            pbVar5 = param_1 + 3;
            iVar12 = aiStack_140[1];
            iVar20 = aiStack_140[0];
            iVar13 = aiStack_160[1];
            iVar8 = aiStack_160[0];
            do {
              iVar19 = iVar13;
              iVar15 = iVar12;
              pbVar3 = pbVar5 + 1;
              iVar12 = iVar20 * iVar2 + iVar15 * iVar4 >> 8;
              uVar17 = (int)((*pbVar3 - 0x80) * 0x100 - iVar12) / iVar16;
              if ((int)uVar17 < 8) {
                if ((int)uVar17 < -8) {
                  uVar17 = 0xfffffff8;
                }
              }
              else {
                uVar17 = 7;
              }
              iVar12 = uVar17 * iVar16 + iVar12;
              if (iVar12 < 0x8000) {
                if (iVar12 < -0x8000) {
                  iVar12 = -0x8000;
                }
              }
              else {
                iVar12 = 0x7fff;
              }
              iVar16 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar16 >> 8;
              if (iVar16 < 0x10) {
                iVar16 = 0x10;
              }
              pbVar5 = pbVar5 + 2;
              bVar1 = *pbVar5;
              iVar20 = iVar12 + (*pbVar3 - 0x80) * -0x100;
              iVar13 = iVar8 * iVar2 + iVar19 * iVar4 >> 8;
              *(int *)((int)auStack_100 + uVar9) =
                   (iVar20 * iVar20 >> 7) + *(int *)((int)auStack_100 + uVar9);
              uVar17 = (int)((bVar1 - 0x80) * 0x100 - iVar13) / iVar11;
              if ((int)uVar17 < 8) {
                if ((int)uVar17 < -8) {
                  uVar17 = 0xfffffff8;
                }
              }
              else {
                uVar17 = 7;
              }
              iVar13 = uVar17 * iVar11 + iVar13;
              if (iVar13 < 0x8000) {
                if (iVar13 < -0x8000) {
                  iVar13 = -0x8000;
                }
              }
              else {
                iVar13 = 0x7fff;
              }
              iVar11 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar11 >> 8;
              if (iVar11 < 0x10) {
                iVar11 = 0x10;
              }
              iVar20 = iVar13 + (bVar1 - 0x80) * -0x100;
              *(int *)((int)auStack_120 + uVar9) =
                   (iVar20 * iVar20 >> 7) + *(int *)((int)auStack_120 + uVar9);
              lVar21 = lVar21 + -1;
              iVar20 = iVar15;
              iVar8 = iVar19;
            } while (lVar21 != 0);
          }
          uVar9 = uVar9 + 4;
        } while (uVar9 < 0x1c);
        uVar17 = auStack_100[0];
        if (auStack_100[1] < auStack_100[0]) {
          uVar17 = auStack_100[1];
        }
        uVar14 = (unsigned int)(auStack_100[1] < auStack_100[0]);
        uVar9 = auStack_120[0];
        if (auStack_120[1] < auStack_120[0]) {
          uVar9 = auStack_120[1];
        }
        uVar18 = (unsigned int)(auStack_120[1] < auStack_120[0]);
        if (auStack_100[2] < uVar17) {
          uVar14 = 2;
          uVar17 = auStack_100[2];
        }
        if (auStack_120[2] < uVar9) {
          uVar18 = 2;
          uVar9 = auStack_120[2];
        }
        if (auStack_100[3] < uVar17) {
          uVar14 = 3;
          uVar17 = auStack_100[3];
        }
        if (auStack_120[3] < uVar9) {
          uVar18 = 3;
          uVar9 = auStack_120[3];
        }
        if (uStack_f0 < uVar17) {
          uVar14 = 4;
          uVar17 = uStack_f0;
        }
        if (uStack_110 < uVar9) {
          uVar18 = 4;
          uVar9 = uStack_110;
        }
        if (uStack_ec < uVar17) {
          uVar14 = 5;
          uVar17 = uStack_ec;
        }
        if (uStack_10c < uVar9) {
          uVar18 = 5;
          uVar9 = uStack_10c;
        }
        if (uStack_e8 < uVar17) {
          uVar14 = 6;
        }
        if (uStack_108 < uVar9) {
          uVar18 = 6;
        }
        iVar4 = *(int *)(&lbl_820A6CF8 + uVar18 * 4);
        iVar2 = *(int *)(&lbl_820A6CF8 + uVar14 * 4);
        iVar16 = aiStack_e0[uVar14];
        iVar11 = aiStack_c0[uVar18];
        iVar12 = *(int *)(&lbl_820A6D14 + uVar14 * 4);
        iVar13 = *(int *)(&lbl_820A6D14 + uVar18 * 4);
        *pbVar6 = (unsigned char)uVar14;
        pbVar6[1] = (unsigned char)uVar18;
        *(short *)(pbVar6 + 2) = (short)iVar16;
        *(short *)(pbVar6 + 4) = (short)iVar11;
        *(short *)(pbVar6 + 6) = (short)aiStack_140[1];
        *(short *)(pbVar6 + 8) = (short)aiStack_160[1];
        *(short *)(pbVar6 + 10) = (short)aiStack_140[0];
        *(short *)(pbVar6 + 0xc) = (short)aiStack_160[0];
        pbVar6 = pbVar6 + 0xe;
        param_1 = param_1 + 4;
        iVar20 = aiStack_160[0];
        iVar8 = aiStack_160[1];
        iVar15 = aiStack_140[0];
        iVar19 = aiStack_140[1];
        for (lVar21 = (unsigned __int64)uVar7 - 2; lVar21 != 0; lVar21 = lVar21 + -1) {
          iVar10 = iVar12 * iVar15 + iVar2 * iVar19 >> 8;
          uVar7 = (int)((*param_1 - 0x80) * 0x100 - iVar10) / iVar16;
          if ((int)uVar7 < 8) {
            if ((int)uVar7 < -8) {
              uVar7 = 0xfffffff8;
            }
          }
          else {
            uVar7 = 7;
          }
          iVar10 = uVar7 * iVar16 + iVar10;
          if (iVar10 < 0x8000) {
            if (iVar10 < -0x8000) {
              iVar10 = -0x8000;
            }
          }
          else {
            iVar10 = 0x7fff;
          }
          iVar16 = *(int *)(&lbl_820A6D30 + (uVar7 & 0xf) * 4) * iVar16 >> 8;
          if (iVar16 < 0x10) {
            iVar16 = 0x10;
          }
          iVar15 = iVar13 * iVar20 + iVar4 * iVar8 >> 8;
          uVar17 = (int)((param_1[1] - 0x80) * 0x100 - iVar15) / iVar11;
          param_1 = param_1 + 2;
          if ((int)uVar17 < 8) {
            if ((int)uVar17 < -8) {
              uVar17 = 0xfffffff8;
            }
          }
          else {
            uVar17 = 7;
          }
          iVar15 = uVar17 * iVar11 + iVar15;
          if (iVar15 < 0x8000) {
            if (iVar15 < -0x8000) {
              iVar15 = -0x8000;
            }
          }
          else {
            iVar15 = 0x7fff;
          }
          iVar11 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar11 >> 8;
          if (iVar11 < 0x10) {
            iVar11 = 0x10;
          }
          *pbVar6 = (char)uVar7 << 4 | (unsigned char)uVar17 & 0xf;
          pbVar6 = pbVar6 + 1;
          iVar20 = iVar8;
          iVar8 = iVar15;
          iVar15 = iVar19;
          iVar19 = iVar10;
        }
      } while (uStack_18c != 0);
    }
    iVar4 = (int)pbVar6 - (int)param_3;
  }
  return iVar4;
}

