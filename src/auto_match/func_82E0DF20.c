extern int fn_82CE4118();
extern int fn_82E16E38();


void fn_82E0DF20(int param_1,unsigned __int64 param_2)

{
  unsigned int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  *(unsigned int *)(param_1 + 0x38) = 1;
  if (*piVar1 != 0) {
    fn_82CE4118(*piVar1);
  }
  *piVar1 = 0;
  fn_82E16E38(param_1,param_2);
  return;
}

