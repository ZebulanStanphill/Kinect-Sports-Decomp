void fn_823F2D20(int param_1,int param_2,int param_3)

{
  int lVar1;
  
  lVar1 = 7;
  do {
    (*(int (**)())(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3);
    lVar1 = lVar1 + -1;
    param_3 = param_3 + 4;
  } while (lVar1 != 0);
  return;
}

