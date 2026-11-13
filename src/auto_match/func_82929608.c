extern int fn_82924628();
extern int fn_829252C0();
extern int fn_82B90378();
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8201DF6C;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE5C;
extern unsigned int lbl_821AAD20;


void fn_82929608(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  __int64 lVar11;
  unsigned int uVar12;
  int iVar13;
  __int64 lVar14;
  __int64 lVar15;
  int iVar16;
  __int64 lVar17;
  int iVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  __int64 lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_829252C0(param_1,param_4);
  }
  uVar2 = *(unsigned int *)(param_1 + 0x68);
  iVar16 = *(int *)(param_1 + 0x60);
  iVar13 = *(int *)(param_1 + 100);
  uVar3 = *(unsigned int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x34);
  dVar26 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar19 = 0;
    uVar20 = 1;
  }
  else {
    uVar19 = (unsigned __int64)uVar2 - 1;
    uVar20 = 0xffffffffffffffff;
  }
  dVar27 = dVar26;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  fVar10 = lbl_8202EE5C;
  dVar9 = lbl_8202EE40;
  fVar8 = lbl_8201DF6C;
  uVar12 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar11 = (uVar20 & 0xfffffff) * 0x10;
    lVar17 = (uVar19 & 0xfffffff) << 4;
    lVar14 = (uVar20 + uVar19 & 0xfffffff) << 4;
    lVar15 = (uVar19 - uVar20 & 0xfffffff) << 4;
    lVar21 = ((__int64)(int)(uVar2 - 1) * (__int64)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
             (__int64)iVar16 * (__int64)(int)param_2 + (__int64)iVar13 * (__int64)(int)param_3 +
             (unsigned __int64)uVar3 + (uVar20 & 0x7fffffff) * -2;
    dVar22 = (double)lbl_8200D8DC;
    dVar23 = (double)lbl_820288E0;
    dVar24 = (double)lbl_820288C8;
    do {
      iVar18 = (int)lVar17;
      fVar1 = *(float *)((uVar12 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar4);
      fVar5 = (float)(dVar27 + (double)*(float *)(iVar18 + param_4)) * fVar8;
      fVar6 = (float)((double)*(float *)(iVar18 + param_4 + 4) + dVar26) * fVar8;
      iVar16 = (int)(fVar5 + fVar1);
      iVar13 = (int)(fVar6 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar7 = (int)lVar15 + *(int *)(param_1 + 0x5c);
        dVar26 = (double)((fVar5 - (float)(__int64)iVar16) * fVar10);
        *(float *)(iVar7 + 0x10) = (float)(dVar26 * dVar24 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = iVar18 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x10) = (float)(dVar26 * dVar23 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = (int)lVar14 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)((fVar6 - (float)(__int64)iVar13) * fVar10);
        *(float *)(iVar7 + 0x10) = (float)(dVar26 * dVar22 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = (int)lVar15 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar25 * dVar24 + (double)*(float *)(iVar7 + 0x14));
        iVar18 = iVar18 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar18 + 0x14) = (float)(dVar25 * dVar23 + (double)*(float *)(iVar18 + 0x14));
        iVar18 = (int)lVar14 + *(int *)(param_1 + 0x5c);
        dVar27 = (double)(float)(dVar26 * dVar9);
        *(float *)(iVar18 + 0x14) = (float)(dVar25 * dVar22 + (double)*(float *)(iVar18 + 0x14));
        dVar26 = (double)(float)(dVar25 * dVar9);
      }
      iVar18 = iVar16;
      if (0x7e < iVar16) {
        iVar18 = 0x7f;
      }
      if (iVar18 < -0x7e) {
        iVar16 = -0x7f;
      }
      else if (0x7e < iVar16) {
        iVar16 = 0x7f;
      }
      iVar18 = iVar13;
      if (0x7e < iVar13) {
        iVar18 = 0x7f;
      }
      if (iVar18 < -0x7e) {
        iVar13 = -0x7f;
      }
      else if (0x7e < iVar13) {
        iVar13 = 0x7f;
      }
      uVar12 = uVar12 + 1;
      lVar21 = lVar21 + (uVar20 & 0x7fffffff) * 2;
      *(unsigned short *)lVar21 = (short)iVar13 << 8 | (unsigned short)iVar16 & 0xff;
      lVar17 = lVar11 + lVar17;
      lVar15 = lVar11 + lVar15;
      lVar14 = lVar11 + lVar14;
    } while (uVar12 < *(unsigned int *)(param_1 + 0x68));
  }
  return;
}

