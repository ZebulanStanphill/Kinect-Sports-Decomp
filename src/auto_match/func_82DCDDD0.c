void fn_82DCDDD0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  iVar3 = param_1 + 0x20;
  iVar4 = param_2 + 0x20;
  lVar5 = 2;
  do {
    puVar1 = (unsigned int *)(iVar4 - 0x20U & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)(iVar3 - 0x20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (unsigned int *)(iVar4 - 0x10U & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)(iVar3 - 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    iVar4 = iVar4 + 0x30;
    puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    iVar3 = iVar3 + 0x30;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned __int64 *)(param_1 + 0x60) = *(unsigned __int64 *)(param_2 + 0x60);
  *(unsigned __int64 *)(param_1 + 0x68) = *(unsigned __int64 *)(param_2 + 0x68);
  return;
}

