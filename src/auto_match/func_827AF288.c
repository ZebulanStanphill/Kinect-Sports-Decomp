void fn_827AF288(int param_1,int param_2)

{
  if (*(unsigned int *)(param_1 + 8) <= *(unsigned int *)(param_1 + 4)) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4) + param_2;
  fn_827AF130();
  return;
}
