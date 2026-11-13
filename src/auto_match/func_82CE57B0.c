extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82CE57B0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar5;
  float fVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int in_r0;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  float afStack_40 [16];
  
  fVar1 = param_2[5];
  fVar2 = *param_2;
  if (fVar2 + fVar1 + param_2[10] <= lbl_821AAD20) {
    afStack_40[2] = 0.0;
    afStack_40[0] = 1.4013e-45;
    afStack_40[1] = 2.8026e-45;
    uVar13 = (unsigned __int64)(fVar2 < fVar1);
    if (param_2[(unsigned int)(fVar2 < fVar1) * 5] < param_2[10]) {
      uVar13 = 2;
    }
    lVar12 = uVar13 * 4;
    iVar11 = (int)uVar13;
    uVar5 = *(unsigned int *)((int)afStack_40 + (int)lVar12);
    fVar6 = afStack_40[uVar5];
    fVar1 = param_2[uVar5 * 4 + iVar11];
    fVar2 = *(float *)((int)((lVar12 + (unsigned __int64)uVar5 & 0xffffffff) << 2) + (int)param_2);
    fVar3 = param_2[(int)fVar6 * 4 + iVar11];
    fVar4 = *(float *)((int)((lVar12 + (unsigned __int64)(unsigned int)fVar6 & 0xffffffff) << 2) + (int)param_2);
    fVar10 = SQRT((param_2[iVar11 * 5] -
                  (*(float *)((int)(((unsigned __int64)(unsigned int)fVar6 +
                                     ((unsigned __int64)(unsigned int)fVar6 & 0x3fffffff) * 4 & 0xffffffff) << 2) +
                             (int)param_2) +
                  *(float *)((int)(((unsigned __int64)uVar5 + ((unsigned __int64)uVar5 & 0x3fffffff) * 4 &
                                   0xffffffff) << 2) + (int)param_2))) + lbl_82002AE0);
    fVar9 = lbl_82002C5C / fVar10;
    *(float *)((int)afStack_40 + (int)lVar12) = fVar10 * lbl_82002C5C;
    afStack_40[uVar5] = (fVar1 + fVar2) * fVar9;
    afStack_40[(int)fVar6] = (fVar3 + fVar4) * fVar9;
    puVar7 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
    uVar14 = puVar7[1];
    uVar15 = puVar7[2];
    uVar16 = puVar7[3];
    puVar8 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
    *puVar8 = *puVar7;
    puVar8[1] = uVar14;
    puVar8[2] = uVar15;
    puVar8[3] = uVar16;
  }
  else {
    puVar7 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
    uVar14 = puVar7[1];
    uVar15 = puVar7[2];
    uVar16 = puVar7[3];
    puVar8 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
    *puVar8 = *puVar7;
    puVar8[1] = uVar14;
    puVar8[2] = uVar15;
    puVar8[3] = uVar16;
  }
  return;
}

