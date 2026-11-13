unsigned __int64 fn_828184A8(int param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  if ((int)param_2 != 0) {
    do {
      uVar3 = (__int64)*(char *)(iVar2 + param_1) + (uVar3 & 0xfffffff) * 0x10;
      uVar1 = uVar3 & 0xf0000000;
      if (uVar1 != 0) {
        uVar3 = (uVar1 >> 0x18 | uVar1) ^ uVar3;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar3;
}

