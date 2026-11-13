extern unsigned int *auStack_60;
extern int fn_8280AD30();
extern int fn_8280CED8();


void fn_82800A70(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char auStack_60 [72];
  
  fn_8280CED8(*param_1,auStack_60);
  fn_8280AD30(auStack_60,param_2,param_3);
  return;
}

