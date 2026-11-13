extern int fn_82711F20();


void fn_826D85F0(__int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  param_1 = param_2 * 0xc + param_1;
  uVar1 = param_2 & 0xffffffff;
  while (uVar1 != 0) {
    param_1 = param_1 + -0xc;
    fn_82711F20(param_1,0);
    param_2 = param_2 - 1;
    uVar1 = param_2;
  }
  return;
}

