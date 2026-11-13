extern int fn_828D7660();


unsigned int * fn_828D8190(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = *param_1;
      fn_828D7660(param_3 + 1,param_1 + 1);
    }
    param_3 = param_3 + 7;
  }
  return param_3;
}

