extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_8307FEA8(int *param_1,int param_2,__int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int uVar10;
  __int64 lVar8;
  unsigned __int64 uVar9;
  
  iVar1 = param_1[3];
  if ((0 < iVar1) && (iVar1 < param_2)) {
    iVar5 = iVar1 + -1 >> 5;
    iVar3 = iVar5 * 4;
    uVar10 = iVar1 + iVar5 * -0x20;
    if ((int)uVar10 < 0x20) {
      uVar2 = -1 << (uVar10 & 0x3f);
      uVar10 = *(unsigned int *)(iVar3 + *param_1);
      uVar6 = uVar10 & ~uVar2;
      if ((int)param_3 != 0) {
        uVar6 = uVar10 | uVar2;
      }
      *(unsigned int *)(iVar3 + *param_1) = uVar6;
    }
  }
  iVar1 = param_2 + 0x1f >> 5;
  iVar5 = fn_82CE5410();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    lVar8 = ((unsigned __int64)(unsigned int)param_1[2] & 0x3fffffff) << 1;
    if ((int)lVar8 <= iVar1) {
      lVar8 = (__int64)iVar1;
    }
    fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_1,lVar8,4);
  }
  uVar9 = (__int64)iVar1 - (unsigned __int64)(unsigned int)param_1[1];
  if (0 < (__int64)uVar9) {
    piVar7 = (int *)(param_1[1] * 4 + *param_1 + -4);
    uVar4 = uVar9 & 0xffffffff;
    while (uVar4 != 0) {
      piVar7 = piVar7 + 1;
      *piVar7 = -(unsigned int)(param_3 != 0);
      uVar9 = uVar9 - 1;
      uVar4 = uVar9;
    }
  }
  param_1[1] = iVar1;
  param_1[3] = param_2;
  return;
}

