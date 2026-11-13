extern int fn_8288CDC8();
extern int fn_8288DDF8();
extern int fn_8288E040();
extern int fn_8288F9F8();
extern int fn_8288FA78();
extern int fn_82890FF0();
extern int fn_828910B8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_82891FE0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  struct { int first; int second; } stack_pair_20;

  
  fn_82890FF0();
  fn_8288F9F8(param_1,param_2);
  if ((*(int *)(param_2 + 0x34) == 0) ||
     (iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 0x38), iVar1 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(iVar1 + 0x26);
  }
  if (cVar2 != '\0') {
    fn_828910B8(param_1,param_2);
    fn_8288DDF8(param_1,param_2);
  }
  fn_8288FA78(param_1,param_2);
  stack_pair_20.first = param_2;
  fn_8288E040(&stack_pair_20.second,param_1 + 0x5c,&stack_pair_20.first);
  if (stack_pair_20.second != *(int *)(param_1 + 0x60)) {
    fn_8288CDC8(&stack_pair_20.second,param_1 + 0x5c);
  }
  return;
}

