extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;


int fn_82A7C3F0(unsigned char *param_1,unsigned __int64 param_2,unsigned short *param_3,int param_4,unsigned __int64 param_5)

{
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned char bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned char *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned short *puVar12;
  int iVar13;
  __int64 lVar14;
  int iVar15;
  int iVar16;
  unsigned __int64 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar11 = 0;
  }
  else {
    puVar12 = param_3;
    if (0xd < (param_2 & 0xffffffff)) {
      do {
        uVar17 = param_2;
        if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
          uVar17 = param_5 & 0xffff;
        }
        pbVar1 = param_1 + 1;
        param_2 = param_2 - uVar17;
        iVar11 = *(int *)(&lbl_820A6CF8 + (unsigned int)*param_1 * 4);
        iVar4 = *(int *)(&lbl_820A6D14 + (unsigned int)*param_1 * 4);
        iVar5 = *(int *)(&lbl_820A6CF8 + (unsigned int)*pbVar1 * 4);
        iVar13 = (unsigned int)param_1[3] * 0x100 + (unsigned int)param_1[2];
        iVar20 = (unsigned int)param_1[5] * 0x100 + (unsigned int)param_1[4];
        iVar15 = (unsigned int)param_1[9] * 0x100 + (unsigned int)param_1[8];
        pbVar2 = param_1 + 0xc;
        iVar18 = (unsigned int)param_1[0xb] * 0x100 + (unsigned int)param_1[10];
        iVar19 = (unsigned int)param_1[7] * 0x100 + (unsigned int)param_1[6];
        pbVar8 = param_1 + 0xd;
        param_1 = param_1 + 0xe;
        iVar16 = (unsigned int)*pbVar8 * 0x100 + (unsigned int)*pbVar2;
        iVar6 = *(int *)(&lbl_820A6D14 + (unsigned int)*pbVar1 * 4);
        *puVar12 = (short)iVar18;
        puVar12[1] = (short)iVar16;
        puVar12[2] = (short)iVar19;
        puVar12[3] = (short)iVar15;
        puVar12 = puVar12 + 4;
        for (lVar14 = uVar17 - 0xe; iVar10 = iVar15, iVar9 = iVar19, lVar14 != 0;
            lVar14 = lVar14 + -1) {
          bVar3 = *param_1;
          uVar7 = (int)(char)bVar3 >> 4;
          param_1 = param_1 + 1;
          iVar19 = (iVar18 * iVar4 + iVar9 * iVar11 >> 8) +
                   ((int)(char)((char)uVar7 << 4) >> 4) * iVar13;
          if (iVar19 < 0x8000) {
            if (iVar19 < -0x8000) {
              iVar19 = -0x8000;
            }
          }
          else {
            iVar19 = 0x7fff;
          }
          iVar13 = *(int *)(&lbl_820A6D30 + (uVar7 & 0xf) * 4) * iVar13 >> 8;
          if (iVar13 < 0x10) {
            iVar13 = 0x10;
          }
          *puVar12 = (short)iVar19;
          uVar7 = (int)(char)(bVar3 << 4) >> 4;
          iVar15 = (iVar16 * iVar6 + iVar10 * iVar5 >> 8) +
                   ((int)(char)((char)uVar7 << 4) >> 4) * iVar20;
          if (iVar15 < 0x8000) {
            if (iVar15 < -0x8000) {
              iVar15 = -0x8000;
            }
          }
          else {
            iVar15 = 0x7fff;
          }
          iVar20 = *(int *)(&lbl_820A6D30 + (uVar7 & 0xf) * 4) * iVar20 >> 8;
          if (iVar20 < 0x10) {
            iVar20 = 0x10;
          }
          puVar12[1] = (short)iVar15;
          puVar12 = puVar12 + 2;
          iVar18 = iVar9;
          iVar16 = iVar10;
        }
      } while (0xd < (param_2 & 0xffffffff));
    }
    iVar11 = (int)puVar12 - (int)param_3;
  }
  return iVar11;
}

