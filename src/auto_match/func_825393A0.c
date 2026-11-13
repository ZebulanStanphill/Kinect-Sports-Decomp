void fn_825393A0(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 *puVar10;
  unsigned __int64 uVar9;
  unsigned __int64 uVar11;
  
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
      uVar8 = uVar4 + lVar3;
      uVar7 = uVar4;
      if ((uVar8 & 0xffffffff) == (unsigned __int64)param_3) {
        uVar8 = param_1;
      }
      do {
        puVar10 = (unsigned __int64 *)uVar8;
        uVar11 = *(unsigned __int64 *)uVar7;
        iVar1 = (int)(param_3 - (int)puVar10) >> 3;
        *(unsigned __int64 *)uVar7 = *puVar10;
        *puVar10 = uVar11;
        if ((int)uVar2 < iVar1) {
          uVar9 = lVar3 + uVar8;
        }
        else {
          uVar9 = ((__int64)(int)uVar2 - (__int64)iVar1 & 0x1fffffffU) * 8 + param_1;
        }
        uVar7 = uVar8;
        uVar8 = uVar9;
      } while ((uVar9 & 0xffffffff) != (uVar4 & 0xffffffff));
      uVar5 = uVar5 - 1;
      uVar4 = uVar4 - 8;
    } while (0 < (__int64)uVar5);
  }
  return;
}

