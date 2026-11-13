void fn_82D3EAB0(int param_1,unsigned short *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned short uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  
  lVar2 = param_3 - 1;
  if (-1 < (int)lVar2) {
    if (3 < (int)param_3) {
      uVar5 = (param_3 & 0xffffffff) >> 2;
      puVar4 = param_4 + -1;
      lVar2 = lVar2 - (param_3 & 0xfffffffc);
      do {
        uVar1 = *param_2;
        iVar3 = ((int)(unsigned int)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        *param_4 = *(unsigned int *)((uVar1 & 3) * 4 + iVar3);
        puVar4[2] = *(unsigned int *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[3] = *(unsigned int *)(((uVar1 & 3) + 8) * 4 + iVar3);
        puVar4[4] = uVar1 | 0x3f000000;
        uVar1 = param_2[1];
        iVar3 = ((int)(unsigned int)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        puVar4[5] = *(unsigned int *)((uVar1 & 3) * 4 + iVar3);
        puVar4[6] = *(unsigned int *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[7] = *(unsigned int *)(((uVar1 & 3) + 8) * 4 + iVar3);
        puVar4[8] = uVar1 | 0x3f000000;
        uVar1 = param_2[2];
        iVar3 = ((int)(unsigned int)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        puVar4[9] = *(unsigned int *)((uVar1 & 3) * 4 + iVar3);
        puVar4[10] = *(unsigned int *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[0xb] = *(unsigned int *)(((uVar1 & 3) + 8) * 4 + iVar3);
        puVar4[0xc] = uVar1 | 0x3f000000;
        uVar1 = param_2[3];
        iVar3 = ((int)(unsigned int)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        puVar4[0xd] = *(unsigned int *)((uVar1 & 3) * 4 + iVar3);
        puVar4[0xe] = *(unsigned int *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[0xf] = *(unsigned int *)(((uVar1 & 3) + 8) * 4 + iVar3);
        param_2 = param_2 + 4;
        puVar4 = puVar4 + 0x10;
        *puVar4 = uVar1 | 0x3f000000;
        param_4 = param_4 + 0x10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (-1 < (int)lVar2) {
      lVar2 = lVar2 + 1;
      param_2 = param_2 + -1;
      puVar4 = param_4 + -1;
      do {
        param_2 = param_2 + 1;
        uVar1 = *param_2;
        iVar3 = ((int)(unsigned int)uVar1 >> 2) * 0x30 + *(int *)(param_1 + 0x40);
        puVar4[1] = *(unsigned int *)((uVar1 & 3) * 4 + iVar3);
        puVar4[2] = *(unsigned int *)(((uVar1 & 3) + 4) * 4 + iVar3);
        puVar4[3] = *(unsigned int *)(((uVar1 & 3) + 8) * 4 + iVar3);
        puVar4 = puVar4 + 4;
        *puVar4 = uVar1 | 0x3f000000;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  return;
}

