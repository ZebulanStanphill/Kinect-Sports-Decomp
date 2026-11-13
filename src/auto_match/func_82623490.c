extern unsigned int *auStack_40;
extern int fn_82512E18();
extern int fn_825E9F70();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82623490(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int auStack_40;
  struct { unsigned int first; unsigned int second; } stack_pair_38;

  unsigned int uStack_30;
  
  auStack_40 = *param_3;
  stack_pair_38.first = fn_825E9F70(*(unsigned int *)(param_1 + 0xc),~param_2 & 1,&auStack_40);
  uVar1 = auStack_40;
  uStack_30 = auStack_40;
  if (stack_pair_38.first == 0) {
    stack_pair_38.first = 0;
  }
  else {
    stack_pair_38.second = ~param_2 & 1;
    fn_82512E18(param_1 + 0x10,&stack_pair_38.first);
  }
  if (stack_pair_38.first == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = uVar1;
  }
  return;
}

