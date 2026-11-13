extern int fn_82CE4118();
extern int fn_82CED5B8();


void fn_82E044B0(int param_1)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_82CE4118(*(unsigned int *)(param_1 + 4));
  }
  *(unsigned int *)(param_1 + 4) = 0;
  fn_82CED5B8(param_1);
  return;
}

