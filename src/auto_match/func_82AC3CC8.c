unsigned __int64 fn_82AC3CC8(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  
  uVar1 = *(unsigned int *)(param_2 * 0xc + param_1);
  if ((uVar1 & 0x8000) == 0) {
    if ((uVar1 & 0x4000) != 0) {
      return 0xffffffff80004005;
    }
    if ((uVar1 & 0x40) != 0) {
      return 0xffffffff80004005;
    }
    if (*(unsigned int *)(param_3 + 0x20) < (uVar1 >> 8 & 0x3f)) {
      return 0xffffffff80004005;
    }
    if ((uVar1 & 0x3f) <= *(unsigned int *)(param_3 + 0x20)) {
      return 0;
    }
    return 0xffffffff80004005;
  }
  if ((uVar1 & 0x40) != 0) {
    return 0xffffffff80004005;
  }
  if ((uVar1 & 0x3f00) != 0) {
    return 0xffffffff80004005;
  }
  uVar3 = uVar1 & 0x3f;
  if (uVar3 < 0x10) {
    if (*(unsigned int *)(param_3 + 0x8058) <= uVar3) {
      return 0xffffffff80004005;
    }
  }
  else if (uVar3 < 0x3d) {
    return 0xffffffff80004005;
  }
  if (uVar3 == 0x3d) {
    iVar5 = 0x805c;
  }
  else {
    if (uVar3 == 0x3e) {
      if (*(int *)(param_3 + 0x8060) == 0) {
        return 0xffffffff80004005;
      }
      goto LAB_82ac3d78;
    }
    if (uVar3 != 0x3f) goto LAB_82ac3d78;
    iVar5 = 0x8064;
  }
  if (*(int *)(param_3 + iVar5) == 0) {
    return 0xffffffff80004005;
  }
  uVar4 = 1;
  do {
    uVar2 = 1 << (uVar4 & 0x3f);
    if ((uVar1 >> 0x14 & uVar2 & 0xf) != 0) {
      return 0xffffffff80004005;
    }
    if ((uVar1 >> 0x10 & uVar2 & 0xf) != 0) {
      return 0xffffffff80004005;
    }
    if ((uVar1 & 0x4000) != 0) {
      return 0xffffffff80004005;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
LAB_82ac3d78:
  iVar5 = *param_4;
  if (0x3d < uVar3) {
    if ((param_4[iVar5 * 4 + 3] & 0x1000U) == 0) {
      return 0xffffffff80004005;
    }
    if (uVar3 == 0x3e) {
      param_4[iVar5 * 4 + 3] = param_4[iVar5 * 4 + 3] | 0x80;
    }
  }
  if (((uVar3 == 0x3d) || (uVar3 < 0x10)) && ((param_4[iVar5 * 4 + 3] & 0x400U) == 0)) {
    return 0xffffffff80004005;
  }
  return 0;
}

