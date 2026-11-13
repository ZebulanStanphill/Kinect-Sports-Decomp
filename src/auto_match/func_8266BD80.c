extern int fn_82A1F4F8();
extern int fn_82F69B70();
extern unsigned int uStack00000014;


unsigned __int64 fn_8266BD80(unsigned int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int uStack00000014;
  
  uStack00000014 = param_1;
  iVar2 = fn_82F69B70((unsigned __int64)param_1 + 0xc);
  if (iVar2 == 0) {
    thunk_FUN_82a2b748(0x139f);
    uVar1 = 0;
  }
  else {
    uVar3 = fn_82A1F4F8((unsigned __int64)uStack00000014 + 0xc);
    if (uVar3 == 0xffffffff) {
      uVar1 = 0;
    }
    else if ((uVar3 & 0x10) == 0) {
      thunk_FUN_82a2b748(0x7b);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

