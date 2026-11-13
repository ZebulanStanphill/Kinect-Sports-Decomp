extern int fn_82D9FE60();


void fn_82D9FE70(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 8) = param_2;
  *(int (***)())(param_1 + 4) = fn_82D9FE60;
  return;
}

