void fn_827D8B98(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar9;
  unsigned __int64 uVar8;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  
  uVar3 = param_2 - (int)param_1 >> 3;
  iVar2 = (int)(param_3 - (int)param_1) >> 3;
  uVar7 = (__int64)(int)uVar3;
  uVar8 = (__int64)iVar2;
  while (uVar10 = uVar7, iVar9 = (int)uVar8, uVar10 != 0) {
    uVar7 = uVar8 - (__int64)(iVar9 / (int)uVar10) * (__int64)(int)uVar10;
    uVar8 = uVar10;
  }
  if ((iVar9 < iVar2) && (0 < iVar9)) {
    lVar6 = ((unsigned __int64)uVar3 & 0x1fffffff) * 8;
    uVar7 = (uVar8 & 0x1fffffff) * 8 + param_1;
    do {
      uVar11 = uVar7 + lVar6;
      uVar10 = uVar7;
      if ((uVar11 & 0xffffffff) == (unsigned __int64)param_3) {
        uVar11 = param_1;
      }
      do {
        puVar4 = (unsigned int *)uVar11;
        puVar5 = (unsigned int *)uVar10;
        uVar1 = puVar5[1];
        iVar2 = (int)(param_3 - (int)puVar4) >> 3;
        puVar5[1] = puVar4[1];
        puVar4[1] = uVar1;
        uVar1 = *puVar5;
        *puVar5 = *puVar4;
        *puVar4 = uVar1;
        if ((int)uVar3 < iVar2) {
          uVar12 = lVar6 + uVar11;
        }
        else {
          uVar12 = ((__int64)(int)uVar3 - (__int64)iVar2 & 0x1fffffffU) * 8 + param_1;
        }
        uVar10 = uVar11;
        uVar11 = uVar12;
      } while ((uVar12 & 0xffffffff) != (uVar7 & 0xffffffff));
      uVar8 = uVar8 - 1;
      uVar7 = uVar7 - 8;
    } while (0 < (__int64)uVar8);
  }
  return;
}

