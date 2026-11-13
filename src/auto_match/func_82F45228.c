typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82BA02A8();
extern int fn_82EDF428();


unsigned __int64 fn_82F45228(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  bool bVar5;
  
  iVar2 = param_1[1];
  iVar3 = *(int *)(iVar2 + 0x10);
  if ((iVar3 == 0) || (bVar5 = false, iVar3 == 3)) {
    bVar5 = true;
  }
  uVar4 = *(unsigned int *)(*param_1 + 0x10);
  if (uVar4 < 0x3231565a) {
    if ((uVar4 != 0x32315659) && (uVar4 != 0x30323449)) {
      if (uVar4 != 0x31313450) {
        return 3;
      }
      if (!bVar5) {
        if (iVar3 == 0x3131564e) {
          param_1[0xe5e] = (int)fn_82BA02A8;
          return 0;
        }
        if (iVar3 == 0x55595659) {
          param_1[0xe5f] = (int)fn_82BA02A8;
          return 0;
        }
        if (iVar3 == 0x59565955) {
          param_1[0xe5f] = (int)fn_82BA02A8;
          return 0;
        }
        if (iVar3 != 0x32595559) {
          if (((iVar3 != 0x56555949) && (iVar3 != 0x30323449)) && (iVar3 != 0x32315659)) {
            return 5;
          }
          if (param_1[0xe4f] == 2) {
            return 5;
          }
          param_1[0xe5e] = (int)fn_82BA02A8;
          return 0;
        }
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      sVar1 = *(short *)(iVar2 + 0xe);
      if (sVar1 == 0x20) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 == 0x18) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 == 0x10) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      if (sVar1 != 8) {
        return 5;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
  }
  else if (uVar4 != 0x56555949) {
    return 3;
  }
  if (bVar5) {
    sVar1 = *(short *)(iVar2 + 0xe);
    if (sVar1 == 0x20) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (sVar1 == 0x18) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (sVar1 == 0x10) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (sVar1 == 8) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
  }
  else {
    if (iVar3 == 0x55595659) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (iVar3 == 0x59565955) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (iVar3 == 0x32595559) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (iVar3 == 0x41595556) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
      param_1[0xe5f] = (int)fn_82BA02A8;
      return 0;
    }
    if (iVar3 == 0x56343130) {
      if (param_1[0xe4f] != 2) {
        param_1[0xe5f] = (int)fn_82BA02A8;
        return 0;
      }
    }
    else {
      if (iVar3 == 0x3231564e) {
        param_1[0xe5e] = (int)fn_82BA02A8;
        return 0;
      }
      if (iVar3 == 0x3131564e) {
        if (param_1[0xe4f] != 2) {
          param_1[0xe5e] = (int)fn_82BA02A8;
          return 0;
        }
        param_1[0xe5e] = (int)fn_82BA02A8;
        return 0;
      }
      if (((iVar3 == 0x30323449) || (iVar3 == 0x56555949)) || (iVar3 == 0x32315659)) {
        param_1[0xe5e] = (int)fn_82EDF428;
        return 0;
      }
    }
  }
  return 5;
}

