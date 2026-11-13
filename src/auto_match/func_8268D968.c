extern int fn_8268D8A8();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8268D968(__int64 param_1,unsigned int param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  
  stack_pair_20.first = 2;
  uStack_18 = 0x200;
  stack_pair_20.second = param_2;
  fn_8268D8A8(&stack_pair_20.first,0xffffffff82005cd0,param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,
                param_1 + 0x10,param_1 + 0x14);
  return;
}

