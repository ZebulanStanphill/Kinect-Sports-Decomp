extern unsigned int lbl_82165B70;


void fn_82F52978(unsigned int *param_1)

{
  *param_1 = &lbl_82165B70;
  if ((int *)param_1[2] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[2] + 0x28))(param_1[2]);
    param_1[2] = 0;
  }
  return;
}

