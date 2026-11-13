void fn_82D6DB08(unsigned int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  
  (*(int (**)())(*(int *)param_1[3] + 0x1c))(param_1[3]);
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0x1c))(piVar1,param_2);
    param_1[4] = 0;
  }
  (*(int (**)())*param_1)(param_1,1);
  return;
}

