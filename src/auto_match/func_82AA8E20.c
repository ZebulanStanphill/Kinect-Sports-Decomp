extern int fn_82F68CC0();


unsigned __int64 fn_82AA8E20(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int uVar7;
  
  puVar4 = *(unsigned int **)(param_1 + 0xe8);
  lVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) + 0x1b & 0x3fffffff) * 4 +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x68) + (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  uVar7 = (unsigned int)lVar6;
  if ((int)puVar4[1] < (int)uVar7) {
    uVar1 = 0xfffffffffffffff5;
  }
  else {
    puVar4[2] = uVar7;
    if ((int)puVar4[1] < (int)(*(int *)(param_1 + 0x30) * 4 + uVar7)) {
      uVar1 = 0xfffffffffffffff4;
    }
    else {
      fn_82F68CC0(*(unsigned int *)(param_1 + 0x70),(unsigned __int64)*puVar4 + lVar6);
      uVar3 = 0;
      puVar4[2] = *(int *)(param_1 + 0x30) * 4 + puVar4[2];
      uVar7 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar2 = 0;
        do {
          uVar3 = uVar3 + 1;
          puVar4 = (unsigned int *)(iVar2 + *(int *)(param_1 + 0x70));
          iVar2 = iVar2 + 4;
          *puVar4 = (unsigned int)(unsigned char)*puVar4 << 0x18 | (unsigned int)*(unsigned char *)((int)puVar4 + 2) << 0x10 |
                    (unsigned int)*(unsigned char *)((int)puVar4 + 1) << 8 | (unsigned int)*(unsigned char *)puVar4;
          uVar7 = *(unsigned int *)(param_1 + 0x30);
        } while (uVar3 < uVar7);
      }
      iVar2 = 0;
      lVar6 = ((unsigned __int64)uVar7 & 0x3fffffff) * 4 + lVar6;
      if (0 < (int)uVar7) {
        iVar5 = 0;
        do {
          iVar2 = iVar2 + 1;
          *(int *)(iVar5 + *(int *)(param_1 + 0x74)) = (int)lVar6;
          puVar4 = (unsigned int *)(iVar5 + *(int *)(param_1 + 0x70));
          iVar5 = iVar5 + 4;
          lVar6 = (unsigned __int64)*puVar4 + lVar6;
        } while (iVar2 < *(int *)(param_1 + 0x30));
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

