void fn_8284F390(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0xa0) = param_2;
  *(unsigned int *)(param_1 + 0x9c) = param_3;
  return;
}

