extern int fn_82A28568();
extern int fn_82A2A360();
extern int fn_82E44260();
extern int fn_82F68CC0();


unsigned __int64 fn_82E44DA0(unsigned int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x8000000) != 0) {
    return 0xffffffff8007000e;
  }
  if ((int)param_1[2] < (int)param_2 + 1) {
    if ((uVar1 & 0x30000000) != 0x20000000) {
      uVar4 = (unsigned __int64)(uVar1 >> 0x13) & 0xc0;
      if ((uVar1 & 0x80000000) == 0) {
        uVar4 = 0;
      }
      uVar4 = uVar4 + param_2 + 1;
      if ((uVar4 & 0xffffffff) < 0x4000001) {
        uVar2 = fn_82A2A360();
        lVar3 = fn_82A28568(uVar2,0,(uVar4 & 0x7fffffff) << 1);
        if (lVar3 == 0) {
          param_1[1] = 0;
          *param_1 = *param_1 | 0x8000000;
          return 0xffffffff8007000e;
        }
        if (param_1[3] != 0) {
          fn_82F68CC0(lVar3,param_1[3],param_1[1] << 1);
          fn_82E44260(param_1);
          *param_1 = *param_1 & 0xbfffffff;
        }
        param_1[3] = (unsigned int)lVar3;
        param_1[2] = (unsigned int)uVar4;
        goto LAB_82e44eb0;
      }
    }
    *param_1 = uVar1 | 0x8000000;
    uVar2 = 0xffffffff8007000e;
  }
  else {
LAB_82e44eb0:
    uVar2 = 0;
  }
  return uVar2;
}

