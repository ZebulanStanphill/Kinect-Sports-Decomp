extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82C71518(double param_1,double param_2,double param_3,int param_4)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  int iVar8;
  __int64 lVar7;
  unsigned __int64 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar11 = lbl_82005730;
  if ((double)lbl_821AAD20 < param_3) {
    fVar3 = (float)(__int64)*(int *)(param_4 + 4);
    fVar2 = (float)(param_2 - param_3);
    if (fVar3 < (float)(param_2 - param_3)) {
      fVar2 = fVar3;
    }
    uVar1 = (unsigned int)fVar2;
    uVar9 = 0;
    dVar12 = (double)lbl_82002AE0;
    if (3 < (int)uVar1) {
      iVar6 = 0;
      iVar8 = (int)((double)(float)(param_1 + dVar12) + lbl_82005730);
      do {
        iVar4 = iVar6 + 0xc;
        uVar9 = uVar9 + 4;
        *(int *)(iVar6 + *(int *)(param_4 + 0x14)) = iVar8;
        *(int *)(iVar6 + *(int *)(param_4 + 0x14) + 4) = iVar8;
        iVar6 = iVar6 + 0x10;
        *(int *)(iVar4 + *(int *)(param_4 + 0x14) + -4) = iVar8;
        *(int *)(iVar4 + *(int *)(param_4 + 0x14)) = iVar8;
      } while ((int)uVar9 < (int)(uVar1 - 3));
    }
    if ((int)uVar9 < (int)uVar1) {
      lVar5 = uVar1 - uVar9;
      lVar7 = (uVar9 & 0x3fffffff) << 2;
      uVar9 = lVar5 + uVar9;
      do {
        *(int *)((int)lVar7 + *(int *)(param_4 + 0x14)) =
             (int)((double)(float)(param_1 + dVar12) + dVar11);
        lVar7 = lVar7 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    dVar13 = lbl_82005710;
    fVar2 = (float)(__int64)*(int *)(param_4 + 4);
    if ((float)(param_2 - -param_3) <= (float)(__int64)*(int *)(param_4 + 4)) {
      fVar2 = (float)(param_2 - -param_3);
    }
    if ((int)uVar9 < (int)fVar2) {
      lVar5 = (unsigned int)(int)fVar2 - uVar9;
      lVar7 = (uVar9 & 0x3fffffff) << 2;
      do {
        fVar2 = (float)((double)(__int64)(int)uVar9 - param_2);
        dVar10 = -(double)(fVar2 * fVar2 - (float)(param_3 * param_3));
        if (dVar13 < dVar10) {
          *(int *)((int)lVar7 + *(int *)(param_4 + 0x14)) = (int)((param_1 - SQRT(dVar10)) + dVar11)
          ;
        }
        else {
          *(int *)((int)lVar7 + *(int *)(param_4 + 0x14)) = (int)(param_1 + dVar11);
        }
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    iVar8 = *(int *)(param_4 + 4);
    if ((int)uVar9 < iVar8) {
      lVar5 = (uVar9 & 0x3fffffff) << 2;
      do {
        uVar9 = uVar9 + 1;
        *(int *)((int)lVar5 + *(int *)(param_4 + 0x14)) =
             (int)((double)(float)(param_1 + dVar12) + dVar11);
        lVar5 = lVar5 + 4;
        iVar8 = *(int *)(param_4 + 4);
      } while ((int)uVar9 < iVar8);
    }
    iVar6 = 0;
    if (0 < iVar8) {
      iVar4 = 0;
      do {
        iVar6 = iVar6 + 1;
        *(int *)(iVar4 + *(int *)(param_4 + 0x18)) = (int)(param_1 + dVar11);
        iVar4 = iVar4 + 4;
        iVar8 = *(int *)(param_4 + 4);
      } while (iVar6 < iVar8);
    }
    iVar6 = 0;
    if (0 < iVar8) {
      iVar8 = 0;
      dVar12 = (double)lbl_82005344;
      do {
        iVar6 = iVar6 + 1;
        *(int *)(*(int *)(param_4 + 0x1c) + iVar8) =
             (int)((double)((float)(param_1 * dVar12) -
                           (float)(__int64)*(int *)(iVar8 + *(int *)(param_4 + 0x14))) + dVar11);
        *(int *)(iVar8 + *(int *)(param_4 + 0x20)) =
             (int)((double)((float)(param_1 * dVar12) -
                           (float)(__int64)*(int *)(iVar8 + *(int *)(param_4 + 0x18))) + dVar11);
        iVar8 = iVar8 + 4;
      } while (iVar6 < *(int *)(param_4 + 4));
    }
  }
  else {
    iVar8 = 0;
    if (0 < *(int *)(param_4 + 4)) {
      iVar6 = 0;
      dVar13 = param_1 + lbl_82005730;
      dVar12 = (double)(float)(param_1 + (double)lbl_82002AE0) + lbl_82005730;
      dVar11 = (double)(float)(param_1 - (double)lbl_82002AE0) + lbl_82005730;
      do {
        iVar8 = iVar8 + 1;
        *(int *)(iVar6 + *(int *)(param_4 + 0x14)) = (int)dVar12;
        *(int *)(iVar6 + *(int *)(param_4 + 0x18)) = (int)dVar13;
        *(int *)(*(int *)(param_4 + 0x1c) + iVar6) = (int)dVar11;
        *(int *)(iVar6 + *(int *)(param_4 + 0x20)) = (int)dVar13;
        iVar6 = iVar6 + 4;
      } while (iVar8 < *(int *)(param_4 + 4));
      return 0;
    }
  }
  return 0;
}

