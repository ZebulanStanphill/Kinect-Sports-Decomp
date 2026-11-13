unsigned int fn_82E92218(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  uVar2 = (unsigned __int64)(unsigned int)param_1[1];
  uVar4 = (unsigned __int64)(unsigned int)param_1[7];
  if (uVar2 < (unsigned int)param_1[7]) {
    uVar4 = uVar2;
  }
  if (uVar4 <= (param_2 & 0xffffffff)) {
    return 0;
  }
  uVar4 = (unsigned __int64)(unsigned int)param_1[5];
  if ((unsigned __int64)(unsigned int)param_1[5] == 0) {
    uVar4 = uVar2;
  }
  if ((uVar4 - 1 & 0xffffffff) < (param_2 & 0xffffffff)) {
    lVar3 = uVar2 - param_2;
  }
  else {
    lVar3 = -param_2;
  }
  uVar4 = lVar3 + (uVar4 - 1);
  if (param_3 != (unsigned int *)0x0) {
    *(unsigned short *)param_3 = 0;
    *(unsigned char *)((int)param_3 + 2) = 0;
    if ((param_2 & 0xffffffff) != 0) {
      uVar1 = param_1[1];
      trapWord(6,(unsigned __int64)uVar1,0);
      uVar2 = (uVar4 + 1) -
              (__int64)(int)((uVar4 + 1 & 0xffffffff) / (unsigned __int64)uVar1) * (__int64)(int)uVar1;
      *param_3 = *(unsigned int *)
                  ((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 3) + *param_1 + 8);
    }
    if (1 < (param_2 & 0xffffffff)) {
      uVar1 = param_1[1];
      trapWord(6,(unsigned __int64)uVar1,0);
      uVar2 = (uVar4 + 2) -
              (__int64)(int)((uVar4 + 2 & 0xffffffff) / (unsigned __int64)uVar1) * (__int64)(int)uVar1;
      param_3[1] = *(unsigned int *)
                    ((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 3) + *param_1 + 0x10);
    }
    if (2 < (param_2 & 0xffffffff)) {
      uVar1 = param_1[1];
      trapWord(6,(unsigned __int64)uVar1,0);
      uVar2 = (uVar4 + 3) -
              (__int64)(int)((uVar4 + 3 & 0xffffffff) / (unsigned __int64)uVar1) * (__int64)(int)uVar1;
      param_3[2] = *(unsigned int *)
                    ((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 3) + *param_1 + 0x18);
    }
  }
  return *(unsigned int *)
          ((int)((uVar4 + (uVar4 & 0x3fffffff) * 4 & 0xffffffff) << 3) + *param_1 + 0x20);
}

