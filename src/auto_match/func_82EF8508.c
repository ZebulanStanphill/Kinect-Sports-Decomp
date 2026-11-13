__int64 fn_82EF8508(int param_1,int param_2,int param_3,int param_4)

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
  unsigned char *pbVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  unsigned char *pbVar19;
  unsigned char *pbVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  __int64 lVar28;
  
  lVar18 = 0;
  pbVar19 = (unsigned char *)(param_3 + 6);
  pbVar20 = (unsigned char *)(param_1 + 6);
  lVar28 = 8;
  do {
    pbVar3 = pbVar19 + -6;
    pbVar4 = pbVar20 + -6;
    pbVar5 = pbVar19 + -5;
    pbVar6 = pbVar20 + -5;
    pbVar7 = pbVar20 + -4;
    pbVar8 = pbVar19 + -4;
    uVar27 = (unsigned __int64)((int)((unsigned __int64)*pbVar4 - (unsigned __int64)*pbVar3) >> 0x1f);
    pbVar9 = pbVar19 + -3;
    uVar24 = (unsigned __int64)((int)((unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar5) >> 0x1f);
    pbVar10 = pbVar20 + -3;
    pbVar11 = pbVar20 + -2;
    pbVar12 = pbVar19 + -2;
    pbVar13 = pbVar20 + -1;
    uVar22 = (unsigned __int64)((int)((unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar8) >> 0x1f);
    pbVar14 = pbVar19 + -1;
    pbVar15 = pbVar20 + 1;
    pbVar16 = pbVar19 + 1;
    bVar1 = *pbVar20;
    bVar2 = *pbVar19;
    uVar21 = (unsigned __int64)((int)((unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar9) >> 0x1f);
    uVar25 = (unsigned __int64)((int)((unsigned __int64)*pbVar11 - (unsigned __int64)*pbVar12) >> 0x1f);
    uVar23 = (unsigned __int64)((int)((unsigned __int64)*pbVar13 - (unsigned __int64)*pbVar14) >> 0x1f);
    uVar17 = (unsigned __int64)((int)((unsigned __int64)*pbVar15 - (unsigned __int64)*pbVar16) >> 0x1f);
    uVar26 = (unsigned __int64)((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) >> 0x1f);
    pbVar20 = pbVar20 + param_2;
    pbVar19 = pbVar19 + param_4;
    lVar18 = (((unsigned __int64)*pbVar4 - (unsigned __int64)*pbVar3 ^ uVar27) - uVar27) +
             (((unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar5 ^ uVar24) - uVar24) +
             (((unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar8 ^ uVar22) - uVar22) +
             (((unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar9 ^ uVar21) - uVar21) +
             (((unsigned __int64)*pbVar11 - (unsigned __int64)*pbVar12 ^ uVar25) - uVar25) +
             (((unsigned __int64)*pbVar13 - (unsigned __int64)*pbVar14 ^ uVar23) - uVar23) +
             (((unsigned __int64)*pbVar15 - (unsigned __int64)*pbVar16 ^ uVar17) - uVar17) +
             (((unsigned __int64)bVar1 - (unsigned __int64)bVar2 ^ uVar26) - uVar26) + lVar18;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  return lVar18;
}

