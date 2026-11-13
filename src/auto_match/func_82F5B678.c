extern int fn_82630040();


unsigned int fn_82F5B678(unsigned int *param_1)

{
  __int64 lVar1;
  unsigned int uVar2;
  
  lVar1 = fn_82630040(0x50,8,1);
  *param_1 = (int)lVar1;
  if ((__int64)-(unsigned __int64)(lVar1 == 0) < 0) {
    uVar2 = 0x80004005;
  }
  else {
    lVar1 = fn_82630040(0x50,8,1);
    param_1[1] = (int)lVar1;
    uVar2 = (int)-(unsigned int)(lVar1 == 0) >> 0x1f & 0x80004005;
  }
  return uVar2;
}

