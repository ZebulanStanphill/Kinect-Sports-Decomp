extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;


int fn_82A7BC00(unsigned char *param_1,unsigned __int64 param_2,char *param_3,int param_4,unsigned __int64 param_5)

{
  unsigned char *pbVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  unsigned __int64 uVar11;
  int iVar12;
  
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar6 = 0;
  }
  else {
    pcVar7 = param_3;
    if (6 < (param_2 & 0xffffffff)) {
      do {
        uVar11 = param_2;
        if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
          uVar11 = param_5 & 0xffff;
        }
        param_2 = param_2 - uVar11;
        iVar6 = *(int *)(&lbl_820A6CF8 + (unsigned int)*param_1 * 4);
        iVar3 = *(int *)(&lbl_820A6D14 + (unsigned int)*param_1 * 4);
        iVar8 = (unsigned int)param_1[2] * 0x100 + (unsigned int)param_1[1];
        pbVar1 = param_1 + 5;
        iVar10 = (unsigned int)param_1[4] * 0x100 + (unsigned int)param_1[3];
        pbVar5 = param_1 + 6;
        param_1 = param_1 + 7;
        iVar12 = (unsigned int)*pbVar5 * 0x100 + (unsigned int)*pbVar1;
        *pcVar7 = (char)((unsigned int)iVar12 >> 8) + -0x80;
        pcVar7[1] = (char)((unsigned int)iVar10 >> 8) + -0x80;
        for (lVar9 = uVar11 - 7; pcVar7 = pcVar7 + 2, lVar9 != 0; lVar9 = lVar9 + -1) {
          bVar2 = *param_1;
          uVar4 = (int)(char)bVar2 >> 4;
          param_1 = param_1 + 1;
          iVar12 = (iVar12 * iVar3 + iVar10 * iVar6 >> 8) +
                   ((int)(char)((char)uVar4 << 4) >> 4) * iVar8;
          if (iVar12 < 0x8000) {
            if (iVar12 < -0x8000) {
              iVar12 = -0x8000;
            }
          }
          else {
            iVar12 = 0x7fff;
          }
          iVar8 = *(int *)(&lbl_820A6D30 + (uVar4 & 0xf) * 4) * iVar8 >> 8;
          if (iVar8 < 0x10) {
            iVar8 = 0x10;
          }
          uVar4 = (int)(char)(bVar2 << 4) >> 4;
          *pcVar7 = (char)((unsigned int)iVar12 >> 8) + -0x80;
          iVar10 = (iVar12 * iVar6 + iVar10 * iVar3 >> 8) +
                   ((int)(char)((char)uVar4 << 4) >> 4) * iVar8;
          if (iVar10 < 0x8000) {
            if (iVar10 < -0x8000) {
              iVar10 = -0x8000;
            }
          }
          else {
            iVar10 = 0x7fff;
          }
          iVar8 = *(int *)(&lbl_820A6D30 + (uVar4 & 0xf) * 4) * iVar8 >> 8;
          if (iVar8 < 0x10) {
            iVar8 = 0x10;
          }
          pcVar7[1] = (char)((unsigned int)iVar10 >> 8) + -0x80;
        }
      } while (6 < (param_2 & 0xffffffff));
    }
    iVar6 = (int)pcVar7 - (int)param_3;
  }
  return iVar6;
}

