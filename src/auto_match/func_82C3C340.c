int fn_82C3C340(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  
  if (((((param_2 & 0xffffffff) == 0) && (param_3 < 3)) || (3 < param_3)) ||
     (iVar1 = (int)param_1, iVar1 < 1)) {
    return 0;
  }
  if (iVar1 < 0x1f41) {
    iVar5 = 0x200;
LAB_82c3c400:
    if (param_3 == 3) {
      param_4 = param_4 & 6;
      if (param_4 == 2) {
        return iVar5 << 1;
      }
      if (param_4 != 4) {
        if (param_4 != 6) {
          return iVar5;
        }
        return iVar5 >> 2;
      }
      return iVar5 >> 1;
    }
    if (2 < param_3) {
      return iVar5;
    }
  }
  else {
    if (iVar1 < 0x2b12) {
      iVar5 = 0x200;
      goto LAB_82c3c400;
    }
    if (iVar1 < 0x3e81) {
      iVar5 = 0x200;
      goto LAB_82c3c400;
    }
    if (iVar1 < 0x5623) {
      iVar5 = 0x400;
      goto LAB_82c3c400;
    }
    if (32000 < iVar1) {
      if (iVar1 < 0xac45) {
        iVar5 = 0x800;
      }
      else {
        if (iVar1 < 0xbb81) goto LAB_82c3c3e0;
        iVar5 = 0x1000;
        if (96000 < iVar1) {
          iVar5 = 0x2000;
        }
      }
      goto LAB_82c3c400;
    }
    if (param_3 != 1) {
LAB_82c3c3e0:
      iVar5 = 0x800;
      goto LAB_82c3c400;
    }
    iVar5 = 0x400;
  }
  uVar2 = (__int64)iVar5 * (__int64)(int)param_2;
  lVar4 = (__int64)(iVar1 >> 1) + (unsigned __int64)(iVar1 < 0 && (param_1 & 1) != 0);
  trapWord(6,param_1,0);
  uVar3 = ((lVar4 + uVar2 & 0xffffffff) / (param_1 & 0xffffffff) + 7 & 0xffffffff) >> 3;
  if (uVar3 == 0) {
    if ((uVar2 & 0xffffffff) != 0) goto LAB_82c3c4b0;
    trapWord(6,param_1,0);
    uVar3 = (((__int64)iVar5 * (__int64)iVar1 + lVar4 & 0xffffffffU) / (param_1 & 0xffffffff) + 7
            & 0xffffffff) >> 3;
    param_2 = param_1;
  }
  if (1 < uVar3) {
    return iVar5;
  }
  if (uVar3 != 0) {
    return iVar5;
  }
LAB_82c3c4b0:
  do {
    iVar5 = iVar5 << 1;
    trapWord(6,param_1,0);
  } while ((((__int64)iVar5 * (__int64)(int)param_2 + lVar4 & 0xffffffffU) /
            (param_1 & 0xffffffff) + 7 & 0xfffffff8) == 0);
  return iVar5;
}

