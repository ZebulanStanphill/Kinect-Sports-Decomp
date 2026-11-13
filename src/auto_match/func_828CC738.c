extern int fn_828A12F0();


void fn_828CC738(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_828A12F0(*(unsigned int *)(param_1 + 0x6c),*(unsigned int *)(param_1 + 0xa8));
  (*(int (**)())(*piVar1 + 0x14))(piVar1,param_1);
  return;
}

