extern int fn_828C9918();
extern int fn_828C9FD8();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


void fn_828CA5B0(int param_1,unsigned int param_2)

{
  struct { unsigned int first; int second; } stack_pair_20;

  
  stack_pair_20.first = param_2;
  fn_828C9918(&stack_pair_20.second,param_1 + 8,&stack_pair_20.first);
  if (stack_pair_20.second != *(int *)(param_1 + 0xc)) {
    fn_828C9FD8(&stack_pair_20.second,param_1 + 8);
  }
  return;
}

