extern int fn_82EDFFE8();
extern int fn_82F64CE0();


void fn_82EE0060(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  
  if ((param_1 & 0xffffffff) != 0) {
    uVar1 = fn_82F64CE0(param_1);
    fn_82EDFFE8(param_1,uVar1);
  }
  return;
}

