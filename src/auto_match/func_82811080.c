extern int fn_8262F6A8();


void fn_82811080(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)fn_8262F6A8();
  }
  (*(int (**)())(*piVar1 + 0xc))(piVar1,param_2,param_3);
  return;
}

