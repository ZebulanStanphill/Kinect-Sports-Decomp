extern int fn_826DF4E8();
extern int fn_826F33F0();


void fn_827590B0(unsigned char *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char uVar1;
  
  uVar1 = fn_826DF4E8(param_2);
  *param_1 = uVar1;
  fn_826F33F0(param_2,param_1 + 4,param_3);
  return;
}

