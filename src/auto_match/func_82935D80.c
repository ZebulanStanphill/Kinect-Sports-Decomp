int fn_82935D80(unsigned char *param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned int uVar8;
  
  uVar3 = *param_3;
  uVar8 = 0;
  pbVar5 = param_2;
  if (uVar3 != 0) {
    do {
      pbVar7 = param_1;
      pbVar6 = pbVar5;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar6;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != param_1 + 0x10);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        return uVar8 << 4;
      }
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar5 + 0x10;
    } while (uVar8 < uVar3);
  }
  iVar4 = uVar3 * 0x10;
  *(unsigned int *)(param_2 + iVar4) = *(unsigned int *)param_1;
  *(unsigned int *)(param_2 + iVar4 + 4) = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_2 + iVar4 + 8) = *(unsigned int *)(param_1 + 8);
  *(unsigned int *)(param_2 + iVar4 + 0xc) = *(unsigned int *)(param_1 + 0xc);
  *param_3 = uVar3 + 1;
  return iVar4;
}

