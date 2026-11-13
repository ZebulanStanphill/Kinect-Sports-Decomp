extern int fn_822315A0();
extern int fn_82270B70();
extern int fn_82279CA0();
extern int fn_82279D28();
extern int fn_82279E08();
extern int fn_822848B8();
extern int fn_82284B08();
extern int fn_8228D2D0();
extern int fn_8228E4B0();
extern int fn_8229E090();
extern int fn_8229E7D0();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82522588();
extern int fn_828ACCE8();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_83297810;


void fn_8228CD58(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  char cVar3;
  int *piVar2;
  unsigned __int64 uVar4;
  struct { int first; int second; } stack_pair_40;

  struct { int first; int second; } stack_pair_38;


  fn_82279E08();
  uVar4 = (unsigned __int64)lbl_83297810;
  if (uVar4 == 0) {
    uVar4 = fn_82511928();
  }
  fn_825138E0(&stack_pair_40.first,uVar4,1);
  if (stack_pair_40.first != 0) {
    fn_82522588(&stack_pair_38.first,&stack_pair_40.first);
    if (*(int **)(stack_pair_38.first + 0x38) == (int *)0x0) {
      cVar3 = '\0';
    }
    else {
      iVar1 = (**(int (***)())(**(int **)(stack_pair_38.first + 0x38) + 8))();
      cVar3 = (**(int (***)())(*(int *)(iVar1 + 0x198) + 0x3c))();
    }
    if ((cVar3 == '\0') && (*(int *)(param_2 + 0x18c) == 0)) {
      fn_82279D28(param_2,1,1);
      *(unsigned int *)(param_2 + 0x18c) = 1;
    }
    cVar3 = fn_828ACCE8(*(unsigned int *)(stack_pair_40.first + 8));
    if (cVar3 == '\0') {
      if (*(int *)(param_2 + 0x18c) == 0) {
        fn_82279D28(param_2,1,1);
        *(unsigned int *)(param_2 + 0x18c) = 1;
      }
      **(unsigned int **)(param_2 + 0x170) = 0;
      *(unsigned int *)(param_2 + 0x16c) = 0;
    }
    cVar3 = fn_828ACCE8(*(unsigned int *)(stack_pair_40.first + 8));
    if ((cVar3 == '\0') && (*(int *)(param_2 + 0x17c) != 0)) {
      fn_8229E090(*(int *)(param_2 + 0x17c),0,1);
      *(unsigned int *)(param_2 + 0x17c) = 0;
    }
    if (stack_pair_38.second != 0) {
      fn_822315A0();
    }
  }
  piVar2 = (int *)fn_8229E7D0();
  if (*(int *)(param_2 + 400) == 0) {
    if (piVar2[1] == *piVar2) {
      fn_8228E4B0(param_2);
    }
  }
  else if (piVar2[1] != *piVar2) {
    *(unsigned int *)(param_2 + 400) = 0;
    fn_82279CA0(param_2,1);
    if (*(int *)(param_2 + 0x144) != 0) {
      fn_822848B8();
      *(unsigned int *)(param_2 + 0x144) = 0;
    }
  }
  if (*(int *)(param_2 + 0x144) != 0) {
    if ((*(int *)(param_2 + 0x168) != 0) &&
       (iVar1 = fn_82270B70(), *(int *)(iVar1 + 0xa0) == 2)) {
      fn_8228D2D0(param_2);
      *(unsigned int *)(param_2 + 0x168) = 0;
    }
    fn_82284B08(param_1,*(unsigned int *)(param_2 + 0x144));
  }
  fn_82279D28(param_2,1,*(int *)(param_2 + 0x18c) != 0);
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  return;
}
