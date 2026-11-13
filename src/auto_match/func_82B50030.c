extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82B24700();
extern int fn_82B4B1D8();
extern int fn_82B4E898();


void fn_82B50030(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  
  fn_82B24700(auStack_30);
  fn_82B4B1D8(auStack_30,param_3);
  fn_82B24700(auStack_40,param_2);
  fn_82B4B1D8(auStack_40,param_3);
  fn_82B4E898(param_1,auStack_30,auStack_40,param_3);
  return;
}

