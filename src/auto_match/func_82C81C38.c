void fn_82C81C38(int param_1,int *param_2,int *param_3,int param_4)

{
  unsigned char bVar1;
  int iVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  int iVar9;
  unsigned char *pbVar10;
  __int64 lVar11;
  
  uVar6 = 0;
  uVar5 = 0xff;
  iVar9 = -1;
  iVar2 = param_4 * 5;
  pbVar8 = (unsigned char *)(param_4 * 2 + param_1 + -1);
  do {
    pbVar7 = (unsigned char *)((param_1 - param_4) + iVar9);
    pbVar10 = pbVar8 + param_4;
    pbVar4 = (unsigned char *)(param_1 + param_4 + iVar9);
    lVar11 = 2;
    pbVar3 = pbVar8;
    do {
      bVar1 = *pbVar7;
      if (uVar6 < bVar1) {
        uVar6 = (unsigned int)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (unsigned int)bVar1;
      }
      bVar1 = pbVar7[param_4];
      if (uVar6 < bVar1) {
        uVar6 = (unsigned int)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (unsigned int)bVar1;
      }
      bVar1 = *pbVar4;
      if (uVar6 < bVar1) {
        uVar6 = (unsigned int)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (unsigned int)bVar1;
      }
      bVar1 = *pbVar3;
      if (uVar6 < bVar1) {
        uVar6 = (unsigned int)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (unsigned int)bVar1;
      }
      bVar1 = *pbVar10;
      if (uVar6 < bVar1) {
        uVar6 = (unsigned int)bVar1;
      }
      if (bVar1 < uVar5) {
        uVar5 = (unsigned int)bVar1;
      }
      pbVar7 = pbVar7 + iVar2;
      pbVar4 = pbVar4 + iVar2;
      pbVar3 = pbVar3 + iVar2;
      pbVar10 = pbVar10 + iVar2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar9 = iVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (iVar9 < 9);
  *param_2 = (int)(uVar5 + uVar6 + 1) >> 1;
  *param_3 = uVar6 - uVar5;
  return;
}

