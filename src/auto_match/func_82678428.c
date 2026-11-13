extern int fn_8268CEC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82678428(int param_1)

{
  unsigned __int64 *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  stack_pair_30.first = *(unsigned int *)(param_1 + 0x104);
  stack_pair_30.second = *(unsigned int *)(param_1 + 0x108);
  uStack_28 = *(unsigned int *)(param_1 + 0x10c);
  uStack_24 = *(unsigned int *)(param_1 + 0x110);
  uStack_20 = *(unsigned int *)(param_1 + 0x114);
  uStack_1c = *(unsigned int *)(param_1 + 0x118);
  fn_8268CEC0(&stack_pair_30.first);
  uVar3 = lbl_821AAD20;
  uVar2 = lbl_82002AE0;
  puVar1 = *(unsigned __int64 **)(param_1 + 0xd8);
  *(unsigned int *)(puVar1 + 0xf0) = stack_pair_30.first;
  *(unsigned int *)(puVar1 + 0xf1) = uVar3;
  *(unsigned int *)((int)puVar1 + 0x784) = stack_pair_30.second;
  *(unsigned int *)((int)puVar1 + 0x78c) = uStack_28;
  *puVar1 = *puVar1 | 0x8000000000000000;
  puVar1 = *(unsigned __int64 **)(param_1 + 0xd8);
  *(unsigned int *)(puVar1 + 0xf2) = uStack_24;
  *(unsigned int *)((int)puVar1 + 0x794) = uStack_20;
  *(unsigned int *)(puVar1 + 0xf3) = uVar3;
  *(unsigned int *)((int)puVar1 + 0x79c) = uStack_1c;
  *puVar1 = *puVar1 | 0x8000000000000000;
  puVar1 = *(unsigned __int64 **)(param_1 + 0xd8);
  *(unsigned int *)(puVar1 + 0xf4) = uVar3;
  *(unsigned int *)((int)puVar1 + 0x7a4) = uVar3;
  *(unsigned int *)(puVar1 + 0xf5) = uVar2;
  *(unsigned int *)((int)puVar1 + 0x7ac) = uVar3;
  *puVar1 = *puVar1 | 0x8000000000000000;
  puVar1 = *(unsigned __int64 **)(param_1 + 0xd8);
  *(unsigned int *)(puVar1 + 0xf6) = uVar3;
  *(unsigned int *)((int)puVar1 + 0x7b4) = uVar3;
  *(unsigned int *)(puVar1 + 0xf7) = uVar3;
  *(unsigned int *)((int)puVar1 + 0x7bc) = uVar2;
  *puVar1 = *puVar1 | 0x8000000000000000;
  return;
}

