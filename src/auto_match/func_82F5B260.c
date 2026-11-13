extern int fn_82F5B210();
extern int fn_8306CEA0();


void fn_82F5B260(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  
  if ((((param_2 & 0xffffffff) != (unsigned __int64)(unsigned int)param_1[1]) ||
      ((param_3 & 0xff) != (unsigned __int64)*(unsigned char *)(param_1 + 2))) &&
     (fn_82F5B210(param_1), (param_2 & 0xffffffff) != 0)) {
    param_1[1] = (int)param_2;
    *(char *)(param_1 + 2) = (char)param_3;
    iVar1 = fn_8306CEA0(param_2,param_3,param_1);
    if (iVar1 < 0) {
      param_1[1] = 0;
      *param_1 = 0;
    }
  }
  return;
}

