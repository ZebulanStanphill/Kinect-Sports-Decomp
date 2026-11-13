extern int fn_82C3C218();


void fn_82C3C318(int *param_1)

{
  if (*(int *)(*param_1 + 0x24c) == 0) {
    return;
  }
  param_1[0x81] = 0;
  *(int (***)())(*param_1 + 0x1e4) = fn_82C3C218;
  return;
}

