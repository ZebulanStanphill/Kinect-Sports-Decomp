extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8229EB38(int param_1,int param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  char *pcStack_18;
  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  if (param_2 != *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = param_2;
    if (param_2 == 0) {
      fn_82273CD8(&stack_pair_20.first,4);
      pcStack_18 = "single";
    }
    else {
      if (param_2 != 1) goto code_r0x8229ebbc;
      fn_82273CD8(&stack_pair_20.first,4);
      pcStack_18 = "versus";
    }
    fn_82672C20(*(unsigned int *)(param_1 + 8),0xffffffff821ab578,&stack_pair_20.first,1);
  }
code_r0x8229ebbc:
  fn_82273C88(&stack_pair_20.first);
  return;
}

