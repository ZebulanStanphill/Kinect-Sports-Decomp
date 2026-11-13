unsigned __int64 fn_82AC5698(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = *(unsigned int *)(*param_2 + 0x20);
  if ((param_1 < (unsigned int *)param_2[0x11]) ||
     ((unsigned int *)(param_2[0x12] + param_2[0x11]) < param_1 + uVar1)) {
    return 0xffffffff80004005;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = *param_1;
      if ((unsigned int)param_2[0x15] <= (uVar2 & 0xfff) << 1) {
        return 0xffffffff80004005;
      }
      if ((unsigned int)param_2[((uVar2 & 0xfff) + 0xb) * 2] >> 0x1e == 1) {
        return 0xffffffff80004005;
      }
      if ((unsigned int)param_2[((uVar2 & 0xfff) + 0xb) * 2] >> 0x1e == 3) {
        return 0xffffffff80004005;
      }
      if ((uVar3 == uVar1 - 1) && ((uVar2 & 0x1000) == 0)) {
        return 0xffffffff80004005;
      }
      uVar2 = *(unsigned int *)((uVar2 & 0xfff) * 0xc + param_2[1]);
      if ((uVar2 & 0x8000) == 0) {
        return 0xffffffff80004005;
      }
      if ((uVar2 & 0x40) != 0) {
        return 0xffffffff80004005;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

