extern int fn_8265C940();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_82A5F298(short *param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  if (((*param_1 == 0x165) || (*param_1 == 1)) ||
     (uVar2 = (unsigned __int64)(unsigned short)param_1[8] + 0x12, uVar2 < 0x28)) {
    uVar2 = 0x28;
  }
  lVar1 = fn_8265C940(uVar2,0x20970000);
  if (lVar1 != 0) {
    if (*param_1 == 0x165) {
      lVar3 = 0x20;
    }
    else if (*param_1 == 1) {
      lVar3 = 0x10;
    }
    else {
      lVar3 = (unsigned __int64)(unsigned short)param_1[8] + 0x12;
    }
    fn_82F68CC0(lVar1,param_1,lVar3);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar3 + lVar1,0,uVar2 - lVar3);
  }
  return 0;
}

