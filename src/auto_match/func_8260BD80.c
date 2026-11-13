typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195634;


bool fn_8260BD80(__int64 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  bool bVar7;
  unsigned int uVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  
  lVar10 = (unsigned __int64)*(unsigned int *)param_1 * 0x28 + param_1;
  uVar11 = (unsigned __int64)*(unsigned int *)param_1 - 1;
  iVar4 = (int)lVar10 + 4;
  if ((__int64)uVar11 < 0) {
    uVar11 = ((((-uVar11 - 1 & 0xffffffff) >> 1) + 1) * 2 & 0xfffffffe) + uVar11;
  }
  if (1 < (int)uVar11) {
    uVar11 = uVar11 - (uVar11 & 0xfffffffe);
  }
  param_1 = uVar11 * 0x28 + param_1;
  iVar6 = (int)param_1;
  iVar3 = iVar6 + 4;
  if (*(int *)((int)lVar10 + 0x10) == *(int *)(iVar6 + 0x10)) {
    uVar8 = 0;
    lVar9 = lVar10 + 0x24;
    do {
      fVar2 = *(float *)((iVar3 - iVar4) + (int)(float *)lVar9);
      fVar1 = *(float *)lVar9;
      if ((fVar1 < fVar2 - lbl_82193CC0) || (fVar2 + lbl_82193CC0 < fVar1)) goto LAB_8260bdd8;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while (uVar8 < 2);
    param_1 = param_1 + 0x18;
    lVar10 = lVar10 + 0x14;
    uVar8 = 0;
    do {
      pfVar5 = (float *)param_1;
      fVar1 = *(float *)lVar10 - pfVar5[-1];
      if ((((fVar1 < lbl_82195634) || (lbl_82193CC0 < fVar1)) ||
          (fVar1 = *(float *)((iVar4 - iVar3) + (int)pfVar5) - *pfVar5, fVar1 < lbl_82195634)) ||
         (lbl_82193CC0 < fVar1)) goto LAB_8260bdd8;
      uVar8 = uVar8 + 1;
      param_1 = param_1 + 8;
      lVar10 = lVar10 + 8;
    } while (uVar8 < 2);
    bVar7 = true;
  }
  else {
LAB_8260bdd8:
    bVar7 = false;
  }
  return !bVar7;
}

