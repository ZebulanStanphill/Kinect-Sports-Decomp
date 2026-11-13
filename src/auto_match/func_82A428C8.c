int fn_82A428C8(unsigned int *param_1,int *param_2)

{
  int lVar1;
  
  lVar1 = (*(int (**)())(param_1[1] + 4))(param_1 + 1);
  if (lVar1 >= 0) {
    *param_1 = param_2;
    (*(int (**)())(*param_2 + 4))(param_2);
  }
  return lVar1;
}

