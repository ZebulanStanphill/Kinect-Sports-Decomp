extern unsigned int *auStack_60;
extern int fn_8223B610();
extern int fn_823A9880();


void fn_823A97D8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned char auStack_60 [80];
  
  fn_8223B610(param_2,auStack_60,0x50,0,0);
  if ((param_3 & 0xffffffff) != 0) {
    fn_823A9880(param_3,auStack_60);
  }
  return;
}

