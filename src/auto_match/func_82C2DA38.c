extern int fn_82C2B878();
extern int fn_82C2BC00();
extern int fn_82C2C1E8();
extern int fn_82C2C240();
extern int fn_82C2D3F8();
extern int fn_82C2D948();


void fn_82C2DA38(unsigned __int64 param_1)

{
  int iVar1;
  
  iVar1 = fn_82C2B878();
  if ((((-1 < iVar1) && (iVar1 = fn_82C2D3F8(param_1), -1 < iVar1)) &&
      (iVar1 = fn_82C2D948(param_1), -1 < iVar1)) &&
     ((iVar1 = fn_82C2BC00(param_1), -1 < iVar1 && (iVar1 = fn_82C2C1E8(param_1), -1 < iVar1))))
  {
    fn_82C2C240(param_1);
  }
  return;
}

