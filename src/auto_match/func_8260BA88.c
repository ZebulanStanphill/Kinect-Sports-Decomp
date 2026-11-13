typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8260BD80();
extern int fn_82A1DD38();
extern unsigned int lbl_821956A4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F880;
extern unsigned int lbl_8327F894;


/* WARNING: Removing unreachable block (ram,0x8260bab4) */

void fn_8260BA88(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  int iVar8;
  float *pfVar9;
  unsigned int uVar10;
  __int64 lVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = param_1[0x55];
  uVar10 = *param_1 + 1;
  if (1 < (int)uVar10) {
    uVar10 = uVar10 - (uVar10 & 0xfffffffe);
  }
  *param_1 = uVar10;
  fn_82A1DD38(param_1 + uVar10 * 10 + 1,param_2,0x28);
  fVar2 = lbl_8327F894;
  fVar4 = ltcg_pool_0_0f;
  puVar6 = &lbl_8327F880;
  uVar7 = 1;
  pfVar9 = (float *)(param_1 + 0x15);
  lVar11 = 0x20;
  dVar13 = (double)ltcg_pool_0_0f;
  uVar10 = param_1[uVar10 * 10 + 4];
  do {
    pfVar9[0x20] = *pfVar9;
    if ((uVar7 & uVar10) == 0) {
      *pfVar9 = fVar4;
    }
    else {
      *pfVar9 = *pfVar9 + fVar2;
    }
    pfVar9 = pfVar9 + 1;
    uVar7 = uVar7 << 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar5 = fn_8260BD80(param_1);
  if (iVar5 == 0) {
    uVar10 = param_1[0x55] & 0xfffffffd;
  }
  else {
    uVar10 = param_1[0x55] | 2;
  }
  uVar7 = *param_1;
  param_1[0x55] = uVar10;
  if (((double)(float)param_1[uVar7 * 10 + 5] == dVar13) &&
     ((double)(float)param_1[uVar7 * 10 + 6] == dVar13)) {
    bVar3 = false;
    uVar10 = param_1[0x55] & 0xfffffffb;
  }
  else {
    bVar3 = true;
    uVar10 = param_1[0x55] | 4;
  }
  param_1[0x55] = uVar10;
  if (((uVar1 & 4) == 0) || (bVar3)) {
    uVar10 = param_1[0x55] & 0xfffffeff;
  }
  else {
    uVar10 = uVar10 | 0x100;
  }
  param_1[0x55] = uVar10;
  if (((double)(float)param_1[uVar7 * 10 + 7] == dVar13) &&
     ((double)(float)param_1[uVar7 * 10 + 8] == dVar13)) {
    bVar3 = false;
    uVar10 = param_1[0x55] & 0xfffffff7;
  }
  else {
    bVar3 = true;
    uVar10 = param_1[0x55] | 8;
  }
  param_1[0x55] = uVar10;
  if (((uVar1 & 8) == 0) || (bVar3)) {
    uVar10 = param_1[0x55] & 0xfffffdff;
  }
  else {
    uVar10 = uVar10 | 0x200;
  }
  param_1[0x55] = uVar10;
  if (param_1[uVar7 * 10 + 4] == 0) {
    uVar10 = param_1[0x55] & 0xffffff7f;
  }
  else {
    uVar10 = param_1[0x55] | 0x80;
  }
  param_1[0x55] = uVar10;
  if (param_1[uVar7 * 10 + 4] == 0) {
    uVar10 = param_1[0x55] & 0xffffffbf;
  }
  else {
    uVar10 = param_1[0x55] | 0x40;
  }
  param_1[0x55] = uVar10;
  if (param_1[uVar7 * 10 + 1] == 0) {
    uVar10 = param_1[0x55] & 0xffffffef;
  }
  else {
    uVar10 = param_1[0x55] | 0x10;
  }
  param_1[0x55] = uVar10;
  if (param_1[uVar7 * 10 + 2] == 0) {
    uVar10 = param_1[0x55] & 0xffffffdf;
  }
  else {
    uVar10 = param_1[0x55] | 0x20;
  }
  param_1[0x55] = uVar10;
  lVar11 = 2;
  iVar5 = 0;
  dVar12 = dVar13;
  do {
    iVar8 = uVar7 * 10 + 9 + iVar5;
    iVar5 = iVar5 + 1;
    dVar12 = (double)(float)((double)(float)param_1[iVar8] + dVar12);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (dVar12 <= dVar13) {
    uVar10 = param_1[0x55] & 0xfffffbff;
  }
  else {
    uVar10 = param_1[0x55] | 0x400;
  }
  param_1[0x55] = uVar10;
  if (((uVar1 & 0x400) == 0) || (dVar12 > dVar13)) {
    uVar10 = param_1[0x55] & 0xfffff7ff;
  }
  else {
    uVar10 = uVar10 | 0x800;
  }
  param_1[0x55] = uVar10;
  fVar4 = lbl_821956A4;
  if (uVar10 == 0) {
    if (((float)param_1[0x56] < lbl_821956A4) &&
       (fVar2 = (float)param_1[0x56] + (float)puVar6[5], param_1[0x56] = (unsigned int)fVar2, fVar4 <= fVar2
       )) {
      param_1[0x56] = (unsigned int)fVar4;
    }
  }
  else {
    param_1[0x56] = (unsigned int)(float)dVar13;
  }
  return;
}

