extern int fn_82797D20();
extern int fn_827A2850();


void fn_827A2950(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = param_3;
    if ((param_3 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar1 = param_2;
      param_2 = param_3;
    }
    fn_827A2850(param_1,param_2,uVar1);
    if ((*(unsigned short *)(param_1 + 0x68) & 1) == 0) {
      fn_82797D20(*(unsigned int *)(*(int *)(param_1 + 8) + 8),param_2,
                        -(unsigned __int64)(param_2 <= uVar1) & uVar1 - param_2);
    }
  }
  return;
}

