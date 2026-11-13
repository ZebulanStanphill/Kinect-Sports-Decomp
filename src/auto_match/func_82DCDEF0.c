extern unsigned int *auStack_20;
extern int fn_82DE0DB8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82DCDEF0(int param_1,unsigned int param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int auStack_20 [4];
  
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  auStack_20[0] = param_2;
  fn_82DE0DB8(auStack_20,&stack_pair_30.first,*(unsigned int *)(param_1 + 0x20));
  return;
}

