extern unsigned int *auStack_20;
extern int fn_82810280();
extern int fn_82810328();


void fn_83066DD8(__int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [16];
  
  fn_82810328(param_2,param_1 + 0xc,auStack_20);
  fn_82810280(auStack_20,param_1);
  return;
}

