extern int fn_826E7468();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D4C0;
extern unsigned int lbl_821AAD20;


void fn_826E80A8(int *param_1,float *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  float fVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  float *pfVar7;
  unsigned int uVar8;
  __int64 lVar9;
  double dVar10;
  
  if (param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  param_1[3] = 0;
  bVar1 = *(unsigned char *)(param_1[2] + *param_1);
  param_1[3] = 1;
  bVar2 = *(unsigned char *)(param_1[2] + *param_1);
  param_1[3] = 2;
  uVar5 = fn_826E7468(param_1,4);
  fVar4 = lbl_82002AE0;
  uVar8 = (unsigned int)uVar5;
  if ((bVar2 & 0x40) == 0) {
    pfVar7 = param_2 + -2;
    lVar9 = 4;
    do {
      pfVar7 = pfVar7 + 2;
      *pfVar7 = fVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    uVar6 = fn_826E7468(param_1,uVar5);
    uVar3 = 1 << (uVar8 - 1 & 0x3f);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    dVar10 = (double)lbl_8200D4C0;
    *param_2 = (float)((double)(__int64)(int)uVar6 * dVar10);
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[2] = (float)((double)(__int64)(int)uVar6 * dVar10);
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[4] = (float)((double)(__int64)(int)uVar6 * dVar10);
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[6] = (float)((double)(__int64)(int)uVar6 * dVar10);
  }
  fVar4 = lbl_821AAD20;
  if ((bVar1 & 0x80) == 0) {
    param_2 = param_2 + -1;
    lVar9 = 4;
    do {
      param_2 = param_2 + 2;
      *param_2 = fVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    uVar6 = fn_826E7468(param_1,uVar5);
    uVar3 = 1 << (uVar8 - 1 & 0x3f);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[1] = (float)(__int64)(int)uVar6;
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[3] = (float)(__int64)(int)uVar6;
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[5] = (float)(__int64)(int)uVar6;
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[7] = (float)(__int64)(int)uVar6;
  }
  return;
}

