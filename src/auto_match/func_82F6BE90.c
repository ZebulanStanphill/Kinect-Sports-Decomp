extern int __iob_func();
extern int fn_82F6AC80();
extern int fn_82F6BC30();
extern int fn_82F6BCB0();
extern int fn_82F6BF4C();
extern unsigned int uStack00000014;


unsigned __int64 fn_82F6BE90(unsigned __int64 param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uStack00000014;
  
  uStack00000014 = (unsigned int)param_1;
  lVar1 = __iob_func();
  if (((param_1 & 0xffffffff) == (lVar1 + 0x20U & 0xffffffff)) ||
     (lVar1 = __iob_func(), (param_1 & 0xffffffff) == (lVar1 + 0x40U & 0xffffffff))) {
    uVar2 = 0;
  }
  else if ((param_1 & 0xffffffff) == 0) {
    uVar2 = fn_82F6BCB0(0);
  }
  else {
    fn_82F6AC80(param_1);
    uVar3 = fn_82F6BC30(param_1);
    fn_82F6BF4C();
    uVar2 = (unsigned __int64)uVar3;
  }
  return uVar2;
}

