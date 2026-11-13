extern int fn_8305C848();


int fn_8305D000(int param_1)

{
  *(unsigned int *)(param_1 + 0x60) = 0;
  fn_8305C848();
  return param_1;
}

