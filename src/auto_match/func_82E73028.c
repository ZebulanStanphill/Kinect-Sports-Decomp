extern unsigned int lbl_8215EF5C;


void fn_82E73028(unsigned int *param_1)

{
  *param_1 = &lbl_8215EF5C;
  if ((int *)param_1[13] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[13] + 0x8))(param_1[13]);
    param_1[13] = 0;
  }
  return;
}

