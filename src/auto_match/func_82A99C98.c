extern int fn_82A99B70();


void fn_82A99C98(int param_1,unsigned __int64 param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  fn_82A99B70(param_1,"</%s>",param_2);
  fn_82A99B70(param_1,"\r\n");
  *(unsigned int *)(param_1 + 8) = 1;
  return;
}

