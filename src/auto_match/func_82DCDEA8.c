extern unsigned int *auStack_f0;
extern int fn_82DE0C30();
extern int fn_82DE0D10();
extern int fn_82DE0D40();


void fn_82DCDEA8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char auStack_f0 [208];
  
  fn_82DE0D10(auStack_f0);
  fn_82DE0C30(auStack_f0,param_1,param_2,param_3);
  fn_82DE0D40(auStack_f0);
  return;
}

