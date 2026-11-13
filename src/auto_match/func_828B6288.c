extern int fn_828B6A10();
extern int fn_828B6A40();


void fn_828B6288(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)*param_1;
  if (uVar1 != (param_2 & 0xffffffff)) {
    if (uVar1 != 0) {
      fn_828B6A40(uVar1,param_1);
    }
    *param_1 = (unsigned int)param_2;
    if ((param_2 & 0xffffffff) != 0) {
      fn_828B6A10(param_2,param_1);
    }
  }
  return;
}

