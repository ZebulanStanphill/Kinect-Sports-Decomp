extern int fn_82CA3A98();
extern int fn_82CA3B20();
extern int fn_82CA3D88();
extern int fn_82CA3EE0();
extern int fn_82CA3F80();
extern int fn_82CA4078();
extern int fn_82CA4458();
extern int fn_82CA48A8();
extern int fn_82CA4970();
extern int fn_82CA4B10();
extern int fn_82CA4B98();
extern int fn_82CD9F48();


unsigned __int64 fn_82CA4C20(int param_1)

{
  short sVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int (**pcVar8)();
  
  iVar3 = *(int *)(param_1 + 0x3cc0);
  *(unsigned int *)(param_1 + 0x3d10) = 0;
  *(unsigned int *)(param_1 + 0x3e54) = 0;
  *(unsigned int *)(param_1 + 0x3e58) = 0;
  if ((iVar3 == 0) || (iVar3 == 3)) {
    *(unsigned int *)(param_1 + 0x3d14) = 0;
    return 0xfffffffffffffffb;
  }
  if (iVar3 == 0x32595559) {
    if (*(int *)(param_1 + 0xf8c) == 0) {
      *(unsigned int *)(param_1 + 0x3d14) = 1;
      *(int (***)())(param_1 + 0x3e40) = fn_82CA3B20;
      *(int (***)())(param_1 + 0x3e44) = fn_82CA4B10;
      *(int (***)())(param_1 + 0x3e48) = fn_82CA3D88;
      *(int (***)())(param_1 + 0x3e54) = fn_82CA4970;
    }
    else {
      *(unsigned int *)(param_1 + 0x3d14) = 1;
      *(int (***)())(param_1 + 0x3e40) = fn_82CA3A98;
      *(int (***)())(param_1 + 0x3e44) = fn_82CA4B98;
    }
  }
  else {
    if ((((iVar3 != 0x30323449) && (iVar3 != 0x56555949)) && (iVar3 != 0x32315659)) &&
       (iVar3 != 0x3231564e)) {
      return 0xfffffffffffffffb;
    }
    *(unsigned int *)(param_1 + 0x3d14) = 1;
    *(unsigned int *)(param_1 + 0x3d10) = 1;
    *(unsigned short *)(param_1 + 0x3cc4) = 8;
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x98) == 0) {
        pcVar8 = fn_82CA4078;
      }
      else if (*(int *)(param_1 + 0x5680) == 1) {
        pcVar8 = fn_82CA4458;
      }
      else {
        pcVar8 = fn_82CA4078;
      }
      *(int (***)())(param_1 + 0x3e4c) = pcVar8;
      if (*(int *)(param_1 + 0x5680) == 1) {
        pcVar8 = fn_82CA48A8;
      }
      else {
        pcVar8 = fn_82CA3F80;
      }
      *(int (***)())(param_1 + 0x3e50) = pcVar8;
      if (((iVar3 == 0x32315659) || (iVar3 == 0x30323449)) || (iVar3 == 0x3231564e)) {
        if ((*(int *)(param_1 + 0x98) == 0) || ((*(unsigned int *)(param_1 + 0x58) & 0x1f) != 0)) {
          pcVar8 = fn_82CA3EE0;
        }
        else {
          pcVar8 = fn_82CD9F48;
        }
        *(int (***)())(param_1 + 0x3e58) = pcVar8;
      }
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    sVar1 = *(short *)(param_1 + 0x3cc4);
    if (((sVar1 == 0xc) || (sVar1 == 4)) || (sVar1 == 0xf)) {
      *(unsigned short *)(param_1 + 0x3cc4) = 0x10;
    }
    uVar2 = *(unsigned short *)(param_1 + 0x3cc4);
    uVar4 = *(unsigned int *)(param_1 + 0x3cc8);
    *(unsigned int *)(param_1 + 0x3d4c) = 0;
    uVar6 = ((__int64)(int)uVar4 * (__int64)(int)(unsigned int)uVar2 & 0xffffffffU) >> 3;
    *(int *)(param_1 + 0x3d50) = (int)((unsigned int)uVar2 << 4) >> 3;
    iVar7 = (int)(uVar6 << 4);
    *(int *)(param_1 + 0x3d44) = (int)uVar6;
    *(int *)(param_1 + 0x3d54) = (int)((unsigned int)uVar2 << 3) >> 3;
    *(int *)(param_1 + 0x3d5c) = iVar7;
    *(int *)(param_1 + 0x3d60) = (int)(uVar6 << 3);
    if (*(int *)(param_1 + 0x3d10) == 1) {
      if (((uVar4 & 1) != 0) || (uVar5 = *(unsigned int *)(param_1 + 0x5c), (uVar5 & 1) != 0)) {
        return 0xfffffffffffffffb;
      }
      *(int *)(param_1 + 0x3d48) = (int)uVar6 >> 1;
      iVar7 = iVar7 >> 2;
      if (iVar3 != 0x32315659) {
        iVar3 = *(int *)(param_1 + 0x6070);
        if ((*(int *)(iVar3 + 0x2c8) != 0) && (*(int *)(iVar3 + 0x481c) != 0)) {
          *(unsigned int *)(param_1 + 0x3d18) = *(unsigned int *)(iVar3 + 0x90);
          *(int *)(param_1 + 0x3d1c) = *(int *)(iVar3 + 0x94) + *(int *)(iVar3 + 0x90);
          *(unsigned int *)(param_1 + 0x3d44) = *(unsigned int *)(iVar3 + 0x88);
          *(unsigned int *)(param_1 + 0x3d48) = *(unsigned int *)(iVar3 + 0x8c);
          *(int *)(param_1 + 0x3d64) = iVar7;
          return 0;
        }
        *(unsigned int *)(param_1 + 0x3d18) = uVar5 * uVar4;
        *(unsigned int *)(param_1 + 0x3d1c) = uVar5 * uVar4 * 5 >> 2;
        *(int *)(param_1 + 0x3d64) = iVar7;
        return 0;
      }
      *(unsigned int *)(param_1 + 0x3d1c) = uVar5 * uVar4;
      *(unsigned int *)(param_1 + 0x3d18) = uVar5 * uVar4 * 5 >> 2;
      *(int *)(param_1 + 0x3d64) = iVar7;
    }
  }
  return 0;
}

