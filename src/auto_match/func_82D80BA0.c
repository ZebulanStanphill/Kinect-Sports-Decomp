extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82D80BA0(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0x1bc) != (int *)0x0) {
    (*(int (**)())(**(int **)(param_1 + 0x1bc) + 0x10))(*(int **)(param_1 + 0x1bc));
    fn_82CE4118(*(unsigned int *)(param_1 + 0x1bc));
  }
  *(int *)(param_1 + 0x1bc) = param_2;
  if ((param_2 & 0xffffffff) != 0) {
    fn_82CE4040(param_2);
  }
  return;
}

