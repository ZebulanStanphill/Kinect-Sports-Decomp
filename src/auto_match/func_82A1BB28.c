extern int fn_82A368C8();


unsigned __int64
fn_82A1BB28(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 1) {
    return 0xffffffff80004005;
  }
  if (param_5 == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = fn_82A368C8(param_1);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        return 0xffffffff8007000e;
      }
      if ((iVar1 != 6) && (iVar1 != 7)) {
        return 0xffffffff80004005;
      }
      return 0xffffffff81de2001;
    }
  }
  return 0;
}

