void fn_82DAC678(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int iVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  bVar1 = *(unsigned char *)(param_1 + 10);
  iVar4 = *(unsigned short *)(param_1 + 4) - 1;
  *(short *)(param_1 + 4) = (short)iVar4;
  if (param_2 < iVar4) {
    iVar2 = (int)(unsigned int)bVar1 >> 2;
    iVar4 = iVar4 - param_2;
    puVar6 = (unsigned int *)
             ((unsigned int)bVar1 * (int)(short)param_2 + (unsigned int)*(unsigned short *)(param_1 + 6) * 0x20 + param_1 +
             0x30);
    iVar8 = param_2 * 0x20 + param_1 + 0x30;
    do {
      puVar7 = (unsigned int *)((int)puVar6 + (unsigned int)bVar1);
      puVar5 = (unsigned int *)(in_r0 + iVar8 + 0x20 & 0xfffffff0);
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      puVar3 = (unsigned int *)(in_r0 + iVar8 & 0xfffffff0);
      *puVar3 = *puVar5;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      puVar5 = (unsigned int *)(iVar8 + 0x30U & 0xfffffff0);
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      puVar3 = (unsigned int *)(iVar8 + 0x10U & 0xfffffff0);
      *puVar3 = *puVar5;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      if (iVar2 != 0) {
        lVar9 = (__int64)iVar2;
        puVar5 = puVar7;
        do {
          *(unsigned int *)(((int)puVar6 - (int)puVar7) + (int)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar4 = iVar4 + -1;
      puVar6 = puVar7;
      iVar8 = iVar8 + 0x20;
    } while (iVar4 != 0);
  }
  return;
}

