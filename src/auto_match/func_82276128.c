void fn_82276128(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned __int64 *puVar8;
  unsigned __int64 uVar9;
  unsigned __int64 *puVar11;
  unsigned __int64 uVar10;
  unsigned __int64 uVar12;
  
  uVar2 = param_2 - (int)param_1 >> 3;
  iVar1 = (int)(param_3 - (int)param_1) >> 3;
  uVar4 = (__int64)(int)uVar2;
  uVar5 = (__int64)iVar1;
  while (uVar7 = uVar4, iVar6 = (int)uVar5, uVar7 != 0) {
    uVar4 = uVar5 - (__int64)(iVar6 / (int)uVar7) * (__int64)(int)uVar7;
    uVar5 = uVar7;
  }
  if ((iVar6 < iVar1) && (0 < iVar6)) {
    lVar3 = ((unsigned __int64)uVar2 & 0x1fffffff) * 8;
    uVar4 = (uVar5 & 0x1fffffff) * 8 + param_1;
    do {
      uVar9 = uVar4 + lVar3;
      uVar7 = uVar4;
      if ((uVar9 & 0xffffffff) == (unsigned __int64)param_3) {
        uVar9 = param_1;
      }
      do {
        puVar11 = (unsigned __int64 *)uVar9;
        puVar8 = (unsigned __int64 *)uVar7;
        uVar12 = *puVar8;
        iVar1 = (int)(param_3 - (int)puVar11) >> 3;
        *(unsigned int *)puVar8 = *(unsigned int *)puVar11;
        *(unsigned int *)((int)puVar8 + 4) = *(unsigned int *)((int)puVar11 + 4);
        *puVar11 = uVar12;
        if ((int)uVar2 < iVar1) {
          uVar10 = lVar3 + uVar9;
        }
        else {
          uVar10 = ((__int64)(int)uVar2 - (__int64)iVar1 & 0x1fffffffU) * 8 + param_1;
        }
        uVar7 = uVar9;
        uVar9 = uVar10;
      } while ((uVar10 & 0xffffffff) != (uVar4 & 0xffffffff));
      uVar5 = uVar5 - 1;
      uVar4 = uVar4 - 8;
    } while (0 < (__int64)uVar5);
  }
  return;
}

