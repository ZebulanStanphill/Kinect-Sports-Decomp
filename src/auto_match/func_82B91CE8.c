extern int fn_82924628();
extern int fn_82B8FDD0();
extern int fn_82B90378();
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82B91CE8(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

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
  int iVar13;
  __int64 lVar14;
  int iVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(param_1,param_4);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x68);
  iVar13 = *(int *)(param_1 + 0x60);
  iVar15 = *(int *)(param_1 + 100);
  uVar2 = *(unsigned int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x34);
  dVar21 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar17 = 0;
    uVar16 = 1;
  }
  else {
    uVar17 = (unsigned __int64)uVar1 - 1;
    uVar16 = 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar7 = lbl_8202EE40;
  fVar6 = lbl_82005CCC;
  fVar5 = lbl_82005328;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar14 = (uVar17 & 0xfffffff) << 4;
    lVar11 = (uVar16 + uVar17 & 0xfffffff) << 4;
    lVar12 = (uVar17 - uVar16 & 0xfffffff) << 4;
    lVar8 = ((__int64)(int)(uVar1 - 1) * (__int64)(int)(param_2 & 1) +
             (__int64)iVar13 * (__int64)(int)param_2 + (__int64)iVar15 * (__int64)(int)param_3 +
            (unsigned __int64)uVar2) - uVar16;
    dVar18 = (double)lbl_8200D8DC;
    lVar10 = (uVar16 & 0xfffffff) * 0x10;
    dVar19 = (double)lbl_820288E0;
    dVar20 = (double)lbl_820288C8;
    do {
      fVar4 = (float)((double)*(float *)(param_4 + 0xc + (int)lVar14) + dVar21) * fVar6;
      iVar13 = (int)(*(float *)((uVar9 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar3) +
                    fVar4);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar15 = (int)lVar12 + *(int *)(param_1 + 0x5c);
        dVar21 = (double)((fVar4 - (float)(__int64)iVar13) * fVar5);
        *(float *)(iVar15 + 0x1c) = (float)(dVar21 * dVar20 + (double)*(float *)(iVar15 + 0x1c));
        iVar15 = (int)lVar14 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar15 + 0x1c) = (float)(dVar21 * dVar19 + (double)*(float *)(iVar15 + 0x1c));
        iVar15 = (int)lVar11 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar15 + 0x1c) = (float)(dVar21 * dVar18 + (double)*(float *)(iVar15 + 0x1c));
        dVar21 = (double)(float)(dVar21 * dVar7);
      }
      iVar15 = iVar13;
      if (0xfe < iVar13) {
        iVar15 = 0xff;
      }
      if (iVar15 < 1) {
        iVar13 = 0;
      }
      else if (0xfe < iVar13) {
        iVar13 = 0xff;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + uVar16;
      *(unsigned char *)lVar8 = (char)iVar13;
      lVar14 = lVar14 + lVar10;
      lVar12 = lVar12 + lVar10;
      lVar11 = lVar11 + lVar10;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x68));
  }
  return;
}

