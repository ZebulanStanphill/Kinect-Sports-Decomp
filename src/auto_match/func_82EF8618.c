__int64 fn_82EF8618(unsigned char *param_1,int param_2,unsigned char *param_3,int param_4,int param_5)

{
  __int64 lVar1;
  int iVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  
  lVar1 = 0;
  lVar16 = 0;
  iVar2 = 0;
  if (1 < param_5) {
    do {
      pbVar3 = param_3 + param_4;
      pbVar4 = param_1 + param_2;
      uVar11 = (unsigned __int64)((int)((unsigned __int64)param_1[7] - (unsigned __int64)param_3[7]) >> 0x1f);
      uVar8 = (unsigned __int64)((int)((unsigned __int64)param_1[6] - (unsigned __int64)param_3[6]) >> 0x1f);
      uVar6 = (unsigned __int64)((int)((unsigned __int64)param_1[5] - (unsigned __int64)param_3[5]) >> 0x1f);
      uVar15 = (unsigned __int64)((int)((unsigned __int64)param_1[4] - (unsigned __int64)param_3[4]) >> 0x1f);
      uVar5 = (unsigned __int64)((int)((unsigned __int64)param_1[3] - (unsigned __int64)param_3[3]) >> 0x1f);
      uVar13 = (unsigned __int64)((int)((unsigned __int64)param_1[2] - (unsigned __int64)param_3[2]) >> 0x1f);
      uVar10 = (unsigned __int64)((int)((unsigned __int64)param_1[1] - (unsigned __int64)param_3[1]) >> 0x1f);
      uVar7 = (unsigned __int64)((int)((unsigned __int64)*param_1 - (unsigned __int64)*param_3) >> 0x1f);
      uVar14 = (unsigned __int64)((int)((unsigned __int64)pbVar4[7] - (unsigned __int64)pbVar3[7]) >> 0x1f);
      uVar12 = (unsigned __int64)((int)((unsigned __int64)pbVar4[6] - (unsigned __int64)pbVar3[6]) >> 0x1f);
      uVar9 = (unsigned __int64)((int)((unsigned __int64)pbVar4[5] - (unsigned __int64)pbVar3[5]) >> 0x1f);
      lVar1 = (((unsigned __int64)param_1[7] - (unsigned __int64)param_3[7] ^ uVar11) - uVar11) +
              (((unsigned __int64)param_1[6] - (unsigned __int64)param_3[6] ^ uVar8) - uVar8) +
              (((unsigned __int64)param_1[5] - (unsigned __int64)param_3[5] ^ uVar6) - uVar6) +
              (((unsigned __int64)param_1[4] - (unsigned __int64)param_3[4] ^ uVar15) - uVar15) +
              (((unsigned __int64)param_1[3] - (unsigned __int64)param_3[3] ^ uVar5) - uVar5) +
              (((unsigned __int64)param_1[2] - (unsigned __int64)param_3[2] ^ uVar13) - uVar13) +
              (((unsigned __int64)param_1[1] - (unsigned __int64)param_3[1] ^ uVar10) - uVar10) +
              (((unsigned __int64)*param_1 - (unsigned __int64)*param_3 ^ uVar7) - uVar7) + lVar1;
      uVar7 = (unsigned __int64)((int)((unsigned __int64)pbVar4[4] - (unsigned __int64)pbVar3[4]) >> 0x1f);
      iVar2 = iVar2 + 2;
      uVar8 = (unsigned __int64)((int)((unsigned __int64)pbVar4[3] - (unsigned __int64)pbVar3[3]) >> 0x1f);
      uVar6 = (unsigned __int64)((int)((unsigned __int64)pbVar4[2] - (unsigned __int64)pbVar3[2]) >> 0x1f);
      uVar10 = (unsigned __int64)((int)((unsigned __int64)pbVar4[1] - (unsigned __int64)pbVar3[1]) >> 0x1f);
      uVar5 = (unsigned __int64)((int)((unsigned __int64)*pbVar4 - (unsigned __int64)*pbVar3) >> 0x1f);
      param_1 = pbVar4 + param_2;
      param_3 = pbVar3 + param_4;
      lVar16 = (((unsigned __int64)pbVar4[7] - (unsigned __int64)pbVar3[7] ^ uVar14) - uVar14) +
               (((unsigned __int64)pbVar4[6] - (unsigned __int64)pbVar3[6] ^ uVar12) - uVar12) +
               (((unsigned __int64)pbVar4[5] - (unsigned __int64)pbVar3[5] ^ uVar9) - uVar9) +
               (((unsigned __int64)pbVar4[4] - (unsigned __int64)pbVar3[4] ^ uVar7) - uVar7) +
               (((unsigned __int64)pbVar4[3] - (unsigned __int64)pbVar3[3] ^ uVar8) - uVar8) +
               (((unsigned __int64)pbVar4[2] - (unsigned __int64)pbVar3[2] ^ uVar6) - uVar6) +
               (((unsigned __int64)pbVar4[1] - (unsigned __int64)pbVar3[1] ^ uVar10) - uVar10) +
               (((unsigned __int64)*pbVar4 - (unsigned __int64)*pbVar3 ^ uVar5) - uVar5) + lVar16;
    } while (iVar2 < param_5 + -1);
  }
  lVar16 = lVar16 + lVar1;
  if (iVar2 < param_5) {
    uVar9 = (unsigned __int64)((int)((unsigned __int64)param_1[7] - (unsigned __int64)param_3[7]) >> 0x1f);
    uVar12 = (unsigned __int64)((int)((unsigned __int64)param_1[6] - (unsigned __int64)param_3[6]) >> 0x1f);
    uVar11 = (unsigned __int64)((int)((unsigned __int64)param_1[5] - (unsigned __int64)param_3[5]) >> 0x1f);
    uVar10 = (unsigned __int64)((int)((unsigned __int64)param_1[4] - (unsigned __int64)param_3[4]) >> 0x1f);
    uVar7 = (unsigned __int64)((int)((unsigned __int64)param_1[3] - (unsigned __int64)param_3[3]) >> 0x1f);
    uVar5 = (unsigned __int64)((int)((unsigned __int64)param_1[2] - (unsigned __int64)param_3[2]) >> 0x1f);
    uVar6 = (unsigned __int64)((int)((unsigned __int64)param_1[1] - (unsigned __int64)param_3[1]) >> 0x1f);
    uVar8 = (unsigned __int64)((int)((unsigned __int64)*param_1 - (unsigned __int64)*param_3) >> 0x1f);
    lVar16 = lVar16 + (((unsigned __int64)param_1[7] - (unsigned __int64)param_3[7] ^ uVar9) - uVar9) +
                      (((unsigned __int64)param_1[6] - (unsigned __int64)param_3[6] ^ uVar12) - uVar12) +
                      (((unsigned __int64)param_1[5] - (unsigned __int64)param_3[5] ^ uVar11) - uVar11) +
                      (((unsigned __int64)param_1[4] - (unsigned __int64)param_3[4] ^ uVar10) - uVar10) +
                      (((unsigned __int64)param_1[3] - (unsigned __int64)param_3[3] ^ uVar7) - uVar7) +
                      (((unsigned __int64)param_1[2] - (unsigned __int64)param_3[2] ^ uVar5) - uVar5) +
                      (((unsigned __int64)param_1[1] - (unsigned __int64)param_3[1] ^ uVar6) - uVar6) +
                      (((unsigned __int64)*param_1 - (unsigned __int64)*param_3 ^ uVar8) - uVar8);
  }
  return lVar16;
}

