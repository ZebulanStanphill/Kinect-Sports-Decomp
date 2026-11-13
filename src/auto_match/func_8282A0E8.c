typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_828233A8();
extern int fn_828299A8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


bool fn_8282A0E8(__int64 param_1,unsigned int param_2)

{
  struct { int first; int second; } stack_pair_60;

  struct { unsigned int first; unsigned int second; } stack_pair_58;

  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;

  stack_pair_58.first = param_2;
  fn_828299A8(&stack_pair_58.first,param_1,&stack_pair_60.first);
  uStack_2c = *(unsigned int *)(stack_pair_60.first + 0xc);
  uStack_28 = stack_pair_58.second;
  uStack_30 = param_2;
  fn_828233A8(param_1 + 0x36c,&stack_pair_60.second,0xffffffff82829f58,auStack_40);
  return stack_pair_60.second == 0;
}
