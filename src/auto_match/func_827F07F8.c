unsigned __int64 fn_827F07F8(__int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = (unsigned __int64)*(unsigned short *)((int)param_1 + 0xe8);
  uVar2 = uVar1 - 1;
  if (-1 < (__int64)uVar2) {
    param_1 = (uVar1 + 0x27) * 4 + param_1;
    do {
      if (*(int *)param_1 == param_2) {
        return uVar2 & 0xffff;
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + -4;
    } while (-1 < (__int64)uVar2);
  }
  return 0xffffffffffffffff;
}

