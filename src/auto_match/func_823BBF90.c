extern unsigned int *auStack_20;
extern int fn_8223B610();


void fn_823BBF90(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 *param_3)

{
  unsigned __int64 auStack_20 [2];
  
  fn_8223B610(param_2,auStack_20,8,0,0);
  if (param_3 != (unsigned __int64 *)0x0) {
    *param_3 = auStack_20[0];
  }
  return;
}

