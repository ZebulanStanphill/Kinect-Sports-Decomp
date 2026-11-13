extern int fn_823AB470();


unsigned char   fn_82512508(unsigned int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if (((param_1 & 0xffffffff) == 0) ||
     ((iVar1 = fn_823AB470(), iVar1 != 2 && (iVar1 = fn_823AB470(param_1), iVar1 != 1)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

