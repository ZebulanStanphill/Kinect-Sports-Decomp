void fn_82BBBD28(__int64 param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  
  iVar1 = (int)param_1;
  *(unsigned int *)(iVar1 + 0x754) = param_2;
  *(unsigned char *)(iVar1 + 0x750) = 0;
  *(unsigned char *)(iVar1 + 0x751) = 0;
  iVar3 = 0;
  lVar5 = param_1 + 0x3d0;
  do {
    puVar2 = (unsigned int *)lVar5;
    puVar2[-0x10] = 0;
    *(unsigned char *)(iVar1 + 0x380 + iVar3) = 0;
    lVar4 = 0;
    *puVar2 = 0;
    puVar2[0x10] = iVar3;
    puVar2[-0xf4] = 0;
    lVar10 = 4;
    puVar2[-0xe4] = iVar3;
    do {
      uVar9 = (-0x370 - param_1) + lVar5 + lVar4;
      uVar8 = (-0x27c - param_1) + lVar5 + lVar4;
      uVar7 = (-0x330 - param_1) + lVar5 + lVar4;
      uVar6 = (-0x23c - param_1) + lVar5 + lVar4;
      *(unsigned int *)((int)(((-0x3b0 - param_1) + lVar5 + lVar4 & 0xffffffffU) << 2) + iVar1) = 0;
      *(unsigned int *)((int)(((-700 - param_1) + lVar5 + lVar4 & 0xffffffffU) << 2) + iVar1) = 0;
      lVar4 = lVar4 + 1;
      *(unsigned int *)((int)((uVar9 & 0xffffffff) << 2) + iVar1) = 0x13;
      *(unsigned int *)((int)((uVar8 & 0xffffffff) << 2) + iVar1) = 0x13;
      *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + iVar1) = 0;
      *(unsigned int *)((int)((uVar6 & 0xffffffff) << 2) + iVar1) = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    iVar3 = iVar3 + 1;
    lVar5 = lVar5 + 4;
  } while (iVar3 < 0x10);
  return;
}

