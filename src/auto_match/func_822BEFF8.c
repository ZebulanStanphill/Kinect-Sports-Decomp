extern int fn_8232B210();
extern int fn_8232B310();
extern int fn_8232B410();
extern int fn_82F63108();


void fn_822BEFF8(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x5c0);
  *(unsigned int *)(param_1 + 0x5c8) = 0;
  if ((param_2 == 0) && (*piVar3 != 0)) {
    if (param_3 == 0) {
      fn_8232B410(piVar3);
      if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      uVar2 = 0;
    }
    else {
      fn_8232B210();
      if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      uVar2 = 1;
    }
    (**(int (***)())(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),uVar2);
  }
  else {
    iVar1 = *piVar3;
    *piVar3 = param_2;
    fn_8232B310(piVar3,iVar1);
  }
  return;
}

