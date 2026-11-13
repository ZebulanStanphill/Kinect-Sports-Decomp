void fn_82BE5320(int *param_1,int param_2)

{
  do {
    param_1 = (int *)*param_1;
    if (param_1 == (int *)0x0) {
      return;
    }
  } while (param_1[2] != param_2);
  return;
}

