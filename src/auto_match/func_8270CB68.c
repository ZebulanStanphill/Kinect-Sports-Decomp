extern int fn_8270C708();


void fn_8270CB68(int param_1)

{
  int *p;
  fn_8270C708(param_1);
  p = *(int **)(param_1 + 8);
  (*(int (**)())(*p + 0x34))(p);
  return;
}

