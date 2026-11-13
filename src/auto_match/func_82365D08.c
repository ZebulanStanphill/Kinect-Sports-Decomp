extern int fn_82264CE0();
extern int fn_82359BB0();


void fn_82365D08(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    fn_82264CE0(*(unsigned int *)(param_1 + 0x68),0xffffffff821baa8c,0,0,0,0,0,0);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x50) != piVar1);
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0xc))(piVar1,(int *)(param_1 + 0x38) != piVar1);
    *(unsigned int *)(param_1 + 0x48) = 0;
  }
  fn_82359BB0(param_1 + 0x24);
  fn_82359BB0(param_1 + 0x14);
  return;
}

