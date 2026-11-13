extern int fn_822315A0();
extern int fn_8266C540();
extern int fn_8266C630();
extern int fn_8266D9F0();
extern int fn_8266EC00();
extern int fn_8266F580();
extern int fn_8266F680();
extern int fn_8266F688();
extern int fn_8266F6A0();
extern int fn_8266F6B0();
extern int fn_82670438();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_8266EFC0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  struct { int first; int second; } stack_pair_50;

  
  (**(int (***)())(**(int **)(param_1 + 0x24) + 0x10))();
  if (*(int *)(param_1 + 0xec) != 0) {
    if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0xdc)) {
      fn_8266EC00(*(int *)(param_1 + 0xd8),*(int *)(param_1 + 0xdc),0,0);
    }
    *(unsigned int *)(param_1 + 0xec) = 0;
  }
  fn_8266C540(param_1);
  for (iVar5 = *(int *)(param_1 + 0xd8); iVar5 != *(int *)(param_1 + 0xdc); iVar5 = iVar5 + 0xc) {
    fn_8266D9F0(&stack_pair_50.first,iVar5);
    iVar1 = stack_pair_50.first;
    if (((((stack_pair_50.first != 0) && (iVar2 = fn_8266F580(stack_pair_50.first), iVar2 == 0)) &&
         (-((*(unsigned int *)(iVar5 + 8) < 2) - 1) == param_2)) &&
        ((iVar2 = fn_8266F688(iVar1), param_3 == 0 ||
         (iVar3 = fn_8266F680(iVar1), iVar3 != 0)))) &&
       ((iVar2 == 0 || ((iVar2 == param_4 || (param_4 == 0)))))) {
      iVar2 = fn_8266F6A0(iVar1);
      if ((iVar2 == 0) &&
         (uVar4 = fn_8266F6B0(iVar1), (uVar4 & *(unsigned int *)(param_1 + 0x1d8)) == 0)) {
        fn_82670438(iVar1,*(unsigned int *)(param_1 + 0xcc));
      }
    }
    if (stack_pair_50.second != 0) {
      fn_822315A0();
    }
  }
  fn_8266C630(param_1);
  (**(int (***)())(**(int **)(param_1 + 0x24) + 0x14))();
  return;
}

