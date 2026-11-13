extern int fn_82DE2FC0();


void fn_82DDDE48(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  iVar3 = param_1 + 0x20;
  *(unsigned int *)(param_1 + 8) = 4;
  lVar4 = 4;
  do {
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    param_2 = param_2 + 0x10;
    puVar2 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    param_3 = param_3 + 0x10;
    puVar2 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    *(unsigned int *)(iVar3 + 0x30) = 0;
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    param_4 = param_4 + 0x10;
    iVar3 = iVar3 + 0x40;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82DE2FC0(param_1);
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

