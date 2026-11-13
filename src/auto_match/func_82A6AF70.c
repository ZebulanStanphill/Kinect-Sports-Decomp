extern int fn_82A69210();
extern int fn_82A69598();
extern int fn_82A69B80();
extern int fn_82A6A810();
extern int fn_82A6AE80();
extern int fn_82C2C240();


void fn_82A6AF70(unsigned __int64 param_1)

{
  int iVar1;
  
  iVar1 = fn_82A69210();
  if ((((-1 < iVar1) && (iVar1 = fn_82A6A810(param_1), -1 < iVar1)) &&
      (iVar1 = fn_82A6AE80(param_1), -1 < iVar1)) &&
     ((iVar1 = fn_82A69598(param_1), -1 < iVar1 && (iVar1 = fn_82A69B80(param_1), -1 < iVar1))))
  {
    fn_82C2C240(param_1);
  }
  return;
}

