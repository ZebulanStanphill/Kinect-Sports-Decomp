extern int fn_82A1BB18();
extern int fn_82A59C80();


unsigned __int64 fn_82A59D40(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_82A1BB18();
  param_1[4] = uVar1;
  KeSetEvent(param_1[5],1,0);
  fn_82A59C80(param_1,0xffffffffffffffff);
  (*(int (**)())*param_1)(param_1);
  param_1[4] = 0;
  return 0;
}

