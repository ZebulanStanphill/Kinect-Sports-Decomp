extern int fn_826AB1B8();
extern int fn_826AF6F8();
extern int fn_826C3768();


unsigned __int64 fn_826B0F10(__int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (*(unsigned char *)(param_2 + 4) < 7) {
    uVar3 = fn_826AF6F8(param_1 + 0x27c,param_3);
  }
  else {
    lVar1 = fn_826AB1B8();
    uVar3 = -(unsigned __int64)(lVar1 != 0) & lVar1 + 4U;
  }
  if ((uVar3 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    if ((param_4 & 0xffffffff) != 0) {
      fn_826C3768(param_4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

