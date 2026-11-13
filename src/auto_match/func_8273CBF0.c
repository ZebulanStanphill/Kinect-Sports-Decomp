extern int fn_826F8490();


void fn_8273CBF0(unsigned int *param_1)

{
  fn_826F8490(param_1 + 1,0);
  (*(int (**)())(param_1[2] + 4))(param_1 + 2);
  *param_1 = 0xfffffffe;
  return;
}

