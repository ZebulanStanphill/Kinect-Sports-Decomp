void fn_8286A1E0(unsigned int *param_1,unsigned int *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    (*(int (**)())*param_1)(param_1,0);
  }
  return;
}

