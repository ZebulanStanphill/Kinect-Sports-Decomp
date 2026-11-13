extern int fn_8280E6C0();
extern int fn_8281E9C8();


unsigned __int64 fn_8281E358(unsigned __int64 param_1)

{
  int iVar1;
  
  iVar1 = fn_8281E9C8();
  if ((iVar1 != 0) && (iVar1 = fn_8280E6C0(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

