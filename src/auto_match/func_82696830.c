extern int fn_82695370();
extern int fn_82695DA0();


unsigned int * fn_82696830(unsigned int *param_1,unsigned int param_2,char *param_3)

{
  unsigned int iVar1;
  
  *param_1 = param_2;
  fn_82695DA0(param_1 + 2,param_3);
  if (*param_3 == '\a') {
    iVar1 = fn_82695370(param_3,*param_1);
    param_1[6] = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
  }
  else {
    param_1[6] = 0;
  }
  return param_1;
}

