void fn_82DB2F50(int *self,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    (*(int (**)())(*self + 8))();
    (*(int (**)())(*self + 4))(self,param_2);
  }
  return;
}

