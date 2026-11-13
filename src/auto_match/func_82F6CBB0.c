void _initterm(unsigned int *param_1,unsigned int *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((int (**)())*param_1 != (int (**)())0x0) {
      ((int (*)())*param_1)();
    }
  }
  return;
}

