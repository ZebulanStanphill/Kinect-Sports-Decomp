extern unsigned int *auStack_210;
extern int fn_8268D560();
extern int fn_826C8C70();


void fn_826E9330(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_210 [512];
  
  fn_8268D560(param_2,auStack_210);
  fn_826C8C70(param_1,"%s",auStack_210);
  return;
}

