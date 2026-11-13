extern int fn_82517978();
extern int fn_827DA9F8();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


int fn_827E4D00(int param_1)

{
  int uVar1;
  int iVar2;
  struct Entry { int value[10]; } *e;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  e = *(struct Entry **)(param_1 + 0x20) + (*(int *)(param_1 + 4) + 3);
  if (e->value[0] == 0) {
    stack_pair_20.first = 0;
    stack_pair_20.second = 0;
    e->value[0] = 1;
    fn_82517978(&stack_pair_20.first,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),0);
    uVar1 = fn_827DA9F8(*(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_1 + 0x30),
                              param_1 + 0x34,*(unsigned int *)(param_1 + 4),
                              *(unsigned int *)(param_1 + 0x138),&stack_pair_20.first);
  }
  else {
    uVar1 = 0x1392;
  }
  return uVar1;
}

