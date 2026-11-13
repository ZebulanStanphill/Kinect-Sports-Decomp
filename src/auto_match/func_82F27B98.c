void fn_82F27B98(int param_1)

{
  int iVar1;
  unsigned char *pbVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned char *pbVar6;
  __int64 lVar7;
  unsigned char bVar9;
  unsigned char *pbVar8;
  __int64 lVar10;
  unsigned char abStack_200 [256];
  unsigned char abStack_100 [256];
  
  if (*(int *)(param_1 + 0xaf0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xaf0) == 4) {
    return;
  }
  if (*(int *)(param_1 + 0x8a0) == 0) {
    return;
  }
  if (0x1f < *(int *)(param_1 + 0x8b0)) {
    *(int *)(param_1 + 0x8b0) = *(int *)(param_1 + 0x8b0) + -0x40;
  }
  if (*(unsigned int *)(param_1 + 0x8ac) == 0) {
    uVar3 = 0xffffffffffffffc0;
    lVar7 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x8b0) & 0x1ffffff) * -0x80 + 0x3fc0;
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8ac) + 0x20;
    lVar7 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x8b0) & 0x3ffffff) << 6;
  }
  iVar5 = 0;
  lVar4 = (uVar3 & 0x1ffffff) * -0x80 + 0x2020;
  lVar7 = lVar7 + 0x20;
  lVar10 = 0x100;
  do {
    iVar1 = (int)lVar7 >> 6;
    if (iVar1 < 0x100) {
      bVar9 = -((char)((unsigned __int64)lVar7 >> 0x18) >> 7) - 1U & (unsigned char)iVar1;
    }
    else {
      bVar9 = 0xff;
    }
    iVar1 = (int)lVar4 >> 6;
    abStack_100[iVar5] = bVar9;
    if (iVar1 < 0x100) {
      bVar9 = -((char)((unsigned __int64)lVar4 >> 0x18) >> 7) - 1U & (unsigned char)iVar1;
    }
    else {
      bVar9 = 0xff;
    }
    lVar7 = lVar7 + uVar3;
    lVar4 = lVar4 + uVar3;
    abStack_200[iVar5] = bVar9;
    iVar5 = iVar5 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  lVar7 = (__int64)*(int *)(param_1 + 0x56c) * (__int64)*(int *)(param_1 + 0x564);
  iVar5 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (0 < lVar7) {
    pbVar8 = (unsigned char *)(*(int *)(param_1 + 0x14) + -1);
    do {
      pbVar6 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      *pbVar8 = abStack_100[*pbVar6];
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = (__int64)*(int *)(param_1 + 0x570) * (__int64)*(int *)(param_1 + 0x568);
  if (lVar7 < 1) {
    return;
  }
  pbVar8 = (unsigned char *)(iVar5 + -1);
  pbVar6 = (unsigned char *)(iVar1 + -1);
  do {
    pbVar2 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    *pbVar8 = abStack_200[*pbVar2];
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    *pbVar6 = abStack_200[*pbVar2];
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

