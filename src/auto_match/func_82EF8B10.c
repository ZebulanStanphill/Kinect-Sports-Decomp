extern unsigned int *auStack_d0;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int lbl_82160650;
extern unsigned int lbl_82160690;


unsigned __int64 fn_82EF8B10(int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  int iVar11;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  __int64 lVar12;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  int iStack_f0;
  int iStack_ec;
  unsigned int auStack_d0 [52];
  
  iStack_ec = param_5 + 8;
  uVar5 = 0;
  iVar1 = param_4 * 4;
  iStack_f0 = 0;
  iVar2 = param_2 * 4;
  iVar6 = 0;
  do {
    pbVar13 = (unsigned char *)(*(int *)((int)&lbl_82160650 + iVar6) * param_4 +
                       *(int *)((int)&lbl_82160690 + iVar6) + param_3);
    pbVar7 = (unsigned char *)(*(int *)((int)&lbl_82160650 + iVar6) * param_2 +
                      *(int *)((int)&lbl_82160690 + iVar6) + param_1);
    pbVar8 = pbVar7 + iVar2;
    pbVar14 = pbVar13 + iVar1;
    uVar4 = (unsigned __int64)((int)((unsigned __int64)pbVar7[0xc] - (unsigned __int64)pbVar13[0xc]) >> 0x1f);
    uVar28 = (unsigned __int64)((int)((unsigned __int64)pbVar7[8] - (unsigned __int64)pbVar13[8]) >> 0x1f);
    uVar27 = (unsigned __int64)((int)((unsigned __int64)pbVar7[4] - (unsigned __int64)pbVar13[4]) >> 0x1f);
    uVar24 = (unsigned __int64)((int)((unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar13) >> 0x1f);
    uVar22 = (unsigned __int64)((int)((unsigned __int64)pbVar8[0xc] - (unsigned __int64)pbVar14[0xc]) >> 0x1f);
    uVar18 = (unsigned __int64)((int)((unsigned __int64)pbVar8[8] - (unsigned __int64)pbVar14[8]) >> 0x1f);
    uVar17 = (unsigned __int64)((int)((unsigned __int64)pbVar8[4] - (unsigned __int64)pbVar14[4]) >> 0x1f);
    pbVar9 = pbVar8 + iVar2;
    pbVar15 = pbVar14 + iVar1;
    uVar19 = (unsigned __int64)((int)((unsigned __int64)*pbVar8 - (unsigned __int64)*pbVar14) >> 0x1f);
    uVar30 = (unsigned __int64)((int)((unsigned __int64)pbVar9[0xc] - (unsigned __int64)pbVar15[0xc]) >> 0x1f);
    uVar3 = (unsigned __int64)((int)((unsigned __int64)pbVar9[8] - (unsigned __int64)pbVar15[8]) >> 0x1f);
    pbVar10 = pbVar9 + iVar2;
    pbVar16 = pbVar15 + iVar1;
    uVar26 = (unsigned __int64)((int)((unsigned __int64)pbVar9[4] - (unsigned __int64)pbVar15[4]) >> 0x1f);
    uVar23 = (unsigned __int64)((int)((unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar15) >> 0x1f);
    uVar21 = (unsigned __int64)((int)((unsigned __int64)pbVar10[0xc] - (unsigned __int64)pbVar16[0xc]) >> 0x1f);
    uVar20 = (unsigned __int64)((int)((unsigned __int64)pbVar10[8] - (unsigned __int64)pbVar16[8]) >> 0x1f);
    uVar25 = (unsigned __int64)((int)((unsigned __int64)pbVar10[4] - (unsigned __int64)pbVar16[4]) >> 0x1f);
    uVar29 = (unsigned __int64)((int)((unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar16) >> 0x1f);
    lVar12 = (((unsigned __int64)pbVar10[0xc] - (unsigned __int64)pbVar16[0xc] ^ uVar21) - uVar21) +
             (((unsigned __int64)pbVar10[8] - (unsigned __int64)pbVar16[8] ^ uVar20) - uVar20) +
             (((unsigned __int64)pbVar10[4] - (unsigned __int64)pbVar16[4] ^ uVar25) - uVar25) +
             (((unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar16 ^ uVar29) - uVar29) +
             (((unsigned __int64)pbVar9[0xc] - (unsigned __int64)pbVar15[0xc] ^ uVar30) - uVar30) +
             (((unsigned __int64)pbVar9[8] - (unsigned __int64)pbVar15[8] ^ uVar3) - uVar3) +
             (((unsigned __int64)pbVar9[4] - (unsigned __int64)pbVar15[4] ^ uVar26) - uVar26) +
             (((unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar15 ^ uVar23) - uVar23) +
             (((unsigned __int64)pbVar8[0xc] - (unsigned __int64)pbVar14[0xc] ^ uVar22) - uVar22) +
             (((unsigned __int64)pbVar8[8] - (unsigned __int64)pbVar14[8] ^ uVar18) - uVar18) +
             (((unsigned __int64)pbVar8[4] - (unsigned __int64)pbVar14[4] ^ uVar17) - uVar17) +
             (((unsigned __int64)*pbVar8 - (unsigned __int64)*pbVar14 ^ uVar19) - uVar19) +
             (((unsigned __int64)pbVar7[0xc] - (unsigned __int64)pbVar13[0xc] ^ uVar4) - uVar4) +
             (((unsigned __int64)pbVar7[8] - (unsigned __int64)pbVar13[8] ^ uVar28) - uVar28) +
             (((unsigned __int64)pbVar7[4] - (unsigned __int64)pbVar13[4] ^ uVar27) - uVar27) +
             (((unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar13 ^ uVar24) - uVar24);
    uVar5 = lVar12 + uVar5;
    *(int *)((int)auStack_d0 + iVar6) = (int)lVar12;
    iVar11 = (iStack_ec >> 4) + ((int)(param_5 * 3 + 0x80) >> 8);
    uVar3 = (unsigned __int64)param_5;
    if (iVar11 < (int)uVar5) break;
    iVar6 = iVar6 + 4;
    iStack_ec = iStack_ec + param_5;
    iStack_f0 = iStack_f0 + 1;
    uVar3 = uVar5;
  } while (iVar6 < 0x40);
  if ((iStack_f0 != 0x10) || (uVar5 = (unsigned __int64)param_5, (int)uVar3 <= iVar11)) {
    uVar5 = uVar3;
  }
  return uVar5;
}

