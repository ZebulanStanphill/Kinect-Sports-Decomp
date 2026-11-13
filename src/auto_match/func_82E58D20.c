extern unsigned int lbl_82154D18;


void fn_82E58D20(unsigned int *param_1)

{
  *param_1 = &lbl_82154D18;
  if ((int *)param_1[4] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[4] + 0x8))(param_1[4]);
    param_1[4] = 0;
  }
  return;
}

