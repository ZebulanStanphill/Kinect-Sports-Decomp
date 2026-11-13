extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005730;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82C72180(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  __int64 lVar7;
  int iVar8;
  unsigned __int64 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar10 = lbl_82005730;
  if ((param_3 <= (double)lbl_821AAD20) || (param_4 <= (double)lbl_821AAD20)) {
    iVar8 = 0;
    if (0 < *(int *)(param_5 + 4)) {
      iVar6 = 0;
      dVar12 = param_1 + lbl_82005730;
      dVar11 = (double)(float)(param_1 + (double)lbl_82002AE0) + lbl_82005730;
      dVar10 = (double)(float)(param_1 - (double)lbl_82002AE0) + lbl_82005730;
      do {
        iVar8 = iVar8 + 1;
        *(int *)(iVar6 + *(int *)(param_5 + 0x14)) = (int)dVar11;
        *(int *)(iVar6 + *(int *)(param_5 + 0x18)) = (int)dVar12;
        *(int *)(iVar6 + *(int *)(param_5 + 0x1c)) = (int)dVar10;
        *(int *)(iVar6 + *(int *)(param_5 + 0x20)) = (int)dVar12;
        iVar6 = iVar6 + 4;
      } while (iVar8 < *(int *)(param_5 + 4));
    }
  }
  else {
    fVar2 = (float)(param_2 - (double)(float)(param_4 * (double)lbl_82002C5C));
    fVar3 = (float)(param_2 - -(double)(float)(param_4 * (double)lbl_82002C5C));
    dVar11 = (double)((float)(__int64)(int)(param_1 + lbl_82005730) +
                     (float)(param_3 * (double)lbl_8200533C));
    if ((float)(__int64)*(int *)(param_5 + 4) < fVar2) {
      fVar2 = (float)(__int64)*(int *)(param_5 + 4);
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
        *(int *)(iVar6 + *(int *)(param_5 + 0x14)) = iVar8;
        *(int *)(iVar6 + *(int *)(param_5 + 0x14) + 4) = iVar8;
        iVar6 = iVar6 + 0x10;
        *(int *)(iVar4 + *(int *)(param_5 + 0x14) + -4) = iVar8;
        *(int *)(iVar4 + *(int *)(param_5 + 0x14)) = iVar8;
      } while ((int)uVar9 < (int)(uVar1 - 3));
    }
    if ((int)uVar9 < (int)uVar1) {
      lVar5 = uVar1 - uVar9;
      lVar7 = (uVar9 & 0x3fffffff) << 2;
      uVar9 = lVar5 + uVar9;
      do {
        *(int *)((int)lVar7 + *(int *)(param_5 + 0x14)) =
             (int)((double)(float)(param_1 + dVar12) + dVar10);
        lVar7 = lVar7 + 4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    fVar2 = (float)(__int64)*(int *)(param_5 + 4);
    if (fVar3 <= (float)(__int64)*(int *)(param_5 + 4)) {
      fVar2 = fVar3;
    }
    uVar1 = (unsigned int)fVar2;
    if ((int)uVar9 < (int)uVar1) {
      if (3 < (int)(uVar1 - (int)uVar9)) {
        lVar5 = (uVar9 & 0x3fffffff) << 2;
        iVar8 = (int)(dVar11 + dVar10);
        do {
          iVar6 = (int)lVar5;
          uVar9 = uVar9 + 4;
          *(int *)(iVar6 + *(int *)(param_5 + 0x14)) = iVar8;
          lVar5 = lVar5 + 0x10;
          *(int *)(iVar6 + *(int *)(param_5 + 0x14) + 4) = iVar8;
          *(int *)(iVar6 + 0xc + *(int *)(param_5 + 0x14) + -4) = iVar8;
          *(int *)(iVar6 + 0xc + *(int *)(param_5 + 0x14)) = iVar8;
        } while ((int)uVar9 < (int)(uVar1 - 3));
      }
      if ((int)uVar9 < (int)uVar1) {
        lVar5 = uVar1 - uVar9;
        lVar7 = (uVar9 & 0x3fffffff) << 2;
        uVar9 = lVar5 + uVar9;
        do {
          *(int *)((int)lVar7 + *(int *)(param_5 + 0x14)) = (int)(dVar11 + dVar10);
          lVar7 = lVar7 + 4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    iVar8 = *(int *)(param_5 + 4);
    if ((int)uVar9 < iVar8) {
      lVar5 = (uVar9 & 0x3fffffff) << 2;
      do {
        uVar9 = uVar9 + 1;
        *(int *)((int)lVar5 + *(int *)(param_5 + 0x14)) =
             (int)((double)(float)(param_1 + dVar12) + dVar10);
        lVar5 = lVar5 + 4;
        iVar8 = *(int *)(param_5 + 4);
      } while ((int)uVar9 < iVar8);
    }
    iVar6 = 0;
    if (0 < iVar8) {
      iVar4 = 0;
      do {
        iVar6 = iVar6 + 1;
        *(int *)(iVar4 + *(int *)(param_5 + 0x18)) = (int)(param_1 + dVar10);
        iVar4 = iVar4 + 4;
        iVar8 = *(int *)(param_5 + 4);
      } while (iVar6 < iVar8);
    }
    iVar6 = 0;
    if (0 < iVar8) {
      iVar8 = 0;
      dVar11 = (double)lbl_82005344;
      do {
        iVar6 = iVar6 + 1;
        *(int *)(iVar8 + *(int *)(param_5 + 0x1c)) =
             (int)((double)((float)(param_1 * dVar11) -
                           (float)(__int64)*(int *)(iVar8 + *(int *)(param_5 + 0x14))) + dVar10);
        *(int *)(iVar8 + *(int *)(param_5 + 0x20)) =
             (int)((double)((float)(param_1 * dVar11) -
                           (float)(__int64)*(int *)(iVar8 + *(int *)(param_5 + 0x18))) + dVar10);
        iVar8 = iVar8 + 4;
      } while (iVar6 < *(int *)(param_5 + 4));
      return 0;
    }
  }
  return 0;
}

