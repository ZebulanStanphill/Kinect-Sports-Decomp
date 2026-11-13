unsigned __int64 fn_82E41FA8(int param_1,unsigned int param_2,int *param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  
  uVar3 = 0;
  uVar1 = 0;
  if (param_3 == (int *)0x0) {
    return 0xffffffff80004003;
  }
  param_2 = param_2 & 0xffff;
  if (param_2 == 0x80) {
    *param_3 = 0;
    uVar2 = 0;
    param_3[1] = 0;
    uVar5 = *(unsigned int *)(param_1 + 0x2ac);
    if (uVar5 == 0) {
      return uVar1;
    }
    piVar4 = (int *)(param_1 + 0x2b0);
    do {
      if (*piVar4 != 0) {
        uVar3 = uVar3 + 1;
        param_3[1] = *(int *)(*piVar4 + 4) + param_3[1];
        *param_3 = *(int *)*piVar4 + *param_3;
        uVar5 = *(unsigned int *)(param_1 + 0x2ac);
        if (uVar3 == uVar5) {
          return uVar1;
        }
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar2 < uVar5);
    return uVar1;
  }
  if (param_2 < 0x80) {
    piVar4 = *(int **)((param_2 + 0xac) * 4 + param_1);
    if (piVar4 != (int *)0x0) {
      *param_3 = *piVar4;
      param_3[1] = piVar4[1];
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

