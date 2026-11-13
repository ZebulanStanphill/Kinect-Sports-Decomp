extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;


int fn_82A7C1B0(unsigned char *param_1,unsigned __int64 param_2,char *param_3,int param_4,unsigned __int64 param_5)

{
  unsigned char *pbVar1;
  unsigned char bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  __int64 lVar12;
  int iVar13;
  int iVar14;
  unsigned __int64 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar10 = 0;
  }
  else {
    pcVar11 = param_3;
    if (0xd < (param_2 & 0xffffffff)) {
      do {
        uVar15 = param_2;
        if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
          uVar15 = param_5 & 0xffff;
        }
        param_2 = param_2 - uVar15;
        iVar10 = *(int *)(&lbl_820A6CF8 + (unsigned int)*param_1 * 4);
        iVar3 = *(int *)(&lbl_820A6D14 + (unsigned int)*param_1 * 4);
        iVar4 = *(int *)(&lbl_820A6CF8 + (unsigned int)param_1[1] * 4);
        iVar5 = *(int *)(&lbl_820A6D14 + (unsigned int)param_1[1] * 4);
        iVar18 = (unsigned int)param_1[3] * 0x100 + (unsigned int)param_1[2];
        iVar19 = (unsigned int)param_1[5] * 0x100 + (unsigned int)param_1[4];
        iVar13 = (unsigned int)param_1[9] * 0x100 + (unsigned int)param_1[8];
        pbVar1 = param_1 + 0xc;
        iVar16 = (unsigned int)param_1[0xb] * 0x100 + (unsigned int)param_1[10];
        iVar17 = (unsigned int)param_1[7] * 0x100 + (unsigned int)param_1[6];
        pbVar7 = param_1 + 0xd;
        param_1 = param_1 + 0xe;
        iVar14 = (unsigned int)*pbVar7 * 0x100 + (unsigned int)*pbVar1;
        *pcVar11 = (char)((unsigned int)iVar16 >> 8) + -0x80;
        pcVar11[1] = (char)((unsigned int)iVar14 >> 8) + -0x80;
        pcVar11[2] = (char)((unsigned int)iVar17 >> 8) + -0x80;
        pcVar11[3] = (char)((unsigned int)iVar13 >> 8) + -0x80;
        pcVar11 = pcVar11 + 4;
        for (lVar12 = uVar15 - 0xe; iVar9 = iVar13, iVar8 = iVar17, lVar12 != 0;
            lVar12 = lVar12 + -1) {
          bVar2 = *param_1;
          uVar6 = (int)(char)bVar2 >> 4;
          param_1 = param_1 + 1;
          iVar17 = (iVar16 * iVar3 + iVar8 * iVar10 >> 8) +
                   ((int)(char)((char)uVar6 << 4) >> 4) * iVar18;
          if (iVar17 < 0x8000) {
            if (iVar17 < -0x8000) {
              iVar17 = -0x8000;
            }
          }
          else {
            iVar17 = 0x7fff;
          }
          iVar18 = *(int *)(&lbl_820A6D30 + (uVar6 & 0xf) * 4) * iVar18 >> 8;
          if (iVar18 < 0x10) {
            iVar18 = 0x10;
          }
          uVar6 = (int)(char)(bVar2 << 4) >> 4;
          *pcVar11 = (char)((unsigned int)iVar17 >> 8) + -0x80;
          iVar13 = (iVar14 * iVar5 + iVar9 * iVar4 >> 8) +
                   ((int)(char)((char)uVar6 << 4) >> 4) * iVar19;
          if (iVar13 < 0x8000) {
            if (iVar13 < -0x8000) {
              iVar13 = -0x8000;
            }
          }
          else {
            iVar13 = 0x7fff;
          }
          iVar19 = *(int *)(&lbl_820A6D30 + (uVar6 & 0xf) * 4) * iVar19 >> 8;
          if (iVar19 < 0x10) {
            iVar19 = 0x10;
          }
          pcVar11[1] = (char)((unsigned int)iVar13 >> 8) + -0x80;
          pcVar11 = pcVar11 + 2;
          iVar16 = iVar8;
          iVar14 = iVar9;
        }
      } while (0xd < (param_2 & 0xffffffff));
    }
    iVar10 = (int)pcVar11 - (int)param_3;
  }
  return iVar10;
}

