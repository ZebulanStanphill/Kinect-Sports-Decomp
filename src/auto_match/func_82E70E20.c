extern int fn_82E6F9C0();


unsigned __int64
fn_82E70E20(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int *param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5c);
  trapDoubleWordImmediate(6,uVar2,0);
  if (param_2 == (param_2 / uVar2) * uVar2) {
    if ((param_4 == 0) || (param_5 == (unsigned int *)0x0)) {
      uVar1 = 0xffffffff80004003;
    }
    else {
      *param_5 = 0;
      if (*(int *)(param_4 + 2) != 0) {
        if (*(int *)(param_4 + 7) == 0) {
          *(unsigned __int64 *)(param_1 + 0x40) = param_2;
          *(unsigned short *)(param_1 + 0x60) = 1;
          *param_5 = 1;
        }
        else {
          if (param_2 != *(unsigned __int64 *)(param_1 + 0x68)) {
            *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
          }
          if (*(int *)(param_4 + 0x1b) + *(int *)(param_4 + 7) == *(int *)(param_4 + 0xb)) {
            trapDoubleWordImmediate(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x5c),0);
            fn_82E6F9C0(param_1,*(unsigned __int64 *)(param_1 + 0x40) /
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0x5c) & 0xffffffff,
                          *(unsigned short *)(param_1 + 0x60));
          }
        }
        *(unsigned __int64 *)(param_1 + 0x68) = param_2;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

