void fn_827DE2E0(unsigned int *param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  
  *param_1 = param_3;
  if (param_3 != param_4) {
    puVar1 = *(unsigned int **)(param_2 + 4);
    for (; param_4 != puVar1; param_4 = param_4 + 1) {
      *param_3 = *param_4;
      param_3 = param_3 + 1;
    }
    for (puVar1 = param_3; puVar1 != *(unsigned int **)(param_2 + 4); puVar1 = puVar1 + 1) {
    }
    *(unsigned int **)(param_2 + 4) = param_3;
    return;
  }
  return;
}

