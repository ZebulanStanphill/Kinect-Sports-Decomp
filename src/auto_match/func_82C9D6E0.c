int fn_82C9D6E0(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
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
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned char *pbVar20;
  unsigned char *pbVar21;
  unsigned char *pbVar22;
  unsigned char *pbVar23;
  unsigned char *pbVar24;
  unsigned char *pbVar25;
  int iVar26;
  int iVar27;
  unsigned char *pbVar28;
  unsigned char *pbVar29;
  __int64 lVar30;
  
  lVar30 = 2;
  iVar27 = param_2 * 4;
  pbVar28 = (unsigned char *)((param_2 + 2) * 3 + param_1);
  iVar26 = 0;
  pbVar25 = (unsigned char *)(param_1 + (param_2 & 0x3fffffff) * -4 + 6);
  pbVar29 = (unsigned char *)(param_1 + param_2 + 6);
  do {
    pbVar3 = pbVar29 + (-6 - param_2);
    pbVar4 = pbVar29 + (-5 - param_2);
    pbVar5 = pbVar29 + (-4 - param_2);
    pbVar6 = pbVar29 + -5;
    pbVar7 = pbVar29 + -6;
    pbVar8 = pbVar29 + (-3 - param_2);
    pbVar9 = pbVar29 + -4;
    pbVar10 = pbVar29 + (param_2 - 2);
    pbVar11 = pbVar29 + (param_2 - 3);
    pbVar12 = pbVar29 + (-2 - param_2);
    pbVar13 = pbVar29 + -3;
    pbVar14 = pbVar29 + (param_2 - 1);
    pbVar15 = pbVar29 + (-1 - param_2);
    pbVar16 = pbVar29 + -2;
    pbVar17 = pbVar29 + param_2 + 1;
    pbVar18 = pbVar29 + (1 - param_2);
    pbVar19 = pbVar29 + -1;
    pbVar20 = pbVar29 + (param_2 - 6);
    pbVar25 = pbVar25 + iVar27;
    pbVar21 = pbVar29 + 1;
    pbVar22 = pbVar29 + param_2;
    bVar1 = *pbVar29;
    pbVar23 = pbVar29 + (param_2 - 5);
    pbVar24 = pbVar29 + (param_2 - 4);
    pbVar29 = pbVar29 + iVar27;
    iVar26 = (unsigned int)pbVar28[-6] + (unsigned int)pbVar28[-5] + (unsigned int)pbVar28[-4] + (unsigned int)pbVar28[-3] +
             (unsigned int)pbVar28[-2] + (unsigned int)pbVar28[-1] + (unsigned int)pbVar28[1] + (unsigned int)*pbVar28 +
             (unsigned int)*pbVar11 + (unsigned int)*pbVar10 + (unsigned int)*pbVar14 + (unsigned int)*pbVar17 + (unsigned int)*pbVar20 +
             (unsigned int)*pbVar22 + (unsigned int)*pbVar23 + (unsigned int)*pbVar24 +
             (unsigned int)*pbVar7 + (unsigned int)*pbVar6 + (unsigned int)*pbVar9 + (unsigned int)*pbVar13 + (unsigned int)*pbVar16 +
             (unsigned int)*pbVar19 + (unsigned int)*pbVar21 + (unsigned int)bVar1 +
             (unsigned int)*pbVar3 + (unsigned int)*pbVar4 + (unsigned int)*pbVar5 + (unsigned int)*pbVar8 + (unsigned int)*pbVar12 +
             (unsigned int)*pbVar15 + (unsigned int)*pbVar18 + (unsigned int)*pbVar25 + iVar26;
    pbVar28 = pbVar28 + iVar27;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  uVar2 = iVar26 + 4 >> 3;
  trapWord(6,(unsigned __int64)param_3,0);
  trapWord(5,(unsigned __int64)param_3 &
             ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),0xffff);
  return (int)uVar2 / (int)param_3;
}

