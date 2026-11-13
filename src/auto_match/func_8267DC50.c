extern int fn_8267D560();
extern int fn_8267D748();


void fn_8267DC50(int *param_1)

{
  int iVar1;
  
  if ((param_1[6] & 8U) != 0) {
    fn_8267D748();
    fn_8267D560(param_1 + 6,0xfffffffffffffff7);
  }
  iVar1 = (*(int (**)())(*param_1 + 0xc))(param_1);
  param_1[0xc] = iVar1;
  return;
}

