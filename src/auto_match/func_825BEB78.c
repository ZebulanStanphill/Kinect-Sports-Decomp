extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_8259BB38();
extern int fn_827D9718();
extern int fn_827D98C0();
extern int fn_82A1E650();
extern int iRam83281100;
extern int iRam83281104;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_825BEB78(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,int *param_5,
                  unsigned __int64 param_6)

{
  int iVar2;
  __int64 lVar1;
  struct { int first; int second; } stack_pair_40;

  
  fn_82517A50(param_6,param_4);
  *param_5 = (int)param_3;
  iVar2 = fn_82A1E650(*(unsigned int *)(param_1 + 0x1b4),0);
  if (iVar2 != 0x102) {
    if (((*param_4 == 0) || (iVar2 = fn_827D98C0(), iVar2 != iRam83281104)) &&
       ((((param_3 & 0xffffffff) == 0 || (*param_4 == 0)) ||
        ((lVar1 = fn_827D9718(param_3), lVar1 < *(__int64 *)(*(int *)(param_1 + 0x5c) + 0x10)
         && (iVar2 = fn_827D98C0(*param_4), iVar2 == iRam83281100)))))) {
      fn_8259BB38(&stack_pair_40.first,param_1 + 0x1c4,param_2);
      if (stack_pair_40.first != *(int *)(param_1 + 0x1c8)) {
        iVar2 = stack_pair_40.first + 0x10;
        stack_pair_40.first = 0;
        *param_5 = iVar2;
        stack_pair_40.second = 0;
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

