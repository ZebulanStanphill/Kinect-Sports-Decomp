unsigned __int64 fn_82EF7218(int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  int iVar11;
  unsigned char *pbVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  int iVar23;
  unsigned __int64 uVar24;
  int iVar25;
  
  uVar2 = 0;
  if (-1 < (int)param_5) {
    uVar1 = param_5 * 3;
    iVar11 = ((int)uVar1 >> 4) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0xf) != 0);
    iVar25 = 4;
    pbVar12 = (unsigned char *)(param_1 + 6);
    pbVar10 = (unsigned char *)(param_2 * 4 + param_1 + 6);
    iVar23 = param_5 + iVar11 * -3;
    pbVar9 = (unsigned char *)(param_3 + 6);
    pbVar8 = (unsigned char *)(param_4 * 4 + param_3 + 6);
    do {
      iVar25 = iVar25 + -1;
      uVar20 = (unsigned __int64)((int)((unsigned __int64)pbVar12[-6] - (unsigned __int64)pbVar9[-6]) >> 0x1f);
      uVar19 = (unsigned __int64)((int)((unsigned __int64)pbVar12[-5] - (unsigned __int64)pbVar9[-5]) >> 0x1f);
      uVar15 = (unsigned __int64)((int)((unsigned __int64)pbVar12[-4] - (unsigned __int64)pbVar9[-4]) >> 0x1f);
      uVar14 = (unsigned __int64)((int)((unsigned __int64)pbVar12[-3] - (unsigned __int64)pbVar9[-3]) >> 0x1f);
      uVar13 = (unsigned __int64)((int)((unsigned __int64)pbVar12[-2] - (unsigned __int64)pbVar9[-2]) >> 0x1f);
      uVar18 = (unsigned __int64)((int)((unsigned __int64)pbVar12[-1] - (unsigned __int64)pbVar9[-1]) >> 0x1f);
      uVar16 = (unsigned __int64)((int)((unsigned __int64)pbVar12[1] - (unsigned __int64)pbVar9[1]) >> 0x1f);
      uVar21 = (unsigned __int64)((int)((unsigned __int64)pbVar10[-6] - (unsigned __int64)pbVar8[-6]) >> 0x1f);
      uVar3 = (unsigned __int64)((int)((unsigned __int64)pbVar10[-5] - (unsigned __int64)pbVar8[-5]) >> 0x1f);
      uVar22 = (unsigned __int64)((int)((unsigned __int64)pbVar10[-4] - (unsigned __int64)pbVar8[-4]) >> 0x1f);
      uVar4 = (unsigned __int64)((int)((unsigned __int64)pbVar10[-3] - (unsigned __int64)pbVar8[-3]) >> 0x1f);
      uVar5 = (unsigned __int64)((int)((unsigned __int64)pbVar10[-2] - (unsigned __int64)pbVar8[-2]) >> 0x1f);
      uVar24 = (unsigned __int64)((int)((unsigned __int64)pbVar10[-1] - (unsigned __int64)pbVar8[-1]) >> 0x1f);
      uVar17 = (unsigned __int64)((int)((unsigned __int64)pbVar10[1] - (unsigned __int64)pbVar8[1]) >> 0x1f);
      uVar7 = (unsigned __int64)((int)((unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar8) >> 0x1f);
      uVar6 = (unsigned __int64)((int)((unsigned __int64)*pbVar12 - (unsigned __int64)*pbVar9) >> 0x1f);
      uVar2 = (((unsigned __int64)pbVar12[-6] - (unsigned __int64)pbVar9[-6] ^ uVar20) - uVar20) +
              (((unsigned __int64)pbVar12[-5] - (unsigned __int64)pbVar9[-5] ^ uVar19) - uVar19) +
              (((unsigned __int64)pbVar12[-4] - (unsigned __int64)pbVar9[-4] ^ uVar15) - uVar15) +
              (((unsigned __int64)pbVar12[-3] - (unsigned __int64)pbVar9[-3] ^ uVar14) - uVar14) +
              (((unsigned __int64)pbVar12[-2] - (unsigned __int64)pbVar9[-2] ^ uVar13) - uVar13) +
              (((unsigned __int64)pbVar12[-1] - (unsigned __int64)pbVar9[-1] ^ uVar18) - uVar18) +
              (((unsigned __int64)pbVar12[1] - (unsigned __int64)pbVar9[1] ^ uVar16) - uVar16) +
              (((unsigned __int64)pbVar10[-6] - (unsigned __int64)pbVar8[-6] ^ uVar21) - uVar21) +
              (((unsigned __int64)pbVar10[-5] - (unsigned __int64)pbVar8[-5] ^ uVar3) - uVar3) +
              (((unsigned __int64)pbVar10[-4] - (unsigned __int64)pbVar8[-4] ^ uVar22) - uVar22) +
              (((unsigned __int64)pbVar10[-3] - (unsigned __int64)pbVar8[-3] ^ uVar4) - uVar4) +
              (((unsigned __int64)pbVar10[-2] - (unsigned __int64)pbVar8[-2] ^ uVar5) - uVar5) +
              (((unsigned __int64)pbVar10[-1] - (unsigned __int64)pbVar8[-1] ^ uVar24) - uVar24) +
              (((unsigned __int64)pbVar10[1] - (unsigned __int64)pbVar8[1] ^ uVar17) - uVar17) +
              (((unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar8 ^ uVar7) - uVar7) +
              (((unsigned __int64)*pbVar12 - (unsigned __int64)*pbVar9 ^ uVar6) - uVar6) + uVar2;
      if (iVar23 <= (int)uVar2) {
        return (unsigned __int64)param_5;
      }
      pbVar12 = pbVar12 + param_2;
      pbVar10 = pbVar10 + param_2;
      iVar23 = iVar23 + iVar11;
      pbVar9 = pbVar9 + param_4;
      pbVar8 = pbVar8 + param_4;
    } while (iVar25 != 0);
  }
  return uVar2;
}

