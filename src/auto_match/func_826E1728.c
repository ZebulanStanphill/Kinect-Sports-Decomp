extern int fn_8268C750();


void fn_826E1728(unsigned int param_1,int param_2)

{
  if (param_1 != 0) {
    fn_8268C750();
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  }
  return;
}

