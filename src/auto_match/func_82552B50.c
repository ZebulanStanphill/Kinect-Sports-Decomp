extern int fn_82536288();
extern int fn_82536358();


void fn_82552B50(unsigned int *param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*param_1;
  if (uVar2 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = fn_82536358(uVar2);
  }
  if (cVar1 != '\0') {
    if (((param_2 & 0xff) != 0) && ((uVar2 & 0xffffffff) != 0)) {
      (**(int (***)())*(unsigned int *)uVar2)(uVar2);
    }
    fn_82536288(param_1);
    *param_1 = 0;
    param_1[2] = 0xffffffff;
    param_1[1] = 0;
  }
  return;
}

