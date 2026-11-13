extern __int64 fn_82ADD448();


__int64 fn_82ADDA58(int *param_1)

{
  __int64 lVar1;
  unsigned int uVar2;
  
  lVar1 = fn_82ADD448(param_1 + 2);
  uVar2 = *(unsigned int *)(*param_1 + 0x318);
  if (uVar2 == 0) {
    uVar2 = 0x20;
  }
  return ((unsigned __int64)uVar2 & 0x3fffffff) * 4 + lVar1 + -0x100;
}

