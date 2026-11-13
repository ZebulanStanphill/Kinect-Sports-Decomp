extern int fn_828BD8C8();
extern int fn_828BE070();


void fn_828BE158(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  if ((int)param_3 == -1) {
    if (param_2 == (int *)0x0) {
      return;
    }
  }
  else {
    (**(int (***)())(*param_2 + 4))(param_2);
    (**(int (***)())(*param_2 + 0x7c))(param_2,param_1);
    iVar1 = fn_828BD8C8(param_1,param_2,param_3);
    if ((iVar1 != 0) && (iVar1 == 1)) {
      fn_828BE070(param_2,param_3);
      return;
    }
  }
  (**(int (***)())*param_2)(param_2,1);
  return;
}

