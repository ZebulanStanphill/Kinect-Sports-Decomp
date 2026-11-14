extern int fn_82F82D40();


unsigned __int64 longjmp(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((int)param_2 == 0) {
    param_2 = 1;
  }
  if (param_1[0x4e] == 0) {
    fn_82F82D40(param_1[0x4d],param_1[0x24],0,param_2);
    return param_2;
  }
  fn_82F82D40(param_1[1],*param_1,0,param_2);
  uVar1 = RtlUnwind(*param_1,param_1[1]);
  return uVar1;
}

