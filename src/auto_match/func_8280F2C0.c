extern unsigned int *auStack_20;
extern int fn_8280E960();
extern int fn_8280EA40();


void fn_8280F2C0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [16];
  
  fn_8280EA40(param_1,auStack_20);
  fn_8280E960(auStack_20,param_2);
  return;
}

