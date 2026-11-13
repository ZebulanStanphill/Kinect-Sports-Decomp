extern int fn_8268CC00();
extern int fn_826E7468();
extern unsigned int lbl_82054148;


void fn_826E7BF8(int *param_1,float *param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  __int64 lVar5;
  unsigned int uVar7;
  double dVar8;
  
  if (param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  param_1[3] = 0;
  fn_8268CC00(param_2);
  iVar2 = param_1[3];
  uVar7 = iVar2 + 1;
  bVar1 = *(unsigned char *)(param_1[2] + *param_1);
  param_1[3] = uVar7;
  if (7 < uVar7) {
    param_1[3] = 0;
    param_1[2] = param_1[2] + 1;
  }
  dVar8 = (double)lbl_82054148;
  if ((1 << (7U - iVar2 & 0x3f) & (unsigned int)bVar1) != 0) {
    uVar4 = fn_826E7468(param_1,5);
    uVar6 = fn_826E7468(param_1,uVar4);
    uVar3 = (unsigned int)uVar4;
    uVar7 = 1 << (uVar3 - 1 & 0x3f);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    *param_2 = (float)((double)(__int64)(int)uVar6 * dVar8);
    uVar6 = fn_826E7468(param_1,uVar4);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[4] = (float)((double)(__int64)(int)uVar6 * dVar8);
  }
  iVar2 = param_1[3];
  uVar7 = iVar2 + 1;
  bVar1 = *(unsigned char *)(param_1[2] + *param_1);
  param_1[3] = uVar7;
  if (7 < uVar7) {
    param_1[3] = 0;
    param_1[2] = param_1[2] + 1;
  }
  if ((1 << (7U - iVar2 & 0x3f) & (unsigned int)bVar1) != 0) {
    uVar4 = fn_826E7468(param_1,5);
    uVar6 = fn_826E7468(param_1,uVar4);
    uVar3 = (unsigned int)uVar4;
    uVar7 = 1 << (uVar3 - 1 & 0x3f);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[3] = (float)((double)(__int64)(int)uVar6 * dVar8);
    uVar6 = fn_826E7468(param_1,uVar4);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[1] = (float)((double)(__int64)(int)uVar6 * dVar8);
  }
  lVar5 = fn_826E7468(param_1,5);
  if (0 < lVar5) {
    uVar6 = fn_826E7468(param_1,lVar5);
    uVar3 = (unsigned int)lVar5;
    uVar7 = 1 << (uVar3 - 1 & 0x3f);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[2] = (float)(__int64)(int)uVar6;
    uVar6 = fn_826E7468(param_1,lVar5);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[5] = (float)(__int64)(int)uVar6;
  }
  return;
}

