extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


unsigned char fn_823ABB08(int param_1,int param_2)

{
  unsigned char uVar1;
  unsigned int *puVar2;
  struct { int first; int second; } stack_pair_20;

  
  for (puVar2 = *(unsigned int **)(param_1 + 0x6c);
      (puVar2 != *(unsigned int **)(param_1 + 0x70) && (*(int *)*puVar2 != param_2));
      puVar2 = puVar2 + 2) {
  }
  if (puVar2 == *(unsigned int **)(param_1 + 0x70)) {
    for (puVar2 = *(unsigned int **)(param_1 + 0x7c);
        (puVar2 != *(unsigned int **)(param_1 + 0x80) && (*(int *)*puVar2 != param_2));
        puVar2 = puVar2 + 2) {
    }
    if (puVar2 == *(unsigned int **)(param_1 + 0x80)) {
      return 0;
    }
  }
  fn_82365BD8(&stack_pair_20.first,puVar2);
  uVar1 = *(unsigned char *)(stack_pair_20.first + 8);
  if (stack_pair_20.second != 0) {
    fn_822315A0();
  }
  return uVar1;
}

