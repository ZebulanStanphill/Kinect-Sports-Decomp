extern int fn_8267BE38();
extern int fn_8267E898();
extern unsigned int iStack_40;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_8267ECD0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  struct { int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  RtlEnterCriticalSection(param_1 + 0x10);
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      (*(int (**)())**(unsigned int **)(param_1 + 4))((*(unsigned int **)(param_1 + 4))[1]);
    }
    else {
      stack_pair_40.first = 0;
      stack_pair_40.second = 0;
      uStack_38 = 0;
      fn_8267E898(&stack_pair_40.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8));
      iVar2 = stack_pair_40.first;
      uVar3 = (unsigned __int64)stack_pair_40.second;
      if (uVar3 != 0) {
        puVar4 = (unsigned int *)(stack_pair_40.first + -4);
        do {
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 2;
          (*(int (**)())*puVar1)(*puVar4);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      fn_8267BE38(iVar2);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x10);
  return;
}

