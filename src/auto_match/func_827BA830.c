extern int fn_827B4F80();
extern int fn_827BA7C0();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


void fn_827BA830(int param_1,unsigned short param_2,unsigned short param_3)

{
  unsigned short uStack_20;
  unsigned short uStack_1e;
  struct { unsigned int first; unsigned int second; } stack_pair_18;

  
  stack_pair_18.first = *(unsigned int *)(param_1 + 0x14);
  stack_pair_18.second = 1;
  uStack_20 = param_2;
  uStack_1e = param_3;
  fn_827B4F80(param_1 + 4,&stack_pair_18.first);
  fn_827BA7C0(param_1 + 0x14,&uStack_20);
  return;
}

