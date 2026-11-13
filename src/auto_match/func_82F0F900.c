/* WARNING: Removing unreachable block (ram,0x82e854ec) */

void fn_82F0F900(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x7b38) != 0) {
    iVar7 = (*(int *)(param_1 + 0x568) >> 1) * *(int *)(param_1 + 0x6de4) -
            *(int *)(param_1 + 0x578);
    *(int *)(param_1 + 0x4edc) = *(int *)(param_1 + 0x4a98) + iVar7;
    *(int *)(param_1 + 0x4ed8) =
         ((*(int *)(param_1 + 0x564) >> 1) * *(int *)(param_1 + 0x6de4) - *(int *)(param_1 + 0x574))
         + *(int *)(param_1 + 0x4a94);
    *(int *)(param_1 + 0x4ee0) = *(int *)(param_1 + 0x4a9c) + iVar7;
    return;
  }
  *(int *)(param_1 + 0x4edc) = *(int *)(param_1 + 0x4a98) - *(int *)(param_1 + 0x578);
  *(int *)(param_1 + 0x4ed8) = *(int *)(param_1 + 0x4a94) - *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4ee0) = *(int *)(param_1 + 0x4a9c) - *(int *)(param_1 + 0x578);
  if (*(int *)(param_1 + 0x6d54) == 0) {
    return;
  }
  uVar1 = *(int *)(param_1 + 0x550) >> 1;
  *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) << 1;
  uVar2 = *(int *)(param_1 + 0x55c) >> 1;
  *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) << 1;
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x658);
  uVar8 = uVar1 / uVar5;
  uVar6 = uVar2 / uVar5;
  trapWord(6,uVar5,0);
  iVar9 = (int)uVar8;
  *(int *)(param_1 + 0xbd4) = iVar9;
  trapWord(6,uVar5,0);
  iVar7 = (int)uVar6;
  *(int *)(param_1 + 0xbdc) = iVar7;
  if (uVar5 < 2) {
    return;
  }
  uVar3 = (unsigned int)(uVar8 << 1);
  *(int *)(param_1 + 0xf98) = iVar9;
  uVar4 = (unsigned int)(uVar6 << 1);
  *(int *)(param_1 + 4000) = iVar7;
  *(unsigned int *)(param_1 + 0xf9c) = uVar3;
  *(unsigned int *)(param_1 + 0xfa4) = uVar4;
  if (uVar5 == 4) {
    *(unsigned int *)(param_1 + 0x1360) = uVar3;
    *(unsigned int *)(param_1 + 0x1368) = uVar4;
    iVar9 = iVar9 + (int)(uVar8 << 1);
    *(unsigned int *)(param_1 + 0x172c) = uVar1;
    iVar7 = iVar7 + (int)(uVar6 << 1);
    *(unsigned int *)(param_1 + 0x1734) = uVar2;
    *(int *)(param_1 + 0x1364) = iVar9;
    *(int *)(param_1 + 0x136c) = iVar7;
    *(int *)(param_1 + 0x1728) = iVar9;
    *(int *)(param_1 + 0x1730) = iVar7;
    return;
  }
  return;
}

