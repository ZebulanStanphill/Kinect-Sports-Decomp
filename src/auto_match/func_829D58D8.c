unsigned __int64 fn_829D58D8(int *param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  
  uVar2 = (unsigned int)param_4;
  uVar1 = 0xfffffffffffffffe;
  if ((param_5 & 0x20) == 0) {
    param_4 = (unsigned __int64)(unsigned int)param_1[param_3 * 0x54 + 0x80];
    if (7 < param_4) goto LAB_829d59d0;
  }
  else {
    *(int *)(param_2 + 0x54) = param_1[param_3 * 0x54 + 0x80];
    uVar3 = param_1[param_3 * 0x54 + 0x80];
    if (uVar3 < 8) {
      param_1[uVar3 * 6] = 1;
      if ((uVar2 < 8) && (param_1[uVar2 * 6 + 2] != 0)) {
        (param_1 + uVar3 * 6)[2] = 0;
        *(unsigned char *)((int)param_1 + 0x24975) = 1;
      }
    }
    uVar1 = param_4;
    if (uVar2 == 0xfffffffe) goto LAB_829d59d0;
    if (param_1[uVar2 * 6] == 2) {
      uVar3 = 0;
      piVar5 = param_1 + 0x30;
      do {
        if (piVar5[0x50] == uVar2) {
          piVar5[0x50] = -1;
          (param_1 + uVar2 * 6)[2] = 0;
          *(unsigned char *)((int)param_1 + 0x24975) = 1;
          break;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 0x54;
      } while (uVar3 < 6);
    }
    param_1[uVar2 * 6] = 3;
  }
  uVar1 = param_4;
  if ((int)param_4 != -2) {
    return param_4;
  }
LAB_829d59d0:
  uVar4 = 0;
  do {
    if (*param_1 == 0) {
      *param_1 = 3;
      return uVar4;
    }
    uVar4 = uVar4 + 1;
    param_1 = param_1 + 6;
  } while ((uVar4 & 0xffffffff) < 8);
  return uVar1;
}

