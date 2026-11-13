extern int fn_8223C478();
extern int fn_828E9DB8();


void fn_828A8F38(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned char cVar1;
  
  cVar1 = *(char *)(param_4 + 8);
  fn_8223C478(param_3,1,0);
  fn_828E9DB8(param_3,cVar1 != '\0',1);
  return;
}

