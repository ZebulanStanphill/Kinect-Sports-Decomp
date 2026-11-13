extern unsigned int iStack_18;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_822688A0(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int (**pcVar2)();
  int iVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  int iStack_18;
  unsigned int uStack_14;
  
  if (param_2 < 3) {
    pcVar2 = *(int (***)())(param_1 + 0x5b8);
    if (pcVar2 == (int (**)())0x0) {
      return;
    }
    uStack_14 = *(unsigned int *)(param_1 + 0x5bc);
    stack_pair_20.first = 0;
    for (puVar1 = *(unsigned int **)**(int **)(param_1 + 0x5c0);
        puVar1 != (unsigned int *)**(int **)(param_1 + 0x5c0); puVar1 = (unsigned int *)*puVar1) {
      iVar3 = puVar1[2];
      if (*(unsigned int *)(iVar3 + 0x40) == param_2) goto LAB_82268970;
    }
    iVar3 = 0;
LAB_82268970:
    stack_pair_20.second = *(unsigned int *)(iVar3 + 0xdc);
    iStack_18 = (param_2 - *(int *)(param_1 + 0x4bc)) * 0x38 + param_1 + 0x638;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    pcVar2 = *(int (***)())(param_1 + 0x5b8);
    if (pcVar2 == (int (**)())0x0) {
      return;
    }
    uStack_14 = *(unsigned int *)(param_1 + 0x5bc);
    stack_pair_20.first = 1;
    for (puVar1 = *(unsigned int **)**(int **)(param_1 + 0x5c0);
        puVar1 != (unsigned int *)**(int **)(param_1 + 0x5c0); puVar1 = (unsigned int *)*puVar1) {
      iVar3 = puVar1[2];
      if (*(int *)(iVar3 + 0x40) == *(int *)(param_1 + 0x4bc) + 3) goto LAB_82268910;
    }
    iVar3 = 0;
LAB_82268910:
    stack_pair_20.second = *(unsigned int *)(iVar3 + 0xdc);
    iStack_18 = 0;
  }
  (*pcVar2)(&stack_pair_20.first);
  return;
}

