void fn_82CA8498(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_2 * 0x54 + param_1;
  uVar1 = *(unsigned int *)(iVar7 + 0x3a30);
  uVar2 = *(unsigned int *)(iVar7 + 0x3a38);
  *(unsigned int *)(param_1 + 0xb4) = uVar1;
  *(unsigned int *)(param_1 + 0xbc) = uVar2;
  uVar3 = *(unsigned int *)(iVar7 + 0x3a34);
  *(unsigned int *)(param_1 + 0xc0) = uVar3;
  uVar4 = *(unsigned int *)(iVar7 + 0x3a3c);
  *(unsigned int *)(param_1 + 200) = uVar4;
  *(unsigned int *)(param_1 + 0xa4) = uVar1;
  *(unsigned int *)(param_1 + 0xac) = uVar2;
  *(unsigned int *)(param_1 + 0xa8) = uVar3;
  *(unsigned int *)(param_1 + 0xb0) = uVar4;
  iVar5 = *(int *)(iVar7 + 0x3a40);
  *(int *)(param_1 + 0x9c) = iVar5;
  iVar6 = *(int *)(iVar7 + 0x3a44);
  *(int *)(param_1 + 0xa0) = iVar6;
  if (*(int *)(param_1 + 0x5118) != 0) {
    iVar5 = iVar5 + 1 >> 1;
    iVar6 = iVar6 + 1 >> 1;
    *(int *)(param_1 + 0xa8) = iVar5;
    *(int *)(param_1 + 0xb0) = iVar6;
    *(int *)(param_1 + 0xa4) = iVar5 << 1;
    *(int *)(param_1 + 0xac) = iVar6 << 1;
  }
  *(unsigned int *)(param_1 + 0xb8) = *(unsigned int *)(iVar7 + 0x3a48);
  *(unsigned int *)(param_1 + 0xc4) = *(unsigned int *)(iVar7 + 0x3a4c);
  *(unsigned int *)(param_1 + 0x98) = *(unsigned int *)(iVar7 + 0x3a50);
  *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)(iVar7 + 0x3a54);
  *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(iVar7 + 0x3a58);
  *(unsigned int *)(param_1 + 0x90) = *(unsigned int *)(iVar7 + 0x3a5c);
  *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(iVar7 + 0x3a60);
  *(unsigned int *)(param_1 + 0xcc) = *(unsigned int *)(iVar7 + 0x3a64);
  *(unsigned int *)(param_1 + 0xd0) = *(unsigned int *)(iVar7 + 0x3a68);
  *(unsigned int *)(param_1 + 0xd4) = *(unsigned int *)(iVar7 + 0x3a6c);
  *(unsigned int *)(param_1 + 0xd8) = *(unsigned int *)(iVar7 + 0x3a70);
  iVar5 = *(int *)(iVar7 + 0x3a74);
  *(int *)(param_1 + 0xdc) = iVar5;
  *(unsigned int *)(param_1 + 0xe0) = *(unsigned int *)(iVar7 + 0x3a78);
  *(unsigned int *)(param_1 + 0xe4) = *(unsigned int *)(iVar7 + 0x3a7c);
  *(unsigned int *)(param_1 + 0xe8) = *(unsigned int *)(iVar7 + 0x3a80);
  if (*(int *)(param_1 + 0xecc) != 0) {
    *(int *)(param_1 + 0xee4) = iVar5 + *(int *)(param_1 + 0xecc);
    return;
  }
  *(unsigned int *)(param_1 + 0xee4) = 0;
  return;
}

