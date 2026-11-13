extern unsigned int *auStack_e0;
extern unsigned int iStack_f0;
extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


int fn_82A78B38(unsigned char *param_1,unsigned __int64 param_2,unsigned char *param_3,int param_4,unsigned __int64 param_5)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  int iVar8;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  int *piVar12;
  int iVar13;
  unsigned int uVar14;
  int iVar15;
  __int64 lVar16;
  int aiStack_100 [4];
  int iStack_f0;
  unsigned int auStack_e0 [4];
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  int aiStack_c0 [48];
  
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar3 = 0;
  }
  else {
    pbVar4 = param_3;
    do {
      uVar6 = param_2;
      if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
        uVar6 = param_5 & 0xffff;
      }
      param_2 = param_2 - uVar6;
      pbVar2 = param_1 + -1;
      uVar5 = 0;
      piVar12 = aiStack_100;
      lVar16 = 5;
      do {
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          pbVar2 = pbVar2 + 1;
          *piVar12 = (*pbVar2 - 0x80) * 0x100;
        }
        else {
          *piVar12 = 0;
        }
        uVar5 = uVar5 + 1;
        piVar12 = piVar12 + 1;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      uVar11 = 0;
      do {
        iVar3 = *(int *)(&lbl_820A6CF8 + uVar11);
        iVar10 = *(int *)(&lbl_820A6D14 + uVar11);
        *(unsigned int *)((int)auStack_e0 + uVar11) = 0;
        iVar13 = aiStack_100[0] * iVar10 + aiStack_100[1] * iVar3 >> 8;
        iVar8 = iVar13 - aiStack_100[2];
        if (iVar13 <= aiStack_100[2]) {
          iVar8 = aiStack_100[2] - iVar13;
        }
        iVar13 = aiStack_100[1] * iVar10 + aiStack_100[2] * iVar3 >> 8;
        iVar9 = iVar13 - aiStack_100[3];
        if (iVar13 <= aiStack_100[3]) {
          iVar9 = aiStack_100[3] - iVar13;
        }
        iVar13 = aiStack_100[2] * iVar10 + aiStack_100[3] * iVar3 >> 8;
        if (iStack_f0 < iVar13) {
          iVar13 = iVar13 - iStack_f0;
        }
        else {
          iVar13 = iStack_f0 - iVar13;
        }
        iVar13 = (iVar13 + iVar9 + iVar8) / 0xc;
        if (iVar13 < 0x10) {
          iVar13 = 0x10;
        }
        *(int *)((int)aiStack_c0 + uVar11) = iVar13;
        if (2 < (uVar6 & 0xffffffff)) {
          lVar16 = uVar6 - 2;
          pbVar2 = param_1 + 1;
          iVar8 = aiStack_100[1];
          iVar9 = aiStack_100[0];
          do {
            iVar15 = iVar8;
            pbVar2 = pbVar2 + 1;
            iVar8 = iVar9 * iVar10 + iVar15 * iVar3 >> 8;
            uVar14 = (int)((*pbVar2 - 0x80) * 0x100 - iVar8) / iVar13;
            if ((int)uVar14 < 8) {
              if ((int)uVar14 < -8) {
                uVar14 = 0xfffffff8;
              }
            }
            else {
              uVar14 = 7;
            }
            iVar8 = uVar14 * iVar13 + iVar8;
            if (iVar8 < 0x8000) {
              if (iVar8 < -0x8000) {
                iVar8 = -0x8000;
              }
            }
            else {
              iVar8 = 0x7fff;
            }
            iVar13 = *(int *)(&lbl_820A6D30 + (uVar14 & 0xf) * 4) * iVar13 >> 8;
            if (iVar13 < 0x10) {
              iVar13 = 0x10;
            }
            iVar9 = iVar8 + (*pbVar2 - 0x80) * -0x100;
            *(int *)((int)auStack_e0 + uVar11) =
                 (iVar9 * iVar9 >> 7) + *(int *)((int)auStack_e0 + uVar11);
            lVar16 = lVar16 + -1;
            iVar9 = iVar15;
          } while (lVar16 != 0);
        }
        uVar11 = uVar11 + 4;
      } while (uVar11 < 0x1c);
      uVar11 = auStack_e0[0];
      if (auStack_e0[1] < auStack_e0[0]) {
        uVar11 = auStack_e0[1];
      }
      uVar14 = (unsigned int)(auStack_e0[1] < auStack_e0[0]);
      if (auStack_e0[2] < uVar11) {
        uVar14 = 2;
        uVar11 = auStack_e0[2];
      }
      if (auStack_e0[3] < uVar11) {
        uVar14 = 3;
        uVar11 = auStack_e0[3];
      }
      if (uStack_d0 < uVar11) {
        uVar14 = 4;
        uVar11 = uStack_d0;
      }
      if (uStack_cc < uVar11) {
        uVar14 = 5;
        uVar11 = uStack_cc;
      }
      if (uStack_c8 < uVar11) {
        uVar14 = 6;
      }
      iVar3 = *(int *)(&lbl_820A6CF8 + uVar14 * 4);
      iVar10 = aiStack_c0[uVar14];
      iVar13 = *(int *)(&lbl_820A6D14 + uVar14 * 4);
      *pbVar4 = (unsigned char)uVar14;
      *(short *)(pbVar4 + 1) = (short)iVar10;
      *(short *)(pbVar4 + 3) = (short)aiStack_100[1];
      *(short *)(pbVar4 + 5) = (short)aiStack_100[0];
      pbVar4 = pbVar4 + 7;
      uVar6 = uVar6 - 2;
      uVar5 = uVar6;
      param_1 = param_1 + 2;
      iVar9 = aiStack_100[0];
      iVar8 = aiStack_100[1];
      while (uVar6 != 0) {
        iVar15 = iVar13 * iVar9 + iVar3 * iVar8 >> 8;
        pbVar2 = param_1 + 1;
        uVar7 = uVar5 - 1;
        uVar11 = (int)((*param_1 - 0x80) * 0x100 - iVar15) / iVar10;
        if ((int)uVar11 < 8) {
          if ((int)uVar11 < -8) {
            uVar11 = 0xfffffff8;
          }
        }
        else {
          uVar11 = 7;
        }
        iVar15 = uVar11 * iVar10 + iVar15;
        if (iVar15 < 0x8000) {
          if (iVar15 < -0x8000) {
            iVar15 = -0x8000;
          }
        }
        else {
          iVar15 = 0x7fff;
        }
        iVar10 = *(int *)(&lbl_820A6D30 + (uVar11 & 0xf) * 4) * iVar10 >> 8;
        if (iVar10 < 0x10) {
          iVar10 = 0x10;
        }
        if ((uVar7 & 0xffffffff) == 0) {
          uVar14 = 0;
          iVar9 = iVar8;
          iVar8 = iVar15;
        }
        else {
          bVar1 = *pbVar2;
          iVar8 = iVar3 * iVar15 + iVar13 * iVar8 >> 8;
          pbVar2 = param_1 + 2;
          uVar7 = uVar5 - 2;
          uVar14 = (int)((bVar1 - 0x80) * 0x100 - iVar8) / iVar10;
          if ((int)uVar14 < 8) {
            if ((int)uVar14 < -8) {
              uVar14 = 0xfffffff8;
            }
          }
          else {
            uVar14 = 7;
          }
          iVar8 = iVar10 * uVar14 + iVar8;
          if (iVar8 < 0x8000) {
            if (iVar8 < -0x8000) {
              iVar8 = -0x8000;
            }
          }
          else {
            iVar8 = 0x7fff;
          }
          iVar10 = *(int *)(&lbl_820A6D30 + (uVar14 & 0xf) * 4) * iVar10 >> 8;
          iVar9 = iVar15;
          if (iVar10 < 0x10) {
            iVar10 = 0x10;
          }
        }
        *pbVar4 = (char)uVar11 << 4 | (unsigned char)uVar14 & 0xf;
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar7;
        param_1 = pbVar2;
        uVar6 = uVar7 & 0xffffffff;
      }
    } while ((param_2 & 0xffffffff) != 0);
    iVar3 = (int)pbVar4 - (int)param_3;
  }
  return iVar3;
}

