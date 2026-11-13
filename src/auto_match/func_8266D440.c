extern int fn_8265CA20();
extern int fn_8266CB60();


void fn_8266D440(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)*param_1;
  if (uVar1 != 0) {
    for (; (uVar1 & 0xffffffff) != (unsigned __int64)param_1[2]; uVar1 = uVar1 + 0xc) {
      fn_8266CB60(uVar1,0);
    }
    fn_8265CA20(*param_1);
  }
  return;
}

