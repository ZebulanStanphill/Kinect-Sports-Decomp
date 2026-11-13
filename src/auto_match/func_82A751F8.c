int fn_82A751F8(unsigned int param_1,unsigned int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  
  if ((((param_2 == 0) && (param_3 < 3)) || (3 < param_3)) || ((int)param_1 < 1)) {
    return 0;
  }
  if ((int)param_1 < 0x1f41) {
    iVar3 = 0x200;
LAB_82a752b8:
    if (param_3 == 3) {
      param_4 = param_4 & 6;
      if (param_4 == 2) {
        return iVar3 << 1;
      }
      if (param_4 != 4) {
        if (param_4 != 6) {
          return iVar3;
        }
        return iVar3 >> 2;
      }
      return iVar3 >> 1;
    }
    if (2 < param_3) {
      return iVar3;
    }
  }
  else {
    if ((int)param_1 < 0x2b12) {
      iVar3 = 0x200;
      goto LAB_82a752b8;
    }
    if ((int)param_1 < 0x3e81) {
      iVar3 = 0x200;
      goto LAB_82a752b8;
    }
    if ((int)param_1 < 0x5623) {
      iVar3 = 0x400;
      goto LAB_82a752b8;
    }
    if (32000 < (int)param_1) {
      if ((int)param_1 < 0xac45) {
        iVar3 = 0x800;
      }
      else {
        if ((int)param_1 < 0xbb81) goto LAB_82a75298;
        iVar3 = 0x1000;
        if (96000 < (int)param_1) {
          iVar3 = 0x2000;
        }
      }
      goto LAB_82a752b8;
    }
    if (param_3 != 1) {
LAB_82a75298:
      iVar3 = 0x800;
      goto LAB_82a752b8;
    }
    iVar3 = 0x400;
  }
  lVar2 = (__int64)((int)param_1 >> 1) + (unsigned __int64)((int)param_1 < 0 && (param_1 & 1) != 0);
  uVar1 = ((lVar2 + (__int64)iVar3 * (__int64)(int)param_2 & 0xffffffffU) / (unsigned __int64)param_1 + 7
          & 0xffffffff) >> 3;
  if (uVar1 == 0) {
    if (((__int64)iVar3 * (__int64)(int)param_2 & 0xffffffffU) != 0) goto LAB_82a75360;
    uVar1 = (((__int64)iVar3 * (__int64)(int)param_1 + lVar2 & 0xffffffffU) / (unsigned __int64)param_1 +
             7 & 0xffffffff) >> 3;
    param_2 = param_1;
  }
  if (1 < uVar1) {
    return iVar3;
  }
  if (uVar1 != 0) {
    return iVar3;
  }
LAB_82a75360:
  do {
    iVar3 = iVar3 << 1;
  } while ((((__int64)iVar3 * (__int64)(int)param_2 + lVar2 & 0xffffffffU) / (unsigned __int64)param_1 +
            7 & 0xfffffff8) == 0);
  return iVar3;
}

