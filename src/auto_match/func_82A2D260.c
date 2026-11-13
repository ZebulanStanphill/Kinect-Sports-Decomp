void fn_82A2D260(int param_1,int param_2)

{
  *(int *)(param_1 + 0x88) = param_2;
  if ((param_2 < 0) && (*(int (***)())(param_1 + 0xd0) != (int (**)())0x0)) {
    (*(int (**)())(param_1 + 0xd0))(*(unsigned int *)(param_1 + 0xd4));
    *(unsigned int *)(param_1 + 0xd0) = 0;
  }
  return;
}

