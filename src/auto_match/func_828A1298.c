extern int fn_82881DF0();


void fn_828A1298(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82881DF0();
  piVar1 = (int *)*piVar1;
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0x58))(piVar1,param_1,param_2,param_3);
  }
  return;
}

