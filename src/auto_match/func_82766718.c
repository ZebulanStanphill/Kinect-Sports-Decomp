extern int fn_82766690();


void fn_82766718(unsigned int *param_1)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned char *pbVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  
  if (param_1[6] != 0) {
    bVar1 = *(unsigned char *)(*(int *)*param_1 + param_1[1]);
    uVar2 = (int)(char)bVar1 >> 1;
    if ((bVar1 & 1) == 0) {
      iVar4 = 1;
      param_1[4] = uVar2;
    }
    else {
      iVar4 = 2;
      param_1[4] = (int)(char)((unsigned char *)(*(int *)*param_1 + param_1[1]))[1] << 7 | uVar2 & 0x7f;
    }
    iVar3 = param_1[1];
    param_1[1] = iVar3 + iVar4;
    pbVar5 = (unsigned char *)(*(int *)*param_1 + iVar3 + iVar4);
    bVar1 = *pbVar5;
    uVar2 = (int)(char)bVar1 >> 1;
    if ((bVar1 & 1) == 0) {
      lVar6 = 1;
      param_1[5] = uVar2;
    }
    else {
      lVar6 = 2;
      param_1[5] = (int)(char)pbVar5[1] << 7 | uVar2 & 0x7f;
    }
    uVar2 = param_1[1];
    puVar7 = param_1 + 7;
    param_1[1] = (int)((unsigned __int64)uVar2 + lVar6);
    iVar3 = fn_82766690(param_1,(unsigned __int64)uVar2 + lVar6,puVar7);
    iVar4 = param_1[1];
    *(unsigned char *)(param_1 + 9) = 1;
    param_1[1] = iVar3 + iVar4;
    param_1[8] = iVar3 + iVar4;
    if ((param_1[7] & 1) != 0) {
      uVar2 = (unsigned int)param_1[7] >> 1;
      param_1[8] = uVar2;
      iVar4 = fn_82766690(param_1,uVar2,puVar7);
      *(unsigned char *)(param_1 + 9) = 0;
      param_1[8] = iVar4 + param_1[8];
    }
    *puVar7 = *puVar7 >> 1;
  }
  return;
}

