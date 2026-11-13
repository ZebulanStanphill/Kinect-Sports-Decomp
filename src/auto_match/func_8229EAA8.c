extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8229EAA8(int *param_1,unsigned int param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  if (*param_1 != 0) {
    *param_1 = 0;
    fn_82672C20(param_1[2],0xffffffff821ab58c,0,0);
    if (*param_1 != 0) {
      return;
    }
  }
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  fn_82273CD8(&stack_pair_30.first,5);
  uStack_28 = param_2;
  fn_82672C20(param_1[2],0xffffffff821ab59c,&stack_pair_30.first,1);
  fn_82273C88(&stack_pair_30.first);
  return;
}

