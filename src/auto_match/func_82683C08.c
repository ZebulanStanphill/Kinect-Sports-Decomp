void fn_82683C08(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int (**)())*param_1)();
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 8))(piVar1,param_2,param_3);
  }
  return;
}

