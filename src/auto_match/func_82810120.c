extern unsigned int *auStack_50;
extern int fn_8280E890();
extern int fn_8280F098();


void fn_82810120(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_50 [64];
  
  fn_8280E890(param_1,auStack_50);
  fn_8280F098(auStack_50,param_2);
  return;
}

