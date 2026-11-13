extern unsigned int *auStack_20;
extern int fn_82A28568();
extern int fn_82A2A360();
extern int fn_82EE9F80();
extern int fn_82EEA950();


unsigned __int64 fn_82EEAA60(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int auStack_20 [2];
  
  auStack_20[0] = 0;
  uVar1 = fn_82A2A360();
  uVar2 = fn_82A28568(uVar1,0,0x74);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    uVar3 = fn_82EEA950(uVar2,auStack_20);
    uVar2 = (unsigned __int64)auStack_20[0];
    if ((int)auStack_20[0] < 0) {
      fn_82EE9F80();
    }
    else {
      *param_2 = uVar3;
      uVar2 = 0;
    }
  }
  return uVar2;
}

