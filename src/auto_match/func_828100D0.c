extern unsigned int *auStack_50;
extern int fn_8280E890();
extern int fn_8280F098();


void fn_828100D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned char auStack_50 [32];
  
  fn_8280E890(param_1,auStack_50);
  fn_8280F098(auStack_50,param_5,param_2,param_3,param_4);
  return;
}

