extern unsigned int lbl_821605D0;


void fn_82EF4488(unsigned int *param_1)

{
  *param_1 = &lbl_821605D0;
  if ((int *)param_1[2] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[2] + 0x8))(param_1[2]);
    param_1[2] = 0;
  }
  return;
}

