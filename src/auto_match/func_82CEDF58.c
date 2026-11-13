extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82CEDF58(int param_1,unsigned __int64 param_2)

{
  fn_82CE4040(param_2);
  fn_82CE4118(*(unsigned int *)(param_1 + 8));
  *(int *)(param_1 + 8) = (int)param_2;
  return;
}

