#define true 1


int * fn_826BDED8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  char cVar2;
  
  while( true ) {
    if (param_1 == (int *)0x0) {
      return (int *)0x0;
    }
    cVar2 = (**(int (***)())(*param_1 + 0x24))(param_1,param_2,param_3,0);
    if (cVar2 != '\0') break;
    piVar1 = param_1 + 1;
    param_1 = (int *)(*piVar1 + 0x10);
    if (*piVar1 == 0) {
      param_1 = (int *)0x0;
    }
  }
  return param_1 + -4;
}

