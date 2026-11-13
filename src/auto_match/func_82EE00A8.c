extern int fn_82A28E60();
extern int fn_82A2A360();


void fn_82EE00A8(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  
  if ((param_1 & 0xffffffff) == 0) {
    return;
  }
  if ((param_1 - 4 & 0xffffffff) != 0) {
    uVar1 = fn_82A2A360();
    fn_82A28E60(uVar1,0,param_1 - 4);
  }
  return;
}

