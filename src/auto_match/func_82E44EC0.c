extern int fn_82E44D20();
extern int fn_82E44DA0();
extern int fn_82F68CC0();


unsigned __int64 fn_82E44EC0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if ((*param_1 & 0x8000000) == 0) {
    if ((param_3 & 0xffffffff) < 0x4000001) {
      iVar2 = fn_82E44DA0(param_1,param_3 + param_1[1]);
      if (iVar2 < 0) {
        uVar1 = -(unsigned __int64)((*param_1 & 0x8000000) != 0) & 0xffffffff8007000e;
      }
      else {
        fn_82F68CC0((unsigned __int64)param_1[3] + ((unsigned __int64)param_1[1] & 0x7fffffff) * 2,param_2,
                     (param_3 & 0x7fffffff) << 1);
        fn_82E44D20(param_1,param_3 + param_1[1]);
        uVar1 = 0;
      }
    }
    else {
      *param_1 = *param_1 | 0x8000000;
      uVar1 = 0xffffffff8007000e;
    }
  }
  else {
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

