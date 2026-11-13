extern int fn_82BEB640();


unsigned __int64 fn_82BE5398(int *param_1,int *param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if ((int *)*param_1 == param_2) {
      *param_1 = *param_2;
    }
    if ((int *)param_1[1] == param_2) {
      param_1[1] = param_2[1];
    }
    if ((int *)param_2[1] != (int *)0x0) {
      *(int *)param_2[1] = *param_2;
    }
    if ((void *)*param_2 != 0) {
      *(int *)(*param_2 + 4) = param_2[1];
    }
    if (param_2 == (int *)param_1[2]) {
      param_1[2] = *param_2;
    }
    if (param_3 != 0) {
      fn_82BEB640(param_2);
      fn_82BE56C0(param_2);
    } else {
      param_2[1] = 0;
      *param_2 = 0;
    }
    uVar1 = 1;
    param_1[3] = param_1[3] + -1;
  }
  return uVar1;
}

