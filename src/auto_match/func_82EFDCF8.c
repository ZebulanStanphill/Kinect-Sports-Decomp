__int64 fn_82EFDCF8(int param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
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
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned char *pbVar27;
  unsigned __int64 uVar26;
  int iVar29;
  unsigned __int64 uVar28;
  int iVar30;
  unsigned char *pbVar32;
  __int64 lVar31;
  unsigned char *pbVar33;
  unsigned char *pbVar34;
  unsigned __int64 uVar35;
  unsigned __int64 uVar36;
  unsigned __int64 uVar37;
  unsigned __int64 uVar38;
  __int64 lVar39;
  __int64 lVar40;
  
  lVar39 = 2;
  pbVar34 = (unsigned char *)(param_1 + 6);
  pbVar32 = (unsigned char *)((param_2 + 2) * 3 + param_1);
  iVar30 = param_2 * 4;
  iVar29 = 0x20;
  pbVar27 = pbVar34 + (param_2 & 0x3fffffff) * -4;
  pbVar33 = (unsigned char *)(param_1 + param_2 + 6);
  do {
    pbVar2 = pbVar33 + (-6 - param_2);
    pbVar3 = pbVar33 + (-5 - param_2);
    pbVar4 = pbVar33 + (-2 - param_2);
    pbVar5 = pbVar33 + -5;
    pbVar6 = pbVar33 + -6;
    pbVar7 = pbVar33 + (-1 - param_2);
    pbVar8 = pbVar33 + -4;
    pbVar9 = pbVar33 + (param_2 - 5);
    pbVar10 = pbVar33 + (param_2 - 6);
    pbVar11 = pbVar33 + (-4 - param_2);
    pbVar12 = pbVar33 + -3;
    pbVar13 = pbVar33 + (param_2 - 4);
    pbVar14 = pbVar33 + (1 - param_2);
    pbVar15 = pbVar33 + -2;
    pbVar16 = pbVar33 + (param_2 - 3);
    pbVar17 = pbVar33 + (-3 - param_2);
    pbVar18 = pbVar33 + -1;
    pbVar19 = pbVar33 + (param_2 - 2);
    pbVar27 = pbVar27 + iVar30;
    pbVar20 = pbVar33 + 1;
    pbVar21 = pbVar33 + (param_2 - 1);
    bVar1 = *pbVar33;
    pbVar22 = pbVar33 + param_2 + 1;
    pbVar23 = pbVar33 + param_2;
    pbVar33 = pbVar33 + iVar30;
    iVar29 = (unsigned int)pbVar32[-6] + (unsigned int)pbVar32[-5] + (unsigned int)pbVar32[-4] + (unsigned int)pbVar32[-3] +
             (unsigned int)pbVar32[-2] + (unsigned int)pbVar32[-1] + (unsigned int)pbVar32[1] + (unsigned int)*pbVar32 +
             (unsigned int)*pbVar10 + (unsigned int)*pbVar9 + (unsigned int)*pbVar13 + (unsigned int)*pbVar16 + (unsigned int)*pbVar19 +
             (unsigned int)*pbVar21 + (unsigned int)*pbVar22 + (unsigned int)*pbVar23 +
             (unsigned int)*pbVar6 + (unsigned int)*pbVar5 + (unsigned int)*pbVar8 + (unsigned int)*pbVar12 + (unsigned int)*pbVar15 +
             (unsigned int)*pbVar18 + (unsigned int)*pbVar20 + (unsigned int)bVar1 +
             (unsigned int)*pbVar2 + (unsigned int)*pbVar3 + (unsigned int)*pbVar4 + (unsigned int)*pbVar7 + (unsigned int)*pbVar11 +
             (unsigned int)*pbVar14 + (unsigned int)*pbVar17 + (unsigned int)*pbVar27 + iVar29;
    pbVar32 = pbVar32 + iVar30;
    lVar39 = lVar39 + -1;
  } while (lVar39 != 0);
  lVar31 = (__int64)(iVar29 >> 6);
  lVar39 = 0;
  lVar40 = 8;
  do {
    pbVar27 = pbVar34 + -6;
    pbVar32 = pbVar34 + -5;
    pbVar33 = pbVar34 + -4;
    pbVar2 = pbVar34 + -3;
    uVar36 = (unsigned __int64)((int)((unsigned __int64)*pbVar27 - lVar31) >> 0x1f);
    pbVar3 = pbVar34 + -2;
    uVar28 = (unsigned __int64)((int)((unsigned __int64)*pbVar32 - lVar31) >> 0x1f);
    pbVar4 = pbVar34 + -1;
    pbVar5 = pbVar34 + 1;
    bVar1 = *pbVar34;
    uVar35 = (unsigned __int64)((int)((unsigned __int64)*pbVar33 - lVar31) >> 0x1f);
    uVar25 = (unsigned __int64)((int)((unsigned __int64)*pbVar2 - lVar31) >> 0x1f);
    uVar37 = (unsigned __int64)((int)((unsigned __int64)*pbVar3 - lVar31) >> 0x1f);
    uVar24 = (unsigned __int64)((int)((unsigned __int64)*pbVar4 - lVar31) >> 0x1f);
    uVar38 = (unsigned __int64)((int)((unsigned __int64)*pbVar5 - lVar31) >> 0x1f);
    uVar26 = (unsigned __int64)((int)((unsigned __int64)bVar1 - lVar31) >> 0x1f);
    pbVar34 = pbVar34 + param_2;
    lVar39 = (((unsigned __int64)*pbVar27 - lVar31 ^ uVar36) - uVar36) +
             (((unsigned __int64)*pbVar32 - lVar31 ^ uVar28) - uVar28) +
             (((unsigned __int64)*pbVar33 - lVar31 ^ uVar35) - uVar35) +
             (((unsigned __int64)*pbVar2 - lVar31 ^ uVar25) - uVar25) +
             (((unsigned __int64)*pbVar3 - lVar31 ^ uVar37) - uVar37) +
             (((unsigned __int64)*pbVar4 - lVar31 ^ uVar24) - uVar24) +
             (((unsigned __int64)*pbVar5 - lVar31 ^ uVar38) - uVar38) +
             (((unsigned __int64)bVar1 - lVar31 ^ uVar26) - uVar26) + lVar39;
    lVar40 = lVar40 + -1;
  } while (lVar40 != 0);
  return lVar39;
}

