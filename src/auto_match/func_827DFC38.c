extern int fn_827D96A0();
extern int fn_827E0250();
extern int fn_827E0438();
extern int fn_827E0658();
extern int fn_827E1220();
extern int fn_827E2598();
extern int fn_827E8720();
extern unsigned int iStack_38;
extern unsigned int uStack_34;


void fn_827DFC38(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  int aiStack_40 [2];
  struct { int first; unsigned int second; } stack_pair_38;

  
  fn_827E2598(param_2);
  iVar2 = fn_827D96A0();
  aiStack_40[0] = iVar2;
  fn_827E0658(&stack_pair_38.first,param_1,aiStack_40);
  if ((stack_pair_38.first != *(int *)(param_1 + 4)) &&
     ((unsigned __int64)*(unsigned int *)(stack_pair_38.first + 0xc) == (param_2 & 0xffffffff))) {
    uVar1 = fn_827E0250(param_1,stack_pair_38.first + 8);
    fn_827E0438(param_1,stack_pair_38.first,uVar1);
    fn_827E8720(&stack_pair_38.first,param_1 + 4,stack_pair_38.first);
    stack_pair_38.second = (unsigned int)param_2;
    stack_pair_38.first = iVar2;
    fn_827E1220(aiStack_40,param_1 + 0x78,&stack_pair_38.first);
  }
  return;
}

