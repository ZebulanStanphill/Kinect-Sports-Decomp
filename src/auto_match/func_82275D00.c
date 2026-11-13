unsigned int *
fn_82275D00(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  unsigned int uVar1;
  
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if ((int)param_3[1] < (int)param_1[1]) {
      *param_5 = *param_3;
      uVar1 = param_3[1];
      param_3 = param_3 + 2;
    }
    else {
      *param_5 = *param_1;
      uVar1 = param_1[1];
      param_1 = param_1 + 2;
    }
    param_5[1] = uVar1;
    param_5 = param_5 + 2;
  }
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_5 = *param_1;
    param_5[1] = param_1[1];
    param_5 = param_5 + 2;
  }
  for (; param_3 != param_4; param_3 = param_3 + 2) {
    *param_5 = *param_3;
    param_5[1] = param_3[1];
    param_5 = param_5 + 2;
  }
  return param_5;
}

