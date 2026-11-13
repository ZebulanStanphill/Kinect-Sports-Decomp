extern int fn_82B161E8();


unsigned __int64 fn_82AF4AE0(int param_1,int *param_2,int param_3,__int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  piVar1 = param_2;
  if ((param_2[4] & 7U) != 0) {
    do {
      if (*piVar1 == param_3) break;
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < (param_2[4] & 7U));
  }
  if (uVar2 == (param_2[4] & 7U)) {
    if ((*(unsigned int *)(param_3 + 8) >> 0x1a & 1) != 0) {
      fn_82B161E8(param_1,param_3,*(unsigned int *)(param_1 + 0x294));
    }
    param_4 = ((unsigned __int64)(*(unsigned int *)(param_3 + 8) >> 0xe) & 7) - param_4;
    if (param_4 != 0) {
      piVar1 = param_2 + (uVar2 - 1);
      do {
        if (uVar2 == 4) {
          return 0;
        }
        piVar1 = piVar1 + 1;
        *piVar1 = param_3;
        uVar2 = uVar2 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    param_2[4] = param_2[4] & 0xfffffff8U | uVar2 & 7;
  }
  return 1;
}

