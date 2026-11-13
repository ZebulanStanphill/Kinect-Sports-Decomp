void fn_82FA9178(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x24); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    (*(int (**)())(*piVar1 + 0x10))(piVar1,param_2,param_3);
  }
  return;
}

