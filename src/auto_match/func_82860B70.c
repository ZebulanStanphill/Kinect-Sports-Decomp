extern int fn_82648D40();


void fn_82860B70(int *param_1)

{
  if (param_1[1] != 0) {
    fn_82648D40(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

