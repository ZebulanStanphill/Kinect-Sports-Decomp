void fn_82BBC340(__int64 param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  
  lVar4 = param_1 + 0x3d0;
  lVar9 = 0x10;
  puVar2 = param_2;
  do {
    lVar3 = 0;
    puVar2[0x10] = ((unsigned int *)lVar4)[0x10];
    *puVar2 = *(unsigned int *)lVar4;
    lVar10 = 4;
    do {
      uVar8 = (-0x27c - param_1) + lVar4 + lVar3;
      uVar7 = (-0x370 - param_1) + lVar4 + lVar3;
      uVar6 = (-0x23c - param_1) + lVar4 + lVar3;
      iVar1 = (int)param_1;
      uVar5 = (-0x330 - param_1) + lVar4 + lVar3;
      *(unsigned int *)((int)(((-0x3b0 - param_1) + lVar4 + lVar3 & 0xffffffffU) << 2) + (int)param_2)
           = *(unsigned int *)((int)(((-700 - param_1) + lVar4 + lVar3 & 0xffffffffU) << 2) + iVar1);
      lVar3 = lVar3 + 1;
      *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + (int)param_2) =
           *(unsigned int *)((int)((uVar8 & 0xffffffff) << 2) + iVar1);
      *(unsigned int *)((int)((uVar5 & 0xffffffff) << 2) + (int)param_2) =
           *(unsigned int *)((int)((uVar6 & 0xffffffff) << 2) + iVar1);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    lVar9 = lVar9 + -1;
    lVar4 = lVar4 + 4;
    puVar2 = puVar2 + 1;
  } while (lVar9 != 0);
  *(unsigned char *)(param_2 + 0x1d4) = 1;
  return;
}

