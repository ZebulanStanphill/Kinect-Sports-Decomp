extern unsigned int *auStack_40;
extern int fn_82CEC6E0();
extern int fn_82CEC730();


void fn_82CECC38(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_40 [32];
  
  fn_82CEC730(auStack_40,param_1,param_2,param_1);
  fn_82CEC6E0(param_1,param_2,auStack_40);
  return;
}

