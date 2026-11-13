extern int fn_82A750D0();


void fn_82A751D0(int *param_1)

{
  if (*(int *)(*param_1 + 0x24c) == 0) {
    return;
  }
  param_1[0x81] = 0;
  *(int (***)())(*param_1 + 0x1e4) = fn_82A750D0;
  return;
}

