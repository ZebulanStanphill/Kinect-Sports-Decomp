extern int fn_82BE8CE0();
extern int fn_82BEC810();
extern unsigned int lbl_820EBEAC;


unsigned int * fn_82BFB0D8(unsigned int *param_1,char *param_2)

{
  unsigned int uVar1;
  
  fn_82BE8CE0();
  param_1[2] = 0;
  *param_1 = &lbl_820EBEAC;
  param_1[3] = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar1 = fn_82BEC810(param_2);
    param_1[3] = uVar1;
  }
  return param_1;
}

