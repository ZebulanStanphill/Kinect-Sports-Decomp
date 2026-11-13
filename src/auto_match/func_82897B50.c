extern int fn_828A12F0();


void fn_82897B50(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  int *piVar1;
  
  piVar1 = (int *)fn_828A12F0(param_1,param_4);
  *param_5 = 0;
  (*(int (**)())(*piVar1 + 0x24))(piVar1,param_1,param_2,param_3,param_5);
  return;
}

