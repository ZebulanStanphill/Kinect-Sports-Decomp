void fn_8249F7D0(int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  int *piVar2;
  
  lVar1 = 2;
  piVar2 = param_1;
  do {
    piVar2 = piVar2 + 2;
    if ((int *)*piVar2 != (int *)0x0) {
      (**(int (***)())(*(int *)*piVar2 + 0x24))();
    }
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  param_1[7] = 0;
  (**(int (***)())(*param_1 + 0xc))(param_1,param_2);
  return;
}

