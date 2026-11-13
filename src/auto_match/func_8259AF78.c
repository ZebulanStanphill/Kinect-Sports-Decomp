extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_8259BB38();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_827D98C0();
extern int fn_82A1BB18();
extern int iRam83281104;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_8259AF78(int param_1,unsigned __int64 param_2,unsigned int param_3,int *param_4,
                  unsigned int *param_5,unsigned __int64 param_6)

{
  __int64 lVar1;
  int iVar2;
  struct { int first; int second; } stack_pair_50;

  
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar1 + 1);
  fn_82517A50(param_6,param_4);
  *param_5 = param_3;
  if ((*param_4 == 0) || (iVar2 = fn_827D98C0(), iVar2 != iRam83281104)) {
    fn_8259BB38(&stack_pair_50.first,param_1 + 0x34,param_2);
    iVar2 = stack_pair_50.first;
    if (stack_pair_50.first != *(int *)(param_1 + 0x38)) {
      stack_pair_50.first = 0;
      stack_pair_50.second = 0;
      fn_82517978(&stack_pair_50.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
      fn_823F2E20(param_6,&stack_pair_50.first);
      if (stack_pair_50.second != 0) {
        fn_822315A0();
      }
      *param_5 = *(unsigned int *)(iVar2 + 0xc);
    }
  }
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return;
}

