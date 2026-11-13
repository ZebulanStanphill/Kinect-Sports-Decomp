extern int fn_82694D70();
extern int fn_826AB308();


unsigned __int64 fn_826AF6F8(unsigned __int64 param_1,int *param_2)

{
  __int64 lVar1;
  int *apiStack_20 [4];
  
  apiStack_20[0] = param_2;
  if (*(int *)(*param_2 + 4) == 0) {
    fn_82694D70();
  }
  lVar1 = fn_826AB308(param_1,apiStack_20);
  return -(unsigned __int64)(lVar1 != 0) & lVar1 + 4U;
}

