extern unsigned int *auStack_20;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_8277C338(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  unsigned int uVar7;
  float *pfVar8;
  unsigned __int64 uVar9;
  float *pfVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  float *pfVar13;
  unsigned int auStack_20 [6];
  
  fVar6 = lbl_821AAD20;
  iVar3 = *(int *)(param_1 + 0x110);
  uVar9 = (param_2 & 0xffffffff) >> 0x1e & 1;
  pfVar8 = (float *)(*(int *)((((unsigned int)param_2 & 0xbfffffff) >> 8 & 0xfffffc) + iVar3) +
                    ((unsigned int)param_2 & 0x3ff) * 8);
  if (uVar9 == 0) {
    uVar12 = *(unsigned int *)(param_1 + 0x1a4);
    if (uVar12 < 2) {
      return 1;
    }
    uVar7 = *(unsigned int *)(*(int *)((uVar12 - 2 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                     ((uVar12 - 2) * 4 & 0x3fc));
    uVar12 = *(unsigned int *)(*(int *)((uVar12 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                      ((uVar12 - 1) * 4 & 0x3fc));
    iVar5 = (uVar12 & 0x3ff) * 8;
    iVar4 = *(int *)((uVar12 >> 8 & 0xfffffc) + iVar3);
    pfVar10 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + iVar3) + (uVar7 & 0x3ff) * 8);
    fVar2 = *(float *)(iVar4 + iVar5);
    fVar1 = *(float *)(iVar4 + iVar5 + 4);
    fVar1 = (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (fVar2 - *pfVar10) * (pfVar8[1] - fVar1);
    if (fVar1 == lbl_821AAD20) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + 0x1d0);
    if (iVar4 == 0) {
      uVar11 = 3;
      if (lbl_821AAD20 <= fVar1) {
        uVar11 = 4;
      }
      *(unsigned int *)(param_1 + 0x1d0) = uVar11;
      goto LAB_8277c508;
    }
  }
  else {
    uVar12 = *(unsigned int *)(param_1 + 0x194);
    if (uVar12 < 2) {
      return 1;
    }
    uVar7 = *(unsigned int *)(*(int *)((uVar12 - 2 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                     ((uVar12 - 2) * 4 & 0x3fc));
    uVar12 = *(unsigned int *)(*(int *)((uVar12 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                      ((uVar12 - 1) * 4 & 0x3fc));
    iVar5 = (uVar12 & 0x3ff) * 8;
    iVar4 = *(int *)((uVar12 >> 8 & 0xfffffc) + iVar3);
    pfVar10 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + iVar3) + (uVar7 & 0x3ff) * 8);
    fVar2 = *(float *)(iVar4 + iVar5);
    fVar1 = *(float *)(iVar4 + iVar5 + 4);
    fVar1 = (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (pfVar8[1] - fVar1) * (fVar2 - *pfVar10);
    if (fVar1 == lbl_821AAD20) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + 0x1cc);
    if (iVar4 == 0) {
      uVar11 = 3;
      if (lbl_821AAD20 <= fVar1) {
        uVar11 = 4;
      }
      *(unsigned int *)(param_1 + 0x1cc) = uVar11;
      goto LAB_8277c508;
    }
  }
  if ((unsigned int)LZCOUNT(iVar4 + -3) >> 5 != (unsigned int)(fVar1 < lbl_821AAD20)) {
    return 0;
  }
LAB_8277c508:
  if (((*(int *)(param_1 + 0x1c8) == 0) && (*(int *)(param_1 + 0x1cc) != 0)) &&
     (*(int *)(param_1 + 0x1d0) != 0)) {
    auStack_20[0] = 3;
    auStack_20[2] = 2;
    auStack_20[1] = 1;
    auStack_20[3] = 4;
    *(unsigned int *)(param_1 + 0x1c8) =
         *(unsigned int *)
          ((int)auStack_20 +
          (int)(((unsigned __int64)LZCOUNT(*(int *)(param_1 + 0x1cc) + -4) >> 4 & 2 |
                (unsigned __int64)(*(int *)(param_1 + 0x1d0) == 4)) << 2));
  }
  iVar4 = *(int *)(param_1 + 0x1c8);
  if (iVar4 == 2) {
    if (uVar9 == 0) {
      uVar12 = *(int *)(param_1 + 0x194) - 2;
      uVar7 = *(int *)(param_1 + 0x194) - 1;
      uVar12 = *(unsigned int *)(*(int *)((uVar12 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                        (uVar12 * 4 & 0x3fc));
      uVar7 = *(unsigned int *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                       (uVar7 * 4 & 0x3fc));
      iVar5 = (uVar7 & 0x3ff) * 8;
      iVar4 = *(int *)((uVar7 >> 8 & 0xfffffc) + iVar3);
      pfVar10 = (float *)(*(int *)((uVar12 >> 8 & 0xfffffc) + iVar3) + (uVar12 & 0x3ff) * 8);
      fVar2 = *(float *)(iVar4 + iVar5);
      fVar1 = *(float *)(iVar4 + iVar5 + 4);
      if (fVar6 <= (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) -
                   (pfVar8[1] - fVar1) * (fVar2 - *pfVar10)) {
        return 1;
      }
      return 0;
    }
    uVar12 = *(int *)(param_1 + 0x1a4) - 2;
    uVar7 = *(int *)(param_1 + 0x1a4) - 1;
    uVar12 = *(unsigned int *)(*(int *)((uVar12 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                      (uVar12 * 4 & 0x3fc));
    uVar7 = *(unsigned int *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                     (uVar7 * 4 & 0x3fc));
    iVar5 = (uVar7 & 0x3ff) * 8;
    iVar4 = *(int *)((uVar7 >> 8 & 0xfffffc) + iVar3);
    pfVar10 = (float *)(*(int *)((uVar12 >> 8 & 0xfffffc) + iVar3) + (uVar12 & 0x3ff) * 8);
    fVar2 = *(float *)(iVar4 + iVar5);
    fVar1 = *(float *)(iVar4 + iVar5 + 4);
    fVar1 = (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (fVar2 - *pfVar10) * (pfVar8[1] - fVar1);
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 != 4) {
        return 1;
      }
      uVar12 = *(int *)(param_1 + 0x194) - 2;
      uVar7 = *(int *)(param_1 + 0x194) - 1;
      uVar12 = *(unsigned int *)(*(int *)((uVar12 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                        (uVar12 * 4 & 0x3fc));
      uVar7 = *(unsigned int *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                       (uVar7 * 4 & 0x3fc));
      pfVar10 = (float *)(*(int *)((uVar12 >> 8 & 0xfffffc) + iVar3) + (uVar12 & 0x3ff) * 8);
      pfVar13 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + iVar3) + (uVar7 & 0x3ff) * 8);
      if (uVar9 == 0) {
        fVar1 = pfVar13[1];
        fVar2 = *pfVar13;
        if ((fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (pfVar8[1] - fVar1) * (fVar2 - *pfVar10) <
            fVar6) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    uVar12 = *(int *)(param_1 + 0x1a4) - 2;
    uVar7 = *(int *)(param_1 + 0x1a4) - 1;
    uVar12 = *(unsigned int *)(*(int *)((uVar12 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                      (uVar12 * 4 & 0x3fc));
    uVar7 = *(unsigned int *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                     (uVar7 * 4 & 0x3fc));
    pfVar10 = (float *)(*(int *)((uVar12 >> 8 & 0xfffffc) + iVar3) + (uVar12 & 0x3ff) * 8);
    pfVar13 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + iVar3) + (uVar7 & 0x3ff) * 8);
    if (uVar9 == 0) {
      return 1;
    }
    fVar1 = pfVar13[1];
    fVar2 = *pfVar13;
    fVar1 = (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (fVar2 - *pfVar10) * (pfVar8[1] - fVar1);
  }
  if (fVar1 <= fVar6) {
    return 1;
  }
  return 0;
}

