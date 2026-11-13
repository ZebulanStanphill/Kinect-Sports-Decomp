unsigned __int64 fn_82C7B980(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd40);
  uVar5 = *(unsigned int *)(param_1 + 0xbc) / uVar7;
  uVar3 = *(unsigned int *)(param_1 + 200) / uVar7;
  uVar1 = *(unsigned int *)(param_1 + 0x8c) / uVar7;
  trapWord(6,uVar7,0);
  uVar8 = *(unsigned int *)(param_1 + 0x88) / uVar7;
  trapWord(6,uVar7,0);
  *(unsigned int *)(param_1 + 0xf24) = 0;
  trapWord(6,uVar7,0);
  iVar6 = (int)uVar5;
  *(int *)(param_1 + 0xf28) = iVar6;
  trapWord(6,uVar7,0);
  *(unsigned int *)(param_1 + 0xf2c) = 0;
  iVar4 = (int)uVar3;
  *(int *)(param_1 + 0xf30) = iVar4;
  iVar2 = (int)uVar1;
  *(int *)(param_1 + 0xf1c) = iVar2;
  *(int *)(param_1 + 0xf20) = (int)uVar8;
  *(int *)(param_1 + 0xf34) = *(int *)(param_1 + 0xdc);
  *(int *)(param_1 + 0xf38) = *(int *)(param_1 + 0xe0);
  if (1 < uVar7) {
    *(int *)(param_1 + 0xf48) = iVar6;
    *(int *)(param_1 + 0xf50) = iVar4;
    *(int *)(param_1 + 0xf4c) = (int)(uVar5 << 1);
    *(int *)(param_1 + 0xf54) = (int)(uVar3 << 1);
    *(int *)(param_1 + 0xf3c) = iVar2;
    *(int *)(param_1 + 0xf58) = *(int *)(param_1 + 0xcc) * iVar6 + *(int *)(param_1 + 0xdc);
    *(int *)(param_1 + 0xf5c) = *(int *)(param_1 + 0xd0) * iVar4 + *(int *)(param_1 + 0xe0);
    if (uVar7 == 4) {
      *(int *)(param_1 + 0xf40) = (int)(uVar1 << 1);
      *(int *)(param_1 + 0xf44) = (int)(uVar8 << 1);
    }
    else {
      *(unsigned int *)(param_1 + 0xf40) = *(unsigned int *)(param_1 + 0x8c);
      *(unsigned int *)(param_1 + 0xf44) = *(unsigned int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x3b80) = *(int *)(param_1 + 0xcc) * iVar2 * 0x10;
    *(int *)(param_1 + 0x3b84) = *(int *)(param_1 + 0xd0) * iVar2 * 8;
  }
  return 0;
}

