extern int fn_82B8A2E0();


unsigned int *
fn_82B8A350(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  
  uVar1 = fn_82B8A2E0(param_2,param_3,param_4);
  *param_1 = uVar1;
  param_1[1] = param_1[1] & 0x10000 | 1;
  return param_1;
}

