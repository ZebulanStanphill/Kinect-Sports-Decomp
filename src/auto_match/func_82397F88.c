extern int fn_82397FE0();


unsigned __int64 fn_82397F88(unsigned __int64 param_1)

{
  int iVar1;
  
  iVar1 = fn_82397FE0(param_1,0);
  if ((iVar1 != 0) && (iVar1 = fn_82397FE0(param_1,1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

