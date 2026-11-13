extern unsigned int *auStack_20;
extern int fn_8223B610();


void fn_823A9830(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int auStack_20 [4];
  
  fn_8223B610(param_2,auStack_20,4,0,0);
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = auStack_20[0];
  }
  return;
}

