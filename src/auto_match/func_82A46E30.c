extern int fn_82A46670();


unsigned __int64 fn_82A46E30(unsigned int *param_1,unsigned int *param_2)

{
  *param_2 = param_1[1];
  if (param_1[1] == 0) {
    param_2[1] = 0;
    param_2[3] = 1;
  }
  else if ((unsigned int)param_1[3] < (unsigned int)param_1[2]) {
    param_2[1] = param_1[3];
    param_1[1] = param_1[1] + param_1[3];
    param_1[2] = param_1[2] - param_1[3];
    param_2[3] = 0;
  }
  else {
    param_2[1] = param_1[2];
    param_2[3] = param_1[4];
    fn_82A46670(*param_1);
  }
  param_2[2] = 1;
  param_2[4] = 0;
  *(unsigned __int64 *)(param_2 + 6) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return 0;
}

