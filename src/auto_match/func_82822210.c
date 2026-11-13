extern int fn_82814D10();
extern int fn_82821EB0();
extern int fn_82822020();
extern int fn_82822080();


void fn_82822210(unsigned __int64 param_1)

{
  int iVar1;
  
  fn_82822080();
  iVar1 = fn_82814D10();
  if (iVar1 != 0) {
    fn_82821EB0(param_1);
  }
  fn_82822020(param_1);
  return;
}

