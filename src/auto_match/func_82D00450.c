extern int fn_82D001D8();


unsigned __int64 fn_82D00450(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82D001D8();
  if (iVar1 <= param_1[2]) {
    param_3 = (unsigned __int64)*(unsigned int *)(((param_1[2] + 1) * 2 + iVar1) * 4 + *param_1);
  }
  return param_3;
}

