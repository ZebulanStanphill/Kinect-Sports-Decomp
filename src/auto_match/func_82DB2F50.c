void fn_82DB2F50(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    (*(int (**)())(*param_1 + 8))();
    (*(int (**)())(*param_1 + 4))(param_1,param_2);
  }
  return;
}

