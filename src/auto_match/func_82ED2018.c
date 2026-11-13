void fn_82ED2018(unsigned __int64 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned char *pbVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  int iVar29;
  int iVar30;
  __int64 lVar31;
  int *piStack00000024;
  
  iVar29 = param_7 + param_8;
  piStack00000024 = (int *)(param_3 + -4);
  lVar31 = 8;
  iVar13 = param_7 + -1;
  iVar30 = param_7 + 1;
  pbVar17 = (unsigned char *)((param_4 - param_8) + param_7 + -1);
  do {
    bVar1 = *(unsigned char *)(param_6 + param_7);
    bVar2 = *(unsigned char *)(param_5 + param_7);
    uVar16 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(param_6 + iVar29);
    uVar24 = (unsigned int)bVar2 - (unsigned int)*(unsigned char *)(param_5 + iVar29);
    uVar4 = (int)uVar16 >> 0x1f;
    uVar5 = (int)uVar24 >> 0x1f;
    uVar23 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)((param_7 - param_8) + param_6);
    bVar3 = *(unsigned char *)(param_4 + param_7);
    uVar6 = (int)uVar23 >> 0x1f;
    uVar18 = (unsigned int)bVar2 - (unsigned int)*(unsigned char *)((param_7 - param_8) + param_5);
    uVar7 = (int)uVar18 >> 0x1f;
    uVar21 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(param_6 + iVar13);
    uVar15 = (int)uVar21 >> 0x1f;
    uVar19 = (unsigned int)bVar2 - (unsigned int)*(unsigned char *)(param_5 + iVar13);
    uVar26 = (int)uVar19 >> 0x1f;
    uVar14 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(param_6 + iVar30);
    uVar28 = (int)uVar14 >> 0x1f;
    uVar27 = (unsigned int)bVar2 - (unsigned int)*(unsigned char *)(param_5 + iVar30);
    uVar8 = (int)uVar27 >> 0x1f;
    uVar22 = (unsigned int)bVar3 - (unsigned int)*(unsigned char *)(iVar29 + param_4);
    uVar9 = (int)uVar22 >> 0x1f;
    uVar20 = (unsigned int)bVar3 - (unsigned int)*(unsigned char *)(iVar13 + param_4);
    uVar10 = (int)uVar20 >> 0x1f;
    uVar25 = (unsigned int)bVar3 - (unsigned int)*(unsigned char *)(iVar30 + param_4);
    uVar11 = (int)uVar25 >> 0x1f;
    uVar12 = (int)((unsigned int)bVar3 - (unsigned int)pbVar17[1]) >> 0x1f;
    param_5 = param_5 + 1;
    piStack00000024 = piStack00000024 + 1;
    *piStack00000024 =
         ((uVar16 ^ uVar4) - uVar4) + ((uVar24 ^ uVar5) - uVar5) + ((uVar23 ^ uVar6) - uVar6) +
         ((uVar18 ^ uVar7) - uVar7) + ((uVar21 ^ uVar15) - uVar15) + ((uVar19 ^ uVar26) - uVar26) +
         ((uVar14 ^ uVar28) - uVar28) + ((uVar27 ^ uVar8) - uVar8) + ((uVar22 ^ uVar9) - uVar9) +
         ((uVar20 ^ uVar10) - uVar10) + ((uVar25 ^ uVar11) - uVar11) +
         (((unsigned int)bVar3 - (unsigned int)pbVar17[1] ^ uVar12) - uVar12);
    bVar1 = *(unsigned char *)(param_4 + param_7);
    uVar15 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(iVar29 + param_4);
    pbVar17 = pbVar17 + 1;
    param_6 = param_6 + 1;
    uVar28 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(iVar13 + param_4);
    uVar4 = (int)uVar15 >> 0x1f;
    uVar5 = (int)uVar28 >> 0x1f;
    uVar26 = (unsigned int)bVar1 - (unsigned int)*(unsigned char *)(iVar30 + param_4);
    uVar6 = (int)((unsigned int)bVar1 - (unsigned int)*pbVar17) >> 0x1f;
    uVar7 = (int)uVar26 >> 0x1f;
    param_4 = param_4 + 1;
    *param_2 = ((uVar15 ^ uVar4) - uVar4) + ((uVar28 ^ uVar5) - uVar5) +
               (((unsigned int)bVar1 - (unsigned int)*pbVar17 ^ uVar6) - uVar6) + ((uVar26 ^ uVar7) - uVar7);
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  return;
}

