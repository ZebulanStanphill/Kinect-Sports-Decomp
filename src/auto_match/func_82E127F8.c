extern int fn_82CE5410();
extern int fn_82CEAB00();


unsigned int * fn_82E127F8(unsigned int *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  iVar1 = fn_82CE5410();
  fn_82CEAB00(param_1,*(unsigned int *)(iVar1 + 0x10),0);
  return param_1;
}

