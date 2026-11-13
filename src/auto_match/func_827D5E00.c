extern int fn_82517978();
extern int fn_827D50B8();
extern int fn_827D5108();
extern int fn_827E27D8();
extern int fn_827E27E0();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_827D5E00(int param_1,unsigned int *param_2)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int (**pcVar4)();
  struct { unsigned int first; unsigned int second; } stack_pair_38;

  
  iVar3 = fn_827D50B8(param_2[3]);
  if ((iVar3 != 0) && (iVar3 = fn_827D50B8(param_2[3]), iVar3 != 0x4c7)) {
    stack_pair_38.first = 0;
    stack_pair_38.second = 0;
    piVar1 = *(int **)(param_1 + 0x2c4);
    fn_82517978(&stack_pair_38.first,param_2[3],param_2[4],0);
    (**(int (***)())(*piVar1 + 0xc))(piVar1,&stack_pair_38.first);
  }
  iVar3 = fn_827E27D8(param_2);
  if (iVar3 != 0) {
    stack_pair_38.first = 0;
    stack_pair_38.second = 0;
    fn_82517978(&stack_pair_38.first,param_2[3],param_2[4],0);
    uVar2 = fn_827E27E0(param_2);
    pcVar4 = (int (**)())fn_827E27D8(param_2);
    (*pcVar4)(&stack_pair_38.first,uVar2);
  }
  fn_827D5108(param_2[3],3);
  (**(int (***)())*param_2)(param_2,1);
  return;
}

