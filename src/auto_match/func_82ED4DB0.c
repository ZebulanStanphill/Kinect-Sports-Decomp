unsigned __int64 fn_82ED4DB0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int (**param_4)())

{
  int iVar1;
  
  iVar1 = (*param_4)();
  if (iVar1 < 0) {
    iVar1 = (*param_4)(param_2,param_3);
    if (iVar1 < 0) {
      return param_2;
    }
    iVar1 = (*param_4)(param_1,param_3);
    if (iVar1 < 0) {
      return param_3;
    }
  }
  else {
    iVar1 = (*param_4)(param_2,param_3);
    if (0 < iVar1) {
      return param_2;
    }
    iVar1 = (*param_4)(param_1,param_3);
    if (0 < iVar1) {
      return param_3;
    }
  }
  return param_1;
}

