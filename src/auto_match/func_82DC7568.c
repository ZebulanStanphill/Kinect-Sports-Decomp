void fn_82DC7568(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  
  iVar4 = param_2 + 0x30;
  iVar7 = 0;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_2 + 0x18);
  iVar6 = (unsigned int)*(unsigned short *)(param_1 + 6) * 0x20 + param_1 + 0x30;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_2 + 0x20);
  *(unsigned __int64 *)(param_1 + 0x28) = *(unsigned __int64 *)(param_2 + 0x28);
  *(unsigned short *)(param_1 + 4) = *(unsigned short *)(param_2 + 4);
  bVar1 = *(unsigned char *)(param_2 + 10);
  puVar5 = (unsigned int *)((unsigned int)*(unsigned short *)(param_2 + 6) * 0x20 + param_2 + 0x30);
  if (*(short *)(param_2 + 4) != 0) {
    param_1 = (iVar4 - param_2) + param_1;
    do {
      puVar3 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
      *puVar2 = *puVar3;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar3 = (unsigned int *)(iVar4 + 0x10U & 0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      iVar4 = iVar4 + 0x20;
      puVar2 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
      *puVar2 = *puVar3;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      param_1 = param_1 + 0x20;
      if ((int)(unsigned int)bVar1 >> 2 != 0) {
        lVar8 = (__int64)((int)(unsigned int)bVar1 >> 2);
        puVar3 = puVar5;
        do {
          *(unsigned int *)((iVar6 - (int)puVar5) + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      iVar7 = iVar7 + 1;
      iVar6 = (unsigned int)bVar1 + iVar6;
      puVar5 = (unsigned int *)((unsigned int)bVar1 + (int)puVar5);
    } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_2 + 4));
  }
  return;
}

