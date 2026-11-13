void fn_82F41ED8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *puVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  __int64 lVar19;
  unsigned char *pbVar20;
  __int64 lVar21;
  __int64 lVar22;
  
  lVar19 = (__int64)(param_6 >> 2);
  if (0 < lVar19) {
    lVar21 = ((unsigned __int64)(unsigned int)(param_2 + 0xf >> 4) & 0x3fffffff) << 2;
    do {
      if (0 < (int)lVar21) {
        pbVar17 = (unsigned char *)(param_1 + -1);
        pbVar20 = (unsigned char *)(param_1 + param_3 + 3);
        pbVar18 = (unsigned char *)(param_3 * 3 + param_1 + 2);
        puVar16 = (unsigned char *)(param_4 + -1);
        lVar22 = lVar21;
        do {
          pbVar3 = pbVar20 + (-2 - param_3);
          pbVar4 = pbVar20 + (-3 - param_3);
          pbVar5 = pbVar20 + (-1 - param_3);
          pbVar6 = pbVar20 + -3;
          pbVar7 = pbVar20 + -2;
          pbVar8 = pbVar20 + -1;
          pbVar17 = pbVar17 + 4;
          pbVar9 = pbVar18 + (-2 - param_3);
          pbVar10 = pbVar18 + (-1 - param_3);
          pbVar11 = pbVar18 + (1 - param_3);
          bVar1 = *pbVar20;
          pbVar12 = pbVar18 + -1;
          pbVar13 = pbVar18 + -2;
          pbVar14 = pbVar20 + param_3 + -1;
          pbVar15 = pbVar18 + 1;
          bVar2 = *pbVar18;
          pbVar20 = pbVar20 + 4;
          pbVar18 = pbVar18 + 4;
          puVar16 = puVar16 + 1;
          *puVar16 = (char)((int)((unsigned int)*pbVar13 + (unsigned int)*pbVar12 + (unsigned int)*pbVar15 + (unsigned int)bVar2 +
                                 (unsigned int)*pbVar9 + (unsigned int)*pbVar10 + (unsigned int)*pbVar11 + (unsigned int)*pbVar14 +
                                 (unsigned int)*pbVar6 + (unsigned int)*pbVar7 + (unsigned int)*pbVar8 + (unsigned int)bVar1 +
                                 (unsigned int)*pbVar3 + (unsigned int)*pbVar4 + (unsigned int)*pbVar5 + (unsigned int)*pbVar17 + 8)
                           >> 4);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      lVar19 = lVar19 + -1;
      param_4 = param_4 + param_5;
      param_1 = param_3 * 4 + param_1;
    } while (lVar19 != 0);
  }
  return;
}

