void fn_82889AB8(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned char uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar8;
  __int64 lVar7;
  unsigned __int64 uVar9;
  
  param_2 = param_2 - param_1;
  lVar4 = param_2;
  lVar7 = param_3 - param_1;
  while (lVar2 = lVar4, iVar8 = (int)lVar7, lVar2 != 0) {
    lVar4 = lVar7 - (__int64)(iVar8 / (int)lVar2) * (__int64)(int)lVar2;
    lVar7 = lVar2;
  }
  if ((iVar8 < (int)(param_3 - param_1)) && (0 < iVar8)) {
    uVar9 = lVar7 + param_1;
    do {
      uVar5 = uVar9 + param_2;
      if ((uVar9 + param_2 & 0xffffffff) == (param_3 & 0xffffffff)) {
        uVar5 = param_1;
      }
      lVar4 = -uVar5;
      uVar3 = uVar9;
      do {
        uVar1 = *(unsigned char *)uVar3;
        *(unsigned char *)uVar3 = *(unsigned char *)uVar5;
        *(unsigned char *)uVar5 = uVar1;
        if ((int)param_2 < (int)lVar4 + (int)param_3) {
          uVar6 = uVar5 + param_2;
          lVar4 = -param_2 + lVar4;
        }
        else {
          lVar4 = (-param_2 + lVar4 + param_3) - param_1;
          uVar6 = (uVar5 - param_3) + param_2 + param_1;
        }
        uVar3 = uVar5;
        uVar5 = uVar6;
      } while ((uVar6 & 0xffffffff) != (uVar9 & 0xffffffff));
      lVar7 = lVar7 + -1;
      uVar9 = uVar9 - 1;
    } while (0 < lVar7);
  }
  return;
}

