extern int fn_822ABA88();
extern int fn_822AF138();


void fn_82398668(int param_1)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 4))();
  piVar1 = *(int **)(iVar3 * 4 + **(int **)(param_1 + 8));
  uVar2 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x10))(*(int **)(param_1 + 0x2e0));
  iVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar2);
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(unsigned int *)(iVar3 + 0x110),5);
}

