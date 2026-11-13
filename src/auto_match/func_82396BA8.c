extern int fn_82358BC8(param_1,param_2);


void fn_82396BA8(int param_1,int *param_2)

{
  if (((*param_2 == 0x59) && (*(int *)(param_1 + 0x1e4) != 0)) &&
     (*(unsigned int *)(*(int *)(param_1 + 0x1e4) + 0xa8) == param_2[2])) {
    param_2[3] = 1;
  }
  fn_82358BC8(param_1,param_2);
  return;
}

