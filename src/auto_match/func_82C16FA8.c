typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C16F10();


unsigned __int64 fn_82C16FA8(short *param_1,unsigned int *param_2,unsigned short *param_3)

{
  short sVar1;
  unsigned int uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned short uVar9;
  
  uVar9 = 0;
  if (param_1 == (short *)0x0) {
    return 0xffffffff80070057;
  }
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  sVar1 = *param_1;
  if (((sVar1 == 0x160) || (sVar1 == 0x161)) || (bVar3 = false, sVar1 == 0x165)) {
    bVar3 = true;
  }
  if ((sVar1 == 0x162) || (bVar4 = false, sVar1 == 0x166)) {
    bVar4 = true;
  }
  if ((sVar1 == 0x163) || (bVar5 = false, sVar1 == 0x167)) {
    bVar5 = true;
  }
  if ((bVar3) || (bVar4)) {
    if (!bVar5) goto LAB_82c1705c;
  }
  else if (!bVar5) {
    return 0xffffffff80040000;
  }
  if (*(unsigned int *)(param_1 + 2) != *param_2) {
    return 0xffffffff80040000;
  }
LAB_82c1705c:
  if (bVar3) {
    if (48000 < *(unsigned int *)(param_1 + 2)) {
      return 0xffffffff80040000;
    }
    uVar8 = (unsigned __int64)(unsigned short)param_1[1];
    if (2 < uVar8) {
      return 0xffffffff80040000;
    }
    if (param_1[7] != 0x10) {
      return 0xffffffff80040000;
    }
  }
  else {
    uVar8 = (unsigned __int64)(unsigned short)param_1[1];
    if (0x20 < uVar8) {
      return 0xffffffff80040000;
    }
  }
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 2);
  if ((uVar7 != 0) && (uVar8 != 0)) {
    uVar6 = fn_82C16F10(param_2);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    sVar1 = param_1[7];
    if ((((sVar1 == 0x10) || (sVar1 == 0x14)) || (sVar1 == 0x18)) || (sVar1 == 0x20)) {
      if (((*(unsigned int *)(param_1 + 4) & 0x80000000) != 0) || (param_1[6] == 0)) {
        return 0xffffffff80070057;
      }
      if ((((param_2[2] == *(unsigned int *)(param_1 + 8)) || ((!bVar3 && ((param_2[1] == 2 || (!bVar5))))))
          && ((uVar2 = param_2[1], (unsigned __int64)uVar2 == (uVar8 & 0xffffffff) || (!bVar3)))) &&
         (((!bVar5 || ((unsigned __int64)uVar2 == (uVar8 & 0xffffffff))) || (uVar2 == 2)))) {
        if (param_3 != (unsigned short *)0x0) {
          if ((short)param_3[0xc] < 0) {
            return 0xffffffff80040000;
          }
          if (2 < (short)param_3[0xc]) {
            return 0xffffffff80040000;
          }
          uVar9 = *param_3;
        }
        uVar2 = *param_2;
        if (((!bVar5) ||
            ((((uVar7 & 0xffffffff) == (unsigned __int64)uVar2 && ((uVar9 & 8) == 0)) && ((uVar9 & 2) == 0)
             ))) && ((!bVar4 ||
                     ((((uVar9 & 8) == 0 && ((unsigned __int64)uVar2 <= (uVar7 & 0xffffffff))) &&
                      ((uVar7 & 0xffffffff) <= ((unsigned __int64)uVar2 & 0x7fffffff) << 1)))))) {
          if (!bVar3) {
            return uVar6;
          }
          if ((uVar7 & 0xffffffff) <= ((unsigned __int64)uVar2 & 0x3fffffff) << 2) {
            if ((uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x7fffffff) << 1 < (unsigned __int64)uVar2) {
              return 0xffffffff80040000;
            }
            return uVar6;
          }
        }
      }
    }
  }
  return 0xffffffff80040000;
}

