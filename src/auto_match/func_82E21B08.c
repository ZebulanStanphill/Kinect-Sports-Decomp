extern int fn_8265C9E0();
extern int memcpy();


unsigned int * fn_82E21B08(unsigned int *param_1,int param_2,int param_3)

{
  int uVar1;
  
  *param_1 = param_3;
  uVar1 = fn_8265C9E0(param_3);
  param_1[1] = uVar1;
  memcpy(uVar1,param_2,param_3);
  param_1[2] = 0;
  return param_1;
}

