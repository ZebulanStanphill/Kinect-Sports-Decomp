extern int fn_82CE4118();
extern int fn_82E17058();


void fn_82E0DEC0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  *(unsigned int *)(param_1 + 0x38) = 1;
  if (*piVar1 != 0) {
    fn_82CE4118(*piVar1);
  }
  *piVar1 = 0;
  fn_82E17058(param_1,param_2,param_3,param_4);
  return;
}

