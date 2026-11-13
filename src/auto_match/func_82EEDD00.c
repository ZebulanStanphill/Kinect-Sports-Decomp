extern int fn_82EEDC00();


unsigned __int64 fn_82EEDD00(__int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  *param_3 = 0;
  iVar1 = fn_82EEDC00(param_1 + 8);
  if ((iVar1 == 0) || (*param_3 == 0)) {
    uVar2 = 0xffffffff8000ffff;
  }
  return uVar2;
}

