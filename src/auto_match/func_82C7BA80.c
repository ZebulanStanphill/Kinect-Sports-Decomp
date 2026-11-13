void fn_82C7BA80(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0xd40);
  uVar5 = (unsigned __int64)uVar1;
  iVar4 = 0;
  trapWord(6,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xdc);
  iVar3 = *(int *)(param_1 + 0xe0);
  trapWord(6,uVar5,0);
  *(unsigned int *)(param_1 + 0xf24) = 0;
  trapWord(6,uVar5,0);
  *(unsigned int *)(param_1 + 0xf28) = *(unsigned int *)(param_1 + 0xbc) / uVar1;
  trapWord(6,uVar5,0);
  *(unsigned int *)(param_1 + 0xf2c) = 0;
  *(unsigned int *)(param_1 + 0xf30) = *(unsigned int *)(param_1 + 200) / uVar1;
  *(unsigned int *)(param_1 + 0xf1c) = *(unsigned int *)(param_1 + 0x8c) / uVar1;
  *(unsigned int *)(param_1 + 0xf20) = *(unsigned int *)(param_1 + 0x88) / uVar1;
  *(int *)(param_1 + 0xf34) = iVar2;
  *(int *)(param_1 + 0xf38) = iVar3;
  *(unsigned int *)(param_1 + 0xf40) = *(unsigned int *)(param_1 + 0x8c);
  if (*(int *)(param_1 + 0xecc) != 0) {
    iVar4 = *(int *)(param_1 + 0xecc) + iVar2;
  }
  *(int *)(param_1 + 0xee4) = iVar4;
  *(int *)(param_1 + 0xf10) = *(int *)(param_1 + 0xec0) + iVar2;
  *(int *)(param_1 + 0xf14) = *(int *)(param_1 + 0xec4) + iVar3;
  *(int *)(param_1 + 0xf18) = *(int *)(param_1 + 0xec8) + iVar3;
  return;
}

