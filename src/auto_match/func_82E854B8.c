void fn_82E854B8(int param_1,int param_2)

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
  
  if (param_2 == 0) {
    uVar4 = *(unsigned int *)(param_1 + 0x550);
    uVar3 = *(unsigned int *)(param_1 + 0x55c);
    *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) >> 1;
    *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) >> 1;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x550) >> 1;
    *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) << 1;
    uVar3 = *(int *)(param_1 + 0x55c) >> 1;
    *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) << 1;
  }
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x658);
  uVar8 = uVar4 / uVar5;
  uVar6 = uVar3 / uVar5;
  trapWord(6,uVar5,0);
  iVar9 = (int)uVar8;
  *(int *)(param_1 + 0xbd4) = iVar9;
  trapWord(6,uVar5,0);
  iVar7 = (int)uVar6;
  *(int *)(param_1 + 0xbdc) = iVar7;
  if (uVar5 < 2) {
    return;
  }
  uVar1 = (unsigned int)(uVar8 << 1);
  *(int *)(param_1 + 0xf98) = iVar9;
  uVar2 = (unsigned int)(uVar6 << 1);
  *(int *)(param_1 + 4000) = iVar7;
  *(unsigned int *)(param_1 + 0xf9c) = uVar1;
  *(unsigned int *)(param_1 + 0xfa4) = uVar2;
  if (uVar5 != 4) {
    return;
  }
  *(unsigned int *)(param_1 + 0x1360) = uVar1;
  *(unsigned int *)(param_1 + 0x1368) = uVar2;
  iVar9 = iVar9 + (int)(uVar8 << 1);
  *(unsigned int *)(param_1 + 0x172c) = uVar4;
  iVar7 = iVar7 + (int)(uVar6 << 1);
  *(unsigned int *)(param_1 + 0x1734) = uVar3;
  *(int *)(param_1 + 0x1364) = iVar9;
  *(int *)(param_1 + 0x136c) = iVar7;
  *(int *)(param_1 + 0x1728) = iVar9;
  *(int *)(param_1 + 0x1730) = iVar7;
  return;
}

