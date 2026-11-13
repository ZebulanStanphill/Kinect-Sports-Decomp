extern int fn_82694D70();
extern int fn_826BFFB0();


void fn_826C06A0(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  int *apiStack_20 [2];
  
  apiStack_20[0] = param_2;
  if (*(int *)(*param_2 + 4) == 0) {
    fn_82694D70();
  }
  fn_826BFFB0(param_1,apiStack_20,param_3);
  return;
}

