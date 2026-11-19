extern int fn_82CE4118();
extern int fn_82E17058();


void fn_82E0DEC0(int self,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *piVar1;
  
  piVar1 = *(int **)(self + 0x3c);
  *(unsigned int *)(self + 0x38) = 1;
  if (*piVar1 != 0) {
    fn_82CE4118(*piVar1);
  }
  *piVar1 = 0;
  fn_82E17058(self,param_2,param_3,param_4);
  return;
}

