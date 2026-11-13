extern int fn_82CE2AE0();
extern int fn_82CE3410();


__int64 fn_82CE2100(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  __int64 lVar1;
  int aiStack_50 [20];
  
  aiStack_50[0] = 0;
  if (param_2 < 0x440) {
    if (param_1 != 0) {
      return -0x7ff8ff86;
    }
    lVar1 = XamAlloc(0,0x440,aiStack_50);
    param_1 = aiStack_50[0];
    if (lVar1 < 0) goto LAB_82ce21b8;
  }
  lVar1 = fn_82CE2AE0(param_1,0xffffffff8323a8f0,param_3,param_5,param_6,param_7,*param_8,
                            (~param_4 & 0xffffffff) >> 2 & 1);
  if ((-1 < lVar1) && (lVar1 = fn_82CE3410(param_1), -1 < lVar1)) {
    *param_8 = *(unsigned int *)(param_1 + 0x14);
  }
LAB_82ce21b8:
  if (aiStack_50[0] != 0) {
    XamFree();
  }
  return lVar1;
}

