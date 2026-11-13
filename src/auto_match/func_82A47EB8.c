extern int fn_82A1DDC0();
extern int fn_82A3FF60();
extern int fn_82A46138();
extern int fn_82A4F4E0();


unsigned __int64 fn_82A47EB8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  
  uVar2 = *(unsigned int *)(param_1 + 0x48);
  uVar3 = 0;
  uVar2 = fn_82A46138((double)((float)((double)(param_2 & 0xffffffff) / (double)uVar2) *
                                *(float *)(param_1 + 200)),
                        (((unsigned __int64)uVar2 & 0x7fffffff) << 1) / 0x177,param_2,
                        (~(unsigned __int64)*(unsigned int *)(param_1 + 0x3c) & 0xffffffff) >> 1 & 1,param_4,uVar2)
  ;
  if ((*(int *)(param_1 + 0x1e0) == 0) || (*(unsigned int *)(param_1 + 0x1e4) < uVar2)) {
    lVar1 = fn_82A3FF60(0xffffffff83219d50,
                              ((__int64)*(int *)(param_1 + 0x40) * (__int64)(int)uVar2 &
                              0x7fffffffU) << 1,0x20970002,0);
    if (lVar1 == 0) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      if (*(int *)(param_1 + 0x1e0) != 0) {
        fn_82A1DDC0(lVar1,*(int *)(param_1 + 0x1e0),
                          ((__int64)*(int *)(param_1 + 0x1e4) * (__int64)*(int *)(param_1 + 0x40)
                          & 0x7fffffffU) << 1);
        if (*(int *)(param_1 + 0x1e0) != 0) {
          fn_82A4F4E0();
          *(unsigned int *)(param_1 + 0x1e0) = 0;
        }
      }
      *(int *)(param_1 + 0x1e0) = (int)lVar1;
      *(unsigned int *)(param_1 + 0x1e4) = uVar2;
    }
  }
  return uVar3;
}

