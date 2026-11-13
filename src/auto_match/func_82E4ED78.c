extern int fn_82EDDA58();
extern int fn_82EDF558();


void fn_82E4ED78(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned char *pbVar4;
  int iVar5;
  unsigned char *pbVar6;
  int iVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  unsigned char *pbVar11;
  int iVar12;
  unsigned char *pbVar13;
  __int64 lVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  int iVar17;
  unsigned char *puVar18;
  unsigned char *puVar19;
  int iVar20;
  
  iVar12 = *(int *)(param_7 + 0x3924);
  iVar1 = *(int *)(param_7 + 0x38bc);
  uVar10 = iVar12 * param_5;
  iVar20 = ((int)uVar10 >> 2) + (unsigned int)((int)uVar10 < 0 && (uVar10 & 3) != 0);
  param_1 = iVar1 * param_5 + *(int *)(param_7 + 0x38c4) + param_1;
  param_2 = *(int *)(param_7 + 0x38a4) + uVar10 + param_2;
  param_3 = *(int *)(param_7 + 0x38a8) + iVar20 + param_3;
  param_4 = *(int *)(param_7 + 0x38ac) + iVar20 + param_4;
  if (*(int *)(param_7 + 0x3960) == 0) {
    lVar14 = (__int64)(param_6 - param_5 >> 2);
    if (0 < lVar14) {
      iVar20 = *(int *)(param_7 + 0x388c) >> 1;
      do {
        iVar2 = *(int *)(param_7 + 0x38bc);
        iVar7 = 0;
        iVar3 = *(int *)(param_7 + 0x3924);
        iVar17 = iVar2 + iVar2 + param_1;
        iVar5 = iVar3 + iVar3 + param_2;
        if (0 < iVar20) {
          puVar18 = (unsigned char *)(*(int *)(param_7 + 0x3958) + param_4 + -1);
          puVar19 = (unsigned char *)(*(int *)(param_7 + 0x3958) + param_3 + -1);
          pbVar16 = (unsigned char *)(iVar3 + iVar5 + -1);
          pbVar13 = (unsigned char *)(iVar5 + -1);
          pbVar4 = (unsigned char *)(iVar3 + param_2 + -1);
          pbVar15 = (unsigned char *)(param_1 + -3);
          pbVar6 = (unsigned char *)(param_2 + -1);
          pbVar9 = (unsigned char *)(iVar2 + iVar17 + -3);
          pbVar11 = (unsigned char *)(iVar17 + -3);
          pbVar8 = (unsigned char *)(iVar2 + param_1 + -3);
          do {
            pbVar6[1] = pbVar15[3];
            pbVar4[1] = pbVar8[3];
            pbVar13[1] = pbVar11[3];
            pbVar16[1] = pbVar9[3];
            pbVar6 = pbVar6 + 2;
            *pbVar6 = pbVar15[5];
            pbVar4 = pbVar4 + 2;
            *pbVar4 = pbVar8[5];
            pbVar13 = pbVar13 + 2;
            *pbVar13 = pbVar11[5];
            pbVar16 = pbVar16 + 2;
            *pbVar16 = pbVar9[5];
            *(char *)(iVar7 + param_3) =
                 (char)((int)((unsigned int)pbVar15[6] + (unsigned int)pbVar15[6] * 2 + (unsigned int)pbVar11[6] + 2) >> 2);
            puVar19 = puVar19 + 1;
            *puVar19 = (char)((int)((unsigned int)pbVar9[6] + (unsigned int)pbVar9[6] * 2 + (unsigned int)pbVar8[6] + 2) >>
                             2);
            pbVar11 = pbVar11 + 4;
            pbVar15 = pbVar15 + 4;
            *(char *)(iVar7 + param_4) =
                 (char)((int)((unsigned int)*pbVar15 + (unsigned int)*pbVar15 * 2 + (unsigned int)*pbVar11 + 2) >> 2);
            iVar7 = iVar7 + 1;
            pbVar8 = pbVar8 + 4;
            pbVar9 = pbVar9 + 4;
            puVar18 = puVar18 + 1;
            *puVar18 = (char)((int)((unsigned int)*pbVar9 + (unsigned int)*pbVar9 * 2 + (unsigned int)*pbVar8 + 2) >> 2);
            iVar20 = *(int *)(param_7 + 0x388c) >> 1;
          } while (iVar7 < iVar20);
        }
        param_1 = iVar1 * 4 + param_1;
        param_2 = iVar12 * 4 + param_2;
        param_3 = *(int *)(param_7 + 0x3924) + param_3;
        param_4 = *(int *)(param_7 + 0x3924) + param_4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if ((param_6 - param_5 & 3U) == 2) {
      iVar12 = 0;
      if (0 < (int)(*(unsigned int *)(param_7 + 0x388c) & 0xfffffffe)) {
        pbVar4 = (unsigned char *)(*(int *)(param_7 + 0x3924) + param_2 + -1);
        pbVar16 = (unsigned char *)(param_1 + -3);
        pbVar6 = (unsigned char *)(param_2 + -1);
        pbVar13 = (unsigned char *)(*(int *)(param_7 + 0x38bc) + param_1 + -3);
        do {
          pbVar6[1] = pbVar16[3];
          pbVar4[1] = pbVar13[3];
          pbVar6 = pbVar6 + 2;
          *pbVar6 = pbVar16[5];
          pbVar4 = pbVar4 + 2;
          *pbVar4 = pbVar13[5];
          *(char *)(iVar12 + param_3) = (char)((int)((unsigned int)pbVar16[6] + (unsigned int)pbVar13[6] + 1) >> 1);
          pbVar13 = pbVar13 + 4;
          pbVar16 = pbVar16 + 4;
          *(char *)(iVar12 + param_4) = (char)((int)((unsigned int)*pbVar16 + (unsigned int)*pbVar13 + 1) >> 1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(param_7 + 0x388c) >> 1);
      }
    }
  }
  else {
    fn_82EDF558(param_1);
    fn_82EDDA58(param_1 + 3,param_1 + 1,param_3,param_4,*(unsigned int *)(param_7 + 0x38bc),
                    *(unsigned int *)(param_7 + 0x3958),4,1);
    iVar12 = *(int *)(param_7 + 0x3958);
    param_1 = *(int *)(param_7 + 0x38bc) + param_1;
    fn_82EDDA58(param_1 + 3,param_1 + 1,iVar12 + param_3,iVar12 + param_4,
                    *(int *)(param_7 + 0x38bc),iVar12,4,1);
  }
  return;
}

