__int64 fn_828057C0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  lVar1 = 0;
  uVar2 = 0x80;
  do {
    if (*(unsigned short *)(param_1 + 0x1e) <= param_3) {
      return lVar1;
    }
    if (((param_2 & 0xff & uVar2) != 0) && ((param_2 & 0xff & uVar2 >> 3) == 0)) {
      lVar1 = lVar1 + 1;
    }
    uVar2 = uVar2 >> 1;
    param_3 = param_3 + 1;
  } while (uVar2 != 0x10);
  return lVar1;
}

