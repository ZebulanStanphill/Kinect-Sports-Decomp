void fn_82D4D188(unsigned int *param_1,unsigned int param_2)

{
  *(unsigned char *)((int)param_1 + 3) = 0;
  *param_1 = param_2 & 0xff | *param_1;
  return;
}

