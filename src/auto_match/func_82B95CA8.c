extern int fn_82924628();
extern int fn_82B8FDD0();
extern int fn_82B90378();
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8200DD28;
extern unsigned int lbl_820145F8;
extern unsigned int lbl_820287F0;
extern unsigned int lbl_820287F4;
extern unsigned int lbl_820287F8;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82B95CA8(int param_1,unsigned int param_2,unsigned int param_3,float *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  __int64 lVar8;
  unsigned int uVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = (float *)fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = (float *)fn_82B8FDD0(param_1,param_4);
  }
  fVar4 = lbl_820287F8;
  fVar6 = lbl_820287F4;
  fVar5 = lbl_820287F0;
  uVar1 = *(unsigned int *)(param_1 + 0x68);
  iVar14 = *(int *)(param_1 + 0x60);
  iVar16 = *(int *)(param_1 + 100);
  uVar2 = *(unsigned int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x34);
  dVar22 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar17 = 0;
    uVar18 = 1;
  }
  else {
    uVar17 = (unsigned __int64)uVar1 - 1;
    uVar18 = 0xffffffffffffffff;
  }
  uVar9 = 0;
  pfVar15 = param_4;
  if ((unsigned __int64)uVar1 != 0) {
    do {
      uVar9 = uVar9 + 1;
      *pfVar15 = *pfVar15 * fVar5 + pfVar15[2] * fVar6 + pfVar15[1] * fVar4;
      pfVar15 = pfVar15 + 4;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar7 = lbl_8202EE40;
  fVar6 = lbl_820145F8;
  fVar5 = lbl_8200DD28;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar11 = (uVar18 + uVar17 & 0xfffffff) << 4;
    lVar10 = (uVar18 & 0xfffffff) * 0x10;
    lVar13 = (uVar17 & 0xfffffff) << 4;
    lVar12 = (uVar17 - uVar18 & 0xfffffff) << 4;
    lVar8 = ((__int64)(int)(uVar1 - 1) * (__int64)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
            (__int64)iVar14 * (__int64)(int)param_2 + (__int64)iVar16 * (__int64)(int)param_3 +
            (unsigned __int64)uVar2 + (uVar18 & 0x7fffffff) * -2;
    dVar21 = (double)lbl_820288C8;
    dVar19 = (double)lbl_8200D8DC;
    dVar20 = (double)lbl_820288E0;
    do {
      fVar4 = (float)((double)*(float *)((int)lVar13 + (int)param_4) + dVar22) * fVar6;
      iVar14 = (int)(*(float *)((uVar9 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar3) +
                    fVar4);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar16 = *(int *)(param_1 + 0x5c) + (int)lVar12;
        dVar22 = (double)((fVar4 - (float)(__int64)iVar14) * fVar5);
        *(float *)(iVar16 + 0x10) = (float)(dVar22 * dVar21 + (double)*(float *)(iVar16 + 0x10));
        iVar16 = *(int *)(param_1 + 0x5c) + (int)lVar13;
        *(float *)(iVar16 + 0x10) = (float)(dVar22 * dVar20 + (double)*(float *)(iVar16 + 0x10));
        iVar16 = *(int *)(param_1 + 0x5c) + (int)lVar11;
        *(float *)(iVar16 + 0x10) = (float)(dVar22 * dVar19 + (double)*(float *)(iVar16 + 0x10));
        dVar22 = (double)(float)(dVar22 * dVar7);
      }
      iVar16 = iVar14;
      if (0xfffe < iVar14) {
        iVar16 = 0xffff;
      }
      if (iVar16 < 1) {
        iVar14 = 0;
      }
      else if (0xfffe < iVar14) {
        iVar14 = 0xffff;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + (uVar18 & 0x7fffffff) * 2;
      *(unsigned short *)lVar8 = (short)iVar14;
      lVar13 = lVar10 + lVar13;
      lVar12 = lVar10 + lVar12;
      lVar11 = lVar10 + lVar11;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x68));
  }
  return;
}

