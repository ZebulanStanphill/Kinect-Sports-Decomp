void fn_82E69048(int param_1)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  int iVar3;
  unsigned char bVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int uVar7;
  
  if (*(int *)(param_1 + 0x10) != 0x20) {
    iVar3 = -*(int *)(param_1 + 0x10);
    iVar6 = iVar3 + 0x20;
    if (0 < iVar6) {
      lVar5 = (unsigned __int64)(iVar3 + 0x1fU >> 3) + 1;
      uVar7 = -iVar6;
      do {
        uVar7 = uVar7 + 8;
        pbVar2 = *(unsigned char **)(param_1 + 8);
        if (iVar6 < 8) {
          bVar1 = *(unsigned char *)(param_1 + 0xc);
          bVar4 = (unsigned char)((0xff >> (uVar7 & 0x3f)) << (uVar7 & 0x3f));
          *pbVar2 = *pbVar2 & ~bVar4;
          **(unsigned char **)(param_1 + 8) = bVar1 & bVar4 | **(unsigned char **)(param_1 + 8);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        else {
          *pbVar2 = *(unsigned char *)(param_1 + 0xc);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        iVar6 = iVar6 + -8;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  *(unsigned int *)(param_1 + 0x10) = 0x20;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

