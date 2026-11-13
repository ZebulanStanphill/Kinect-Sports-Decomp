extern int fn_82936290();


unsigned __int64
fn_82EF41B8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,char *param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  char acStack_20 [16];
  
  uVar2 = 0;
  acStack_20[0] = '\0';
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  if (param_4 != (unsigned int *)0x0) {
    if ((param_3 & 0xffffffff) == 0) {
      if ((param_2 & 0xffffffff) != 0) {
        return 0xffffffff80070057;
      }
    }
    else if ((param_2 & 0xffffffff) == 0) {
      return 0xffffffff80070057;
    }
    if (param_5 == (char *)0x0) {
      param_5 = acStack_20;
    }
    uVar3 = 0x7fffffff;
    uVar1 = 0;
    pcVar4 = param_5;
    do {
      if (*pcVar4 == '\0') break;
      uVar3 = uVar3 - 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 != 0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar1 = 0xffffffff80070057;
    }
    else {
      uVar2 = 0x7fffffff - uVar3;
    }
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar3 = uVar2 + 1;
    *param_4 = (int)uVar3;
    if ((param_2 & 0xffffffff) <= (uVar2 & 0xffffffff)) {
      return 0xffffffffc00d36b1;
    }
    if ((uVar3 & 0xffffffff) < 0x80000000) {
      uVar1 = fn_82936290(param_3,uVar3,param_5);
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

