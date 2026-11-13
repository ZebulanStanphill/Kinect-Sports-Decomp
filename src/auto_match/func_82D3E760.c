extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;


__int64 fn_82D3E760(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int in_r0;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  lVar4 = param_2;
  iVar5 = *(unsigned int *)(param_1 + 0x4c) - 1;
  if (2 < iVar5) {
    uVar3 = *(unsigned int *)(param_1 + 0x4c) >> 2;
    uVar8 = (unsigned __int64)uVar3;
    iVar5 = iVar5 + uVar3 * -4;
    do {
      iVar6 = (int)param_2;
      puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      param_2 = param_2 + 0x40;
      puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (unsigned int *)(in_r0 + iVar6 + 0x10 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (unsigned int *)(in_r0 + iVar6 + 0x20 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (unsigned int *)(in_r0 + iVar6 + 0x30 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  iVar7 = (int)param_2;
  iVar6 = iVar7;
  if (-1 < iVar5) {
    iVar6 = iVar7 + 0x10;
    puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  iVar7 = iVar6;
  if (0 < iVar5) {
    iVar7 = iVar6 + 0x10;
    puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  if (1 < iVar5) {
    puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  return lVar4;
}

