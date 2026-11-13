extern unsigned int *auStack_20;
extern int fn_8284D780();
extern int fn_828509F0();


void fn_82850CB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int auStack_20 [2];
  
  fn_8284D780(param_1,auStack_20);
  fn_828509F0(auStack_20[0],param_2,param_3);
  return;
}

