extern int fn_82F6A080();
extern unsigned int uStack00000014;


unsigned __int64 fn_8266BF60(unsigned int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uStack00000014;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uStack00000014 = param_1;
    iVar2 = fn_82F6A080((unsigned __int64)param_1 + 4,0xffffffff820027f4,8);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

