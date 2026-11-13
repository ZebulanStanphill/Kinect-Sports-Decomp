void fn_82683CD0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int (**)())*param_1)();
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0x10))(piVar1,param_2,param_3,param_4);
  }
  return;
}

