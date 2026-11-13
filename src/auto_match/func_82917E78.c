extern int fn_82917A68();


unsigned __int64 fn_82917E78(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  
  if (((param_3 & 0xffffffff) == 0) && (param_4 == (unsigned int *)0x0)) {
    uVar1 = 0xffffffff8876086c;
  }
  else {
    uVar2 = 0;
    uVar4 = 1;
    param_2 = ~param_2;
    for (uVar3 = param_2; uVar3 != 0; uVar3 = (unsigned __int64)*(unsigned int *)((int)uVar3 + 0x24)) {
      uVar2 = uVar2 + 1;
    }
    if (param_4 != (unsigned int *)0x0) {
      uVar4 = *param_4;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      *param_4 = uVar2;
    }
    if ((param_3 & 0xffffffff) != 0) {
      for (; ((param_2 & 0xffffffff) != 0 && (uVar4 != 0)); uVar4 = uVar4 - 1) {
        uVar1 = fn_82917A68(param_2,param_3);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        param_2 = (unsigned __int64)*(unsigned int *)((int)param_2 + 0x24);
        param_3 = param_3 + 0x30;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

