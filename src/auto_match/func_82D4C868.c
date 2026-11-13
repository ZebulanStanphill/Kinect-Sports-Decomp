__int64 fn_82D4C868(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  lVar3 = param_2;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    return lVar3;
  }
  iVar5 = param_1 + 0x20;
  do {
    puVar1 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    iVar4 = iVar4 + 1;
    puVar2 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    iVar5 = iVar5 + 0x10;
    param_2 = param_2 + 0x10;
  } while (iVar4 < *(int *)(param_1 + 0x10));
  return lVar3;
}

