extern unsigned int *auStack_210;
extern int fn_826C8C70();
extern int fn_82779B30();


void fn_826E9200(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_210 [512];
  
  fn_82779B30(param_2,auStack_210);
  fn_826C8C70(param_1,"%s",auStack_210);
  return;
}

