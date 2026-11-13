extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_8259BB38();
extern int fn_827D98C0();
extern int fn_82A1E650();
extern int iRam83281104;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_825BDBF0(int param_1,unsigned __int64 param_2,unsigned int param_3,int *param_4,
                  unsigned int *param_5,unsigned __int64 param_6)

{
  unsigned int *puVar1;
  int iVar2;
  struct { int first; int second; } stack_pair_40;

  
  iVar2 = fn_82A1E650(*(unsigned int *)(param_1 + 0x1d8),0);
  if (iVar2 == 0) {
    fn_82517A50(param_6,param_4);
    *param_5 = param_3;
    if ((*param_4 == 0) || (iVar2 = fn_827D98C0(), iVar2 != iRam83281104)) {
      fn_8259BB38(&stack_pair_40.first,param_1 + 0x5c,param_2);
      if (stack_pair_40.first == *(int *)(param_1 + 0x60)) {
        *param_5 = param_3;
        fn_82517A50(param_6,param_4);
      }
      else {
        puVar1 = (unsigned int *)(stack_pair_40.first + 0xc);
        stack_pair_40.first = 0;
        stack_pair_40.second = 0;
        *param_5 = *puVar1;
        fn_82517978(&stack_pair_40.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
        fn_823F2E20(param_6,&stack_pair_40.first);
        if (stack_pair_40.second != 0) {
          fn_822315A0();
        }
      }
    }
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return;
}

