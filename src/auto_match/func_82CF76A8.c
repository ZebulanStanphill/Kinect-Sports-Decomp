typedef unsigned char bool;


int fn_82CF76A8(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  int iVar12;
  
  iVar12 = param_1 + 0x124;
  RtlEnterCriticalSection(iVar12);
  uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
  iVar2 = *param_2;
  uVar6 = 0xffffffffffffffff;
  iVar5 = 0x7ffffff;
  if (*(int *)(param_1 + 0x10) + 1 <
      (int)((*(unsigned int *)(param_1 + 0x20) & 0x3fffffff) * 2 - *(unsigned int *)(param_1 + 0x1c))) {
    uVar10 = uVar9 - 1;
    if ((__int64)uVar10 < 0) {
LAB_82cf7760:
      iVar4 = *(int *)(param_1 + 0xc);
      if (*(int *)(param_1 + 8) - iVar4 < iVar2) goto LAB_82cf76f8;
      *(int *)(param_1 + 0xc) = iVar4 + iVar2;
      *param_2 = iVar2;
      uVar11 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      bVar1 = *(unsigned int *)(param_1 + 0x14) < uVar11;
    }
    else {
      uVar11 = *(unsigned int *)(param_1 + 0x18);
      lVar7 = (uVar10 & 0x1fffffff) * 8 + (unsigned __int64)uVar11 + 4;
      do {
        iVar4 = *(int *)lVar7;
        if ((iVar2 <= iVar4) && (iVar4 < iVar5)) {
          uVar6 = uVar10;
          iVar5 = iVar4;
        }
        uVar10 = uVar10 - 1;
        lVar7 = lVar7 + -8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if ((int)uVar6 < 0) goto LAB_82cf7760;
      lVar7 = (uVar6 & 0x1fffffff) * 8;
      iVar4 = (int)lVar7;
      piVar3 = (int *)(iVar4 + uVar11);
      iVar4 = *(int *)(iVar4 + uVar11);
      if ((iVar2 * 3 < iVar5 << 1) && (0x400 < iVar2)) {
        *piVar3 = iVar4 + iVar2;
        piVar3[1] = piVar3[1] - iVar2;
      }
      else {
        *param_2 = piVar3[1];
        lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) - 1;
        *(int *)(param_1 + 0x1c) = (int)lVar8;
        lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar7;
        lVar8 = (lVar8 - uVar6 & 0x1fffffff) * 8;
        if (0 < (int)lVar8) {
          lVar8 = ((lVar8 - 1U & 0xffffffff) >> 2) + 1;
          do {
            *(unsigned int *)lVar7 = ((unsigned int *)lVar7)[2];
            lVar7 = lVar7 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      uVar11 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      bVar1 = *(unsigned int *)(param_1 + 0x14) < uVar11;
    }
    if (bVar1) {
      *(unsigned int *)(param_1 + 0x14) = uVar11;
    }
    RtlLeaveCriticalSection(iVar12);
  }
  else {
LAB_82cf76f8:
    RtlLeaveCriticalSection(iVar12);
    iVar4 = 0;
  }
  return iVar4;
}

