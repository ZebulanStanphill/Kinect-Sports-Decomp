extern int fn_82A1DBD8();
extern int fn_82A1DC88();
extern int fn_82F68CC0();


void fn_82A1DD38(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  if ((param_3 & 0xffffffff) < 0x100) {
    fn_82F68CC0();
  }
  else if ((((param_1 & 0xffffffff) < 0xa0000000) || (0xfffffffe < (param_1 & 0xffffffff))) ||
          (uVar1 = MmQueryAddressProtect(param_1), (uVar1 >> 10 & 1) == 0)) {
    fn_82A1DC88(param_1,param_2,param_3);
  }
  else {
    fn_82A1DBD8(param_1,param_2,param_3);
  }
  return;
}

