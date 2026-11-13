extern int fn_82694D70();
extern int fn_826BF258();


unsigned __int64 fn_826AF758(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int *apiStack_20 [2];
  
  apiStack_20[0] = param_3;
  if (*(int *)(*param_3 + 4) == 0) {
    fn_82694D70();
  }
  fn_826BF258(param_1,param_2,apiStack_20);
  return param_1;
}

