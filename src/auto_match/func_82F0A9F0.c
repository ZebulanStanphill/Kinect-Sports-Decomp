extern unsigned int *auStack_220;
extern unsigned int *auStack_2a0;
extern int fn_82F09EE0();
extern unsigned int lbl_8200D8DC;
extern unsigned int uStack_2a2;


void fn_82F0A9F0(int param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  unsigned char *pbVar15;
  short *psVar16;
  float fVar17;
  unsigned short *puVar18;
  float *pfVar19;
  unsigned char *pbVar20;
  short *psVar21;
  __int64 lVar22;
  unsigned short uStack_2a2;
  unsigned char auStack_2a0 [126];
  short sStack_222;
  unsigned char auStack_220 [512];
  
  puVar18 = &uStack_2a2;
  pbVar20 = (unsigned char *)(param_1 + 2);
  lVar22 = 8;
  do {
    pbVar15 = pbVar20 + -2;
    bVar1 = pbVar20[-1];
    bVar2 = *pbVar20;
    bVar3 = pbVar20[1];
    bVar4 = pbVar20[2];
    bVar5 = pbVar20[3];
    bVar6 = pbVar20[4];
    bVar7 = pbVar20[5];
    pbVar20 = pbVar20 + param_2;
    puVar18[1] = (unsigned short)*pbVar15;
    puVar18[2] = (unsigned short)bVar1;
    puVar18[3] = (unsigned short)bVar2;
    puVar18[4] = (unsigned short)bVar3;
    puVar18[5] = (unsigned short)bVar4;
    puVar18[6] = (unsigned short)bVar5;
    puVar18[7] = (unsigned short)bVar6;
    puVar18 = puVar18 + 8;
    *puVar18 = (unsigned short)bVar7;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  fn_82F09EE0(auStack_2a0,8,auStack_220,0);
  fVar17 = lbl_8200D8DC;
  psVar21 = &sStack_222;
  pfVar19 = (float *)(param_3 + -4);
  lVar22 = 8;
  do {
    sVar8 = psVar21[1];
    sVar9 = psVar21[4];
    sVar10 = psVar21[5];
    sVar11 = psVar21[6];
    sVar12 = psVar21[2];
    psVar16 = psVar21 + 3;
    sVar13 = psVar21[7];
    psVar21 = psVar21 + 8;
    sVar14 = *psVar21;
    pfVar19[3] = (float)(__int64)*psVar16 * fVar17;
    pfVar19[2] = (float)(__int64)sVar12 * fVar17;
    pfVar19[1] = (float)(__int64)sVar8 * fVar17;
    pfVar19[4] = (float)(__int64)sVar9 * fVar17;
    pfVar19[5] = (float)(__int64)sVar10 * fVar17;
    pfVar19[6] = (float)(__int64)sVar11 * fVar17;
    pfVar19[7] = (float)(__int64)sVar13 * fVar17;
    pfVar19 = pfVar19 + 8;
    *pfVar19 = (float)(__int64)sVar14 * fVar17;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  return;
}

