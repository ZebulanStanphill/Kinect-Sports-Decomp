extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8229F208(int param_1,int param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  char *pcStack_18;
  
  stack_pair_20.first = 0;
  stack_pair_20.second = 0;
  if (*(int *)(param_1 + 4) != param_2) {
    *(int *)(param_1 + 4) = param_2;
    if (param_2 == 0) {
      *(unsigned int *)(param_1 + 0x10) = ltcg_pool_0_0f;
      fn_82273CD8(&stack_pair_20.first,4);
      pcStack_18 = "appear";
    }
    else {
      if (param_2 != 1) goto LAB_8229f2a4;
      *(unsigned int *)(param_1 + 0x10) = ltcg_pool_0_0f;
      fn_82273CD8(&stack_pair_20.first,4);
      pcStack_18 = "disappear";
    }
    fn_82672C20(*(unsigned int *)(param_1 + 8),0xffffffff821ab71c,&stack_pair_20.first,1);
  }
LAB_8229f2a4:
  fn_82273C88(&stack_pair_20.first);
  return;
}

