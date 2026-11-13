extern unsigned int lbl_82196582;


unsigned __int64 fn_8294A8A8(int param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  
  iVar5 = *(int *)(param_1 * 4 + *(int *)(param_3 + 0x14));
  iVar6 = *(int *)(param_2 * 4 + *(int *)(param_3 + 0x14));
  uVar3 = *(unsigned int *)(iVar5 + 0x60);
  uVar4 = *(unsigned int *)(iVar6 + 0x60);
  pbVar9 = *(unsigned char **)(uVar3 + 0x24);
  if (*(unsigned char **)(uVar3 + 0x24) == (unsigned char *)0x0) {
    pbVar9 = &lbl_82196582;
  }
  pbVar8 = &lbl_82196582;
  if (*(unsigned char **)(uVar4 + 0x24) != (unsigned char *)0x0) {
    pbVar8 = *(unsigned char **)(uVar4 + 0x24);
  }
  do {
    bVar1 = *pbVar9;
    bVar2 = *pbVar8;
    iVar7 = (unsigned int)bVar1 - (unsigned int)bVar2;
    if (bVar1 == 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while ((unsigned int)bVar1 == (unsigned int)bVar2);
  if (0 < iVar7) {
    return 1;
  }
  if (-1 < iVar7) {
    pbVar9 = *(unsigned char **)(*(int *)(uVar4 + 0x14) + 0x18);
    pbVar8 = *(unsigned char **)(*(int *)(uVar3 + 0x14) + 0x18);
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar9;
      iVar7 = (unsigned int)bVar1 - (unsigned int)bVar2;
      if (bVar1 == 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while ((unsigned int)bVar1 == (unsigned int)bVar2);
    if (0 < iVar7) {
      return 1;
    }
    if (-1 < iVar7) {
      if (uVar4 < uVar3) {
        return 1;
      }
      if ((uVar4 <= uVar3) && (*(unsigned int *)(iVar6 + 0x74) <= *(unsigned int *)(iVar5 + 0x74))) {
        if (*(unsigned int *)(iVar6 + 0x74) < *(unsigned int *)(iVar5 + 0x74)) {
          return 1;
        }
        if (*(unsigned int *)(iVar6 + 0x10) <= *(unsigned int *)(iVar5 + 0x10)) {
          return -(unsigned __int64)(*(unsigned int *)(iVar6 + 0x10) < *(unsigned int *)(iVar5 + 0x10)) & 1;
        }
      }
    }
  }
  return 0xffffffffffffffff;
}

