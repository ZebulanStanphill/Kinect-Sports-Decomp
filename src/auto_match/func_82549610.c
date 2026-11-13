extern int fn_8259C5D8();
extern int fn_82A1BB18();


unsigned int * fn_82549610(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  *param_1 = (int)param_2;
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_2,0,lVar1 + 1);
  return param_1;
}

