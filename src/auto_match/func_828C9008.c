void fn_828C9008(__int64 param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  
  iVar2 = (int)param_1;
  uVar1 = param_2 - iVar2 >> 3;
  uVar6 = (__int64)(param_2 - iVar2 >> 4) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < (__int64)uVar6) {
    uVar4 = (uVar6 + 1 & 0x7fffffff) << 1;
    param_1 = (uVar6 & 0x1fffffff) * 8 + param_1;
    do {
      uVar4 = uVar4 - 2;
      param_1 = param_1 + -8;
      uVar5 = *(unsigned __int64 *)param_1;
      uVar6 = uVar6 - 1;
      uVar11 = (unsigned int)uVar4;
      uVar10 = uVar4;
      uVar8 = uVar6;
      while (uVar9 = uVar10, (int)uVar11 < (int)uVar1) {
        puVar7 = (unsigned __int64 *)((int)((uVar9 & 0xffffffff) << 3) + iVar2);
        if (*puVar7 < puVar7[-1]) {
          uVar9 = uVar9 - 1;
        }
        uVar10 = (uVar9 + 1 & 0x7fffffff) << 1;
        *(unsigned __int64 *)((int)((uVar8 & 0xffffffff) << 3) + iVar2) =
             *(unsigned __int64 *)((int)((uVar9 & 0xffffffff) << 3) + iVar2);
        uVar11 = (unsigned int)uVar10;
        uVar8 = uVar9;
      }
      if (uVar11 == uVar1) {
        uVar10 = uVar8 & 0xffffffff;
        uVar8 = (__int64)(int)uVar1 - 1;
        *(unsigned __int64 *)((int)(uVar10 << 3) + iVar2) = *(unsigned __int64 *)(uVar1 * 8 + iVar2 + -8);
      }
      iVar3 = (int)uVar8;
      uVar11 = iVar3 - 1;
      uVar10 = (__int64)((int)uVar11 >> 1) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 1) != 0);
      while ((uVar9 = uVar10, (int)uVar6 < iVar3 &&
             (uVar10 = *(unsigned __int64 *)((int)((uVar9 & 0xffffffff) << 3) + iVar2), uVar10 < uVar5))) {
        iVar3 = (int)uVar9;
        uVar11 = iVar3 - 1;
        *(unsigned __int64 *)((int)((uVar8 & 0xffffffff) << 3) + iVar2) = uVar10;
        uVar10 = (__int64)((int)uVar11 >> 1) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 1) != 0);
        uVar8 = uVar9;
      }
      *(unsigned __int64 *)((int)((uVar8 & 0xffffffff) << 3) + iVar2) = uVar5;
    } while (0 < (int)uVar6);
  }
  return;
}

