extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_826721A0();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_5c;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_60;


unsigned __int64
fn_82672F30(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  struct { unsigned int first; int second; } stack_pair_60;

  
  uVar3 = 0;
  stack_pair_60.first = 0;
  iVar2 = fn_82A1BB18();
  if (iVar2 == lbl_831E7B44) {
    (**(int (***)())(**(int **)(param_1 + 0x10) + 0x48))
              (*(int **)(param_1 + 0x10),5,param_2,param_3,param_4,param_5,1);
  }
  else if (*(int *)(param_1 + 0xe8) == 0) {
    lVar1 = fn_8265C9E0(0x40);
    if (lVar1 != 0) {
      stack_pair_60.first = 0;
      stack_pair_60.second = 0;
      fn_82517978(&stack_pair_60.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
      uVar3 = fn_826721A0(lVar1,&stack_pair_60.first,param_2,param_3,param_4,param_5,param_6);
      if (stack_pair_60.second != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,uVar3);
  }
  return 1;
}

