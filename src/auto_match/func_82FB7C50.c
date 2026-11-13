void fn_82FB7C50(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 8) + -0xc) + 0x1c);
  if (((iVar1 == 0) || (iVar1 == 2)) &&
     (piVar2 = *(int **)(*(int *)(param_1 + 8) + -4), piVar2 != (int *)0x0)) {
    (**(int (***)())(*piVar2 + 4))();
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0xc;
  return;
}

