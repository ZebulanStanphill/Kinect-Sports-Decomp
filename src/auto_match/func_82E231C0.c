int fn_82E231C0(unsigned int *param_1)

{
  int lVar1;
  
  lVar1 = (unsigned __int64)(unsigned int)param_1[1] - 1;
  param_1[1] = (int)lVar1;
  if (lVar1 == 0) {
    (*(int (**)())*param_1)(param_1,1);
    return 0;
  }
  return lVar1;
}

