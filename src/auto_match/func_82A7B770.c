extern unsigned int lbl_820A6D30;


int fn_82A7B770(unsigned char *param_1,unsigned int param_2,unsigned char *param_3,int param_4,unsigned __int64 param_5)

{
  unsigned char *pbVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned char *pbVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned int uVar16;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar6 = 0;
  }
  else {
    uVar14 = (unsigned __int64)(param_2 >> 2);
    pbVar4 = param_3;
    if (uVar14 != 0) {
      do {
        uVar10 = uVar14;
        if ((param_5 & 0xffff) <= (uVar14 & 0xffffffff)) {
          uVar10 = param_5 & 0xffff;
        }
        *pbVar4 = 1;
        uVar14 = uVar14 - uVar10;
        pbVar4[1] = 1;
        iVar6 = 0x80;
        iVar13 = 0x80;
        pbVar4[2] = 0;
        pbVar4[3] = 0x80;
        pbVar4[4] = 0;
        pbVar4[5] = 0x80;
        iVar11 = (unsigned int)param_1[1] * 0x100 + (unsigned int)*param_1;
        iVar7 = (unsigned int)param_1[3] * 0x100 + (unsigned int)param_1[2];
        pbVar8 = param_1 + 4;
        if (uVar10 == 1) {
          iVar3 = 0;
          iVar15 = 0;
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 - 2;
          iVar3 = (unsigned int)param_1[5] * 0x100 + (unsigned int)*pbVar8;
          pbVar8 = param_1 + 8;
          iVar15 = (unsigned int)param_1[7] * 0x100 + (unsigned int)param_1[6];
        }
        *(short *)(pbVar4 + 6) = (short)iVar3;
        *(short *)(pbVar4 + 8) = (short)iVar15;
        *(short *)(pbVar4 + 10) = (short)iVar11;
        *(short *)(pbVar4 + 0xc) = (short)iVar7;
        pbVar4 = pbVar4 + 0xe;
        param_1 = pbVar8;
        uVar2 = uVar10 & 0xffffffff;
        while (uVar2 != 0) {
          pbVar8 = param_1 + 2;
          iVar11 = iVar3 * 2 - iVar11;
          uVar16 = (int)(((unsigned int)param_1[1] * 0x100 + (unsigned int)*param_1) - iVar11) / iVar6;
          if ((int)uVar16 < 8) {
            if ((int)uVar16 < -8) {
              uVar16 = 0xfffffff8;
            }
          }
          else {
            uVar16 = 7;
          }
          iVar5 = uVar16 * iVar6 + iVar11;
          if (iVar5 < 0x8000) {
            if (iVar5 < -0x8000) {
              iVar5 = -0x8000;
            }
          }
          else {
            iVar5 = 0x7fff;
          }
          iVar6 = *(int *)(&lbl_820A6D30 + (uVar16 & 0xf) * 4) * iVar6 >> 8;
          if (iVar6 < 0x10) {
            iVar6 = 0x10;
          }
          pbVar1 = param_1 + 3;
          iVar7 = iVar15 * 2 - iVar7;
          param_1 = param_1 + 4;
          uVar12 = (int)(((unsigned int)*pbVar1 * 0x100 + (unsigned int)*pbVar8) - iVar7) / iVar13;
          if ((int)uVar12 < 8) {
            if ((int)uVar12 < -8) {
              uVar12 = 0xfffffff8;
            }
          }
          else {
            uVar12 = 7;
          }
          iVar9 = uVar12 * iVar13 + iVar7;
          if (iVar9 < 0x8000) {
            if (iVar9 < -0x8000) {
              iVar9 = -0x8000;
            }
          }
          else {
            iVar9 = 0x7fff;
          }
          iVar13 = *(int *)(&lbl_820A6D30 + (uVar12 & 0xf) * 4) * iVar13 >> 8;
          if (iVar13 < 0x10) {
            iVar13 = 0x10;
          }
          *pbVar4 = (char)uVar16 << 4 | (unsigned char)uVar12 & 0xf;
          pbVar4 = pbVar4 + 1;
          uVar10 = uVar10 - 1;
          iVar11 = iVar3;
          iVar3 = iVar5;
          iVar7 = iVar15;
          iVar15 = iVar9;
          uVar2 = uVar10;
        }
      } while ((uVar14 & 0xffffffff) != 0);
    }
    iVar6 = (int)pbVar4 - (int)param_3;
  }
  return iVar6;
}

