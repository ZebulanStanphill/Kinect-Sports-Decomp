unsigned __int64 fn_82A1BFB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar4;
  
  uVar2 = XamGetSystemVersion();
  if (uVar2 < 0x20096b00) {
    if ((param_1 & 0xffffffff) == 0xff) {
      uVar4 = 0;
      do {
        iVar3 = XamUserGetSigninState(uVar4);
        if (iVar3 == 1) goto LAB_82a1c010;
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < 4);
    }
    else {
      iVar3 = XamUserGetSigninState(param_1);
      if (iVar3 == 1) {
LAB_82a1c010:
        *param_3 = 0;
        return 0x4dd;
      }
    }
  }
  uVar1 = XamUserCheckPrivilege(param_1,param_2,param_3);
  return uVar1;
}

