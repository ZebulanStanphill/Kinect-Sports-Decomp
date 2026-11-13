extern unsigned int lbl_8215ED88;


void fn_82E6EE68(unsigned int *param_1)

{
  *param_1 = &lbl_8215ED88;
  if ((int *)param_1[11] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[11] + 0x8))(param_1[11]);
    param_1[11] = 0;
  }
  return;
}

