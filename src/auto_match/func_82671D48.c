extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_82671370();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_3c;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_40;


void fn_82671D48(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  struct { unsigned int first; int second; } stack_pair_40;

  
  uVar3 = 0;
  stack_pair_40.first = 0;
  iVar2 = fn_82A1BB18();
  if (iVar2 == lbl_831E7B44) {
    (**(int (***)())(**(int **)(param_1 + 0x10) + 100))(*(int **)(param_1 + 0x10),param_2);
  }
  else if (*(int *)(param_1 + 0xe8) == 0) {
    lVar1 = fn_8265C9E0(0x48);
    if (lVar1 != 0) {
      stack_pair_40.first = 0;
      stack_pair_40.second = 0;
      fn_82517978(&stack_pair_40.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
      uVar3 = fn_82671370(lVar1,&stack_pair_40.first,param_2);
      if (stack_pair_40.second != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,uVar3);
  }
  return;
}

