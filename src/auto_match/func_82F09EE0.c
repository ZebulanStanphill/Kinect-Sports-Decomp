extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int uStack_c4;


void fn_82F09EE0(short *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned short *puVar14;
  unsigned int *puVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  __int64 lVar27;
  unsigned __int64 uVar28;
  __int64 lVar29;
  unsigned __int64 uVar30;
  __int64 lVar31;
  int aiStack_1d0 [12];
  unsigned int auStack_1a0 [16];
  unsigned int auStack_160 [8];
  unsigned int auStack_140 [8];
  unsigned int auStack_120 [8];
  unsigned int auStack_100 [8];
  unsigned int auStack_e0 [7];
  unsigned int uStack_c4;
  unsigned int auStack_c0 [48];
  
  aiStack_1d0[4] = 0xca4;
  aiStack_1d0[5] = 0xc99;
  uVar21 = 0;
  lVar31 = 8;
  aiStack_1d0[9] = 0;
  aiStack_1d0[8] = 0xc6d;
  aiStack_1d0[0] = 0;
  aiStack_1d0[6] = 0xc8e;
  aiStack_1d0[7] = 0xc78;
  aiStack_1d0[10] = 0xc4c;
  puVar15 = auStack_1a0;
  aiStack_1d0[1] = 1;
  aiStack_1d0[2] = 3;
  aiStack_1d0[3] = 1;
  do {
    lVar6 = (__int64)param_1[1];
    lVar10 = (__int64)param_1[2];
    lVar12 = (__int64)*param_1;
    lVar29 = (__int64)param_1[5];
    lVar5 = (__int64)param_1[3];
    lVar8 = (__int64)param_1[7];
    lVar4 = (__int64)param_1[4];
    lVar27 = (__int64)param_1[6];
    uVar19 = lVar10 + lVar6 + lVar5 + lVar12;
    uVar17 = lVar27 + lVar29 + lVar8 + lVar4;
    uVar16 = (lVar5 + lVar12) - (lVar10 + lVar6);
    uVar26 = lVar6 - lVar10;
    uVar22 = lVar4 - lVar8;
    uVar23 = lVar29 - lVar27;
    uVar20 = (lVar8 + lVar4) - (lVar27 + lVar29);
    uVar9 = lVar12 - lVar8;
    uVar24 = lVar12 - lVar5;
    uVar13 = lVar5 - lVar4;
    uVar11 = lVar10 - lVar29;
    uVar7 = lVar6 - lVar27;
    *puVar15 = (int)((uVar17 + (uVar17 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
               (int)((uVar19 + (uVar19 & 0x7fffffff) * 2 & 0xffffffff) << 2) + 4 >> 3;
    puVar15[1] = (int)(((uVar9 & 0x3fffffff) * 4 + uVar13 + 1 & 0xffffffff) << 2) +
                 (int)uVar11 + (int)((uVar11 & 0xffffffff) << 3) +
                 ((int)((uVar7 & 0xffffffff) << 4) - (int)uVar7) >> 3;
    puVar15[2] = ((int)((-uVar22 & 0xffffffff) << 4) -
                 (int)((uVar23 + (uVar23 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                 (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 1) +
                 (int)((uVar24 & 0xffffffff) << 4) + 4 >> 3;
    puVar15[3] = ((int)((((uVar11 & 0x3fffffff) * -4 + 1) - uVar7 & 0xffffffff) << 2) -
                 ((int)uVar13 + (int)((uVar13 & 0xffffffff) << 3))) +
                 ((int)((uVar9 & 0xffffffff) << 4) - (int)uVar9) >> 3;
    puVar15[4] = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                 (int)((uVar16 + (uVar16 & 0x7fffffff) * 2 & 0xffffffff) << 2) + 4 >> 3;
    param_1 = param_1 + param_2;
    puVar15[5] = (int)((uVar11 + (uVar7 & 0x3fffffff) * -4 + 1 & 0xffffffff) << 2) +
                 ((int)((uVar13 & 0xffffffff) << 4) - (int)uVar13) +
                 (int)uVar9 + (int)((uVar9 & 0xffffffff) << 3) >> 3;
    puVar15[6] = ((int)((uVar23 & 0xffffffff) << 4) -
                 (int)((uVar22 + (uVar22 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                 ((int)((uVar24 + (uVar24 & 0x7fffffff) * 2 & 0xffffffff) << 1) -
                 (int)((uVar26 & 0xffffffff) << 4)) + 4 >> 3;
    puVar15[7] = ((int)((uVar9 + (uVar13 & 0x3fffffff) * -4 + 1 & 0xffffffff) << 2) +
                 ((int)((uVar11 & 0xffffffff) << 4) - (int)uVar11)) -
                 ((int)uVar7 + (int)((uVar7 & 0xffffffff) << 3)) >> 3;
    puVar15 = puVar15 + 8;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  puVar14 = (unsigned short *)(param_3 + 0x5e);
  puVar15 = &uStack_c4;
  lVar31 = 8;
  do {
    uVar25 = (unsigned __int64)puVar15[-0x37];
    uVar17 = (unsigned __int64)puVar15[-0x1f];
    uVar24 = (unsigned __int64)puVar15[-0x27];
    uVar22 = (unsigned __int64)puVar15[-0x2f];
    uVar28 = (unsigned __int64)puVar15[-0x17];
    uVar11 = uVar25 - uVar17;
    uVar30 = (unsigned __int64)puVar15[-0xf];
    uVar7 = (unsigned __int64)puVar15[-7];
    puVar15 = puVar15 + 1;
    uVar26 = (unsigned __int64)*puVar15;
    uVar18 = (uVar17 + uVar25) - (uVar24 + uVar22);
    iVar3 = aiStack_1d0[uVar21 & 3];
    uVar13 = uVar24 + uVar22 + uVar17 + uVar25;
    uVar19 = uVar7 + uVar30 + uVar26 + uVar28;
    uVar20 = uVar28 - uVar26;
    iVar1 = aiStack_1d0[iVar3 + 4];
    iVar2 = aiStack_1d0[iVar3 + 5];
    iVar3 = aiStack_1d0[iVar3 + 7];
    uVar23 = (uVar26 + uVar28) - (uVar7 + uVar30);
    uVar9 = uVar22 - uVar24;
    uVar16 = uVar30 - uVar7;
    uVar17 = uVar17 - uVar28;
    uVar25 = uVar25 - uVar26;
    puVar14[-0x2f] =
         (short)(iVar1 * ((int)((uVar19 + (uVar19 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                         (int)((uVar13 + (uVar13 & 0x7fffffff) * 2 & 0xffffffff) << 2)) + 0x4000 >>
                0xf);
    uVar24 = uVar24 - uVar30;
    uVar22 = uVar22 - uVar7;
    puVar14[-0x27] =
         (short)(((int)(((uVar25 & 0x3fffffff) * 4 + uVar17 & 0xffffffff) << 2) +
                  (int)uVar24 + (int)((uVar24 & 0xffffffff) << 3) +
                 ((int)((uVar22 & 0xffffffff) << 4) - (int)uVar22)) * iVar2 + 0x4000 >> 0xf);
    puVar14[-0x17] =
         (short)((((int)uVar17 * -9 - (int)(((uVar24 & 0x3fffffff) * 4 + uVar22 & 0xffffffff) << 2))
                 + ((int)((uVar25 & 0xffffffff) << 4) - (int)uVar25)) * iVar2 + 0x4000 >> 0xf);
    puVar14[-0xf] =
         (short)(iVar1 * ((int)((uVar23 + (uVar23 & 0x7fffffff) * 2 & 0xffffffff) << 2) +
                         (int)((uVar18 + (uVar18 & 0x7fffffff) * 2 & 0xffffffff) << 2)) + 0x4000 >>
                0xf);
    puVar14[-7] = (short)(((int)((uVar24 + (uVar22 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
                           ((int)((uVar17 & 0xffffffff) << 4) - (int)uVar17) +
                          (int)uVar25 + (int)((uVar25 & 0xffffffff) << 3)) * iVar2 + 0x4000 >> 0xf);
    puVar14[9] = (short)((((int)((uVar25 + (uVar17 & 0x3fffffff) * -4 & 0xffffffff) << 2) +
                          ((int)((uVar24 & 0xffffffff) << 4) - (int)uVar24)) -
                         ((int)uVar22 + (int)((uVar22 & 0xffffffff) << 3))) * iVar2 + 0x4000 >> 0xf)
    ;
    puVar14[-0x1f] =
         (short)(iVar3 * (((int)uVar20 * -0x10 -
                          (int)((uVar16 + (uVar16 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                         (int)((uVar9 + (uVar9 & 0x7fffffff) * 2 & 0xffffffff) << 1) +
                         (int)((uVar11 & 0xffffffff) << 4)) + 0x4000 >> 0xf);
    uVar21 = uVar21 + 1;
    puVar14 = puVar14 + 1;
    *puVar14 = (short)(iVar3 * (((int)((uVar16 & 0xffffffff) << 4) -
                                (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 1)) +
                               ((int)((uVar11 + (uVar11 & 0x7fffffff) * 2 & 0xffffffff) << 1) -
                               (int)((uVar9 & 0xffffffff) << 4))) + 0x4000 >> 0xf);
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  return;
}

