extern int fn_82A99B70();


void fn_82A9A860(int param_1)

{
  fn_82A99B70(param_1,">");
  fn_82A99B70(param_1,"\r\n");
  *(unsigned int *)(param_1 + 8) = 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

