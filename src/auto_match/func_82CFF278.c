void fn_82CFF278(unsigned int *param_1,unsigned int param_2)

{
  { unsigned int *p = param_1 + 2;
  p[0] = 0;
  p[1] = 0;
  p[2] = 0x80000000; }
  param_1[1] = param_2;
  *param_1 = param_2;
  return;
}

