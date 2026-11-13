extern int fn_82AA66A8();
extern int fn_82ACB098();
extern int fn_82ACB0F8();


unsigned __int64 fn_82B89410(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  char cVar3;
  unsigned __int64 uVar2;
  
  cVar3 = fn_82ACB098(param_2);
  if (cVar3 == '\0') goto LAB_82b89438;
  uVar1 = param_3 & 3;
  if (uVar1 == 0) {
    cVar3 = fn_82ACB098(param_3 & 0xfffffffc);
    if ((cVar3 != '\0') && ((param_3 & 0xfffffffc) != (param_2 & 0xffffffff))) {
LAB_82b894b4:
      uVar2 = fn_82ACB0F8(param_2,param_3 & 0xfffffffc);
      return uVar2;
    }
LAB_82b89468:
    uVar2 = 0;
  }
  else {
    if (uVar1 == 1) {
      cVar3 = fn_82ACB098(param_3 & 0xfffffffc);
      if (cVar3 == '\0') goto LAB_82b89468;
      if ((param_3 & 0xfffffffc) != (param_2 & 0xffffffff)) goto LAB_82b894b4;
    }
    else {
      if (uVar1 < 3) goto LAB_82b89468;
      if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
LAB_82b89438:
    uVar2 = 1;
  }
  return uVar2;
}

