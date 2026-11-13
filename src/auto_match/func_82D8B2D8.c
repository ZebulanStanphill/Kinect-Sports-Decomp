extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F68B78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82D8B2D8(__int64 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int iVar11;
  int in_r0;
  int iVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  float afStack_40 [16];
  
  puVar9 = (unsigned int *)((unsigned int)(param_2 + 0xc) & 0xfffffff0);
  uVar15 = puVar9[1];
  uVar16 = puVar9[2];
  uVar17 = puVar9[3];
  puVar10 = (unsigned int *)((int)param_1 + 0x10U & 0xfffffff0);
  *puVar10 = *puVar9;
  puVar10[1] = uVar15;
  puVar10[2] = uVar16;
  puVar10[3] = uVar17;
  iVar12 = fn_82F68B78(param_1 + 0x20);
  fVar1 = param_2[5];
  fVar2 = *param_2;
  if (fVar2 + fVar1 + param_2[10] <= lbl_821AAD20) {
    afStack_40[2] = 0.0;
    afStack_40[0] = 1.4013e-45;
    afStack_40[1] = 2.8026e-45;
    uVar14 = (unsigned __int64)(fVar2 < fVar1);
    if (param_2[(unsigned int)(fVar2 < fVar1) * 5] < param_2[10]) {
      uVar14 = 2;
    }
    lVar13 = uVar14 * 4;
    iVar11 = (int)uVar14;
    uVar5 = *(unsigned int *)((int)afStack_40 + (int)lVar13);
    fVar6 = afStack_40[uVar5];
    fVar1 = param_2[uVar5 * 4 + iVar11];
    fVar2 = *(float *)((int)((lVar13 + (unsigned __int64)uVar5 & 0xffffffff) << 2) + (int)param_2);
    fVar3 = param_2[(int)fVar6 * 4 + iVar11];
    fVar4 = *(float *)((int)((lVar13 + (unsigned __int64)(unsigned int)fVar6 & 0xffffffff) << 2) + (int)param_2);
    fVar8 = SQRT((param_2[iVar11 * 5] -
                 (*(float *)((int)(((unsigned __int64)(unsigned int)fVar6 +
                                    ((unsigned __int64)(unsigned int)fVar6 & 0x3fffffff) * 4 & 0xffffffff) << 2) +
                            (int)param_2) +
                 *(float *)((int)(((unsigned __int64)uVar5 + ((unsigned __int64)uVar5 & 0x3fffffff) * 4 &
                                  0xffffffff) << 2) + (int)param_2))) + lbl_82002AE0);
    fVar7 = lbl_82002C5C / fVar8;
    *(float *)((int)afStack_40 + (int)lVar13) = fVar8 * lbl_82002C5C;
    afStack_40[uVar5] = (fVar1 + fVar2) * fVar7;
    afStack_40[(int)fVar6] = (fVar3 + fVar4) * fVar7;
    puVar9 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
    uVar15 = puVar9[1];
    uVar16 = puVar9[2];
    uVar17 = puVar9[3];
    puVar10 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
    *puVar10 = *puVar9;
    puVar10[1] = uVar15;
    puVar10[2] = uVar16;
    puVar10[3] = uVar17;
  }
  else {
    puVar9 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
    uVar15 = puVar9[1];
    uVar16 = puVar9[2];
    uVar17 = puVar9[3];
    puVar10 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
    *puVar10 = *puVar9;
    puVar10[1] = uVar15;
    puVar10[2] = uVar16;
    puVar10[3] = uVar17;
  }
  return;
}

