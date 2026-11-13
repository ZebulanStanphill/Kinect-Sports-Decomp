extern int fn_82A1BB18();


unsigned __int64 fn_82812268(unsigned __int64 *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 != 0) && (uVar1 = fn_82A1BB18(), (uVar2 & 0xffffffff) == (uVar1 & 0xffffffff))) {
    return 1;
  }
  return 0;
}

