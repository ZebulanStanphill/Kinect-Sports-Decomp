extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;


void fn_82E6D500(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,__int64 param_7,unsigned __int64 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  __int64 lVar11;
  float *pfVar13;
  __int64 lVar12;
  float *pfVar14;
  __int64 lVar15;
  __int64 lVar16;
  float *pfVar17;
  __int64 lVar18;
  __int64 lVar19;
  __int64 lVar20;
  __int64 lVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  float *pfVar24;
  unsigned __int64 uVar25;
  __int64 lVar26;
  __int64 lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  lVar27 = (param_8 - 1 & 0x3fffffff) << 2;
  dVar30 = (double)lbl_821AAD20;
  dVar31 = dVar30;
  fn_82F68CC0(param_1 + (param_8 & 0x3fffffff) * -4 + 4,param_5,lVar27);
  lVar26 = param_2 + (param_8 & 0x3fffffff) * -4 + 4;
  fn_82F68CC0(lVar26,param_6,lVar27);
  pfVar13 = (float *)param_2;
  *pfVar13 = (float)dVar30;
  lVar12 = 0;
  if (0 < (int)param_7) {
    uVar25 = param_8 - 1;
    pfVar24 = (float *)(in_stack_00000054 + -0x10);
    lVar11 = param_1;
    do {
      pfVar14 = (float *)param_3;
      fVar1 = *(float *)lVar11 * *pfVar14;
      uVar22 = uVar25;
      dVar28 = dVar30;
      dVar29 = dVar30;
      if (1 < (int)uVar25) {
        lVar20 = (uVar25 & 0x3fffffff) * 4;
        lVar18 = ((param_8 - 3 & 0xffffffff) >> 1) + 1;
        lVar16 = lVar20 + param_3 + 8;
        lVar19 = lVar20 + param_4 + -4;
        lVar20 = ((lVar12 - uVar25) - 1 & 0x3fffffff) * 4 + param_1;
        lVar21 = param_2 + (uVar25 & 0x3fffffff) * -4 + -4;
        lVar15 = param_2 + (uVar25 & 0x3fffffff) * -4;
        uVar22 = uVar25 - (lVar18 * 2 & 0xfffffffeU);
        do {
          pfVar17 = (float *)lVar19;
          fVar2 = pfVar17[1];
          fVar3 = *(float *)((int)lVar20 + 4);
          lVar16 = lVar16 + -8;
          fVar7 = *(float *)lVar16;
          iVar10 = (int)lVar21;
          fVar4 = *(float *)(iVar10 + 4);
          *(unsigned int *)(iVar10 + 4) = *(unsigned int *)(iVar10 + 8);
          fVar9 = *(float *)(((int)pfVar14 - (int)param_4) + (int)pfVar17);
          lVar20 = lVar20 + 8;
          fVar8 = *(float *)lVar20;
          fVar5 = *(float *)(iVar10 + 8);
          fVar6 = *pfVar17;
          lVar15 = lVar15 + 8;
          lVar21 = lVar21 + 8;
          *(unsigned int *)lVar21 = *(unsigned int *)lVar15;
          dVar28 = (double)(float)((double)(fVar3 * fVar7 - fVar2 * fVar4) + dVar28);
          lVar19 = lVar19 + -8;
          dVar29 = (double)(float)((double)(fVar9 * fVar8 - fVar6 * fVar5) + dVar29);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      uVar23 = (unsigned int)uVar22;
      if (0 < (int)uVar23) {
        pfVar17 = pfVar13 + -(uVar23 & 0x3fffffff);
        fVar3 = *(float *)(uVar23 * 4 + (int)param_4);
        fVar4 = pfVar14[uVar23];
        fVar2 = *pfVar17;
        fVar5 = *(float *)((int)((lVar12 - uVar22 & 0xffffffff) << 2) + (int)param_1);
        *pfVar17 = pfVar17[1];
        fVar1 = (fVar5 * fVar4 - fVar3 * fVar2) + fVar1;
      }
      lVar12 = lVar12 + 1;
      fVar1 = (float)(dVar29 + dVar28) + fVar1;
      dVar28 = (double)fVar1;
      pfVar13[-1] = fVar1;
      fVar1 = (float)(dVar28 * dVar28 + dVar31);
      dVar31 = (double)fVar1;
      if (((unsigned int)lVar12 & in_stack_0000005c - 1U) == 0) {
        pfVar24 = pfVar24 + 4;
        *pfVar24 = fVar1;
        dVar31 = dVar30;
      }
      lVar11 = lVar11 + 4;
    } while ((int)(unsigned int)lVar12 < (int)param_7);
  }
  fn_82F68CC0(param_5,((param_7 - param_8) + 1 & 0x3fffffff) * 4 + param_1,lVar27);
  fn_82F68CC0(param_6,lVar26,lVar27);
  return;
}

