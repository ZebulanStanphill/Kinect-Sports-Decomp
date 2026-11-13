extern unsigned int *auStack_70;
extern int fn_8280F098();
extern int fn_8280FAD0();


void fn_8280FBD0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned char auStack_70 [64];
  
  fn_8280FAD0(param_1,param_2,auStack_70);
  fn_8280F098(auStack_70,param_3,param_4,param_5,param_6);
  return;
}

