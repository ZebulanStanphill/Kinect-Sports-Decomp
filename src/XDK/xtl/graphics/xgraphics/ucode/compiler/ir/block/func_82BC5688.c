extern int fn_82BBFDB0();


void fn_82BC5688(int param_1,int param_2)

{
  fn_82BBFDB0(param_2,*(unsigned int *)(param_1 + 0x88));
  *(int *)(param_1 + 0x88) = param_2;
  *(int *)(param_2 + 0x3b4) = param_1;
  return;
}

