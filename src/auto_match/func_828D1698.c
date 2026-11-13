extern int fn_82230360();
extern int fn_8224BE90();
extern int fn_823AA970();
extern int fn_8288A398();
extern int fn_828E9D50();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA180();


__int64 fn_828D1698(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned char uVar7;
  char *pcVar8;
  char acStack_130 [256];
  
  iVar4 = fn_828E9DA8(param_2);
  iVar5 = fn_828E9D90(param_2);
  if (iVar4 - iVar5 < 0x10) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_828E9FF8(param_2,0x10);
  }
  *(unsigned int *)(param_1 + 0x84) = uVar6;
  iVar4 = fn_8288A398();
  if (*(int *)(param_1 + 0x84) == *(int *)(iVar4 + 0x38)) {
    *(unsigned char *)(param_1 + 0x80) = 1;
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (0x3f < iVar4 - iVar5) {
      fn_828EA180(param_2,param_1 + 0x98,8);
    }
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if ((iVar4 - iVar5 < 1) || (iVar4 = fn_828E9FF8(param_2,1), iVar4 == 0)) {
      *(unsigned int *)(param_1 + 0x88) = 1;
    }
    else {
      iVar4 = fn_828E9DA8(param_2);
      iVar5 = fn_828E9D90(param_2);
      if (iVar4 - iVar5 < 2) {
        *(unsigned int *)(param_1 + 0x88) = 1;
      }
      else {
        iVar4 = fn_828E9FF8(param_2,2);
        *(int *)(param_1 + 0x88) = iVar4 + 1;
      }
    }
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if ((iVar4 - iVar5 < 1) || (iVar4 = fn_828E9FF8(param_2,1), iVar4 == 0)) {
      iVar4 = *(int *)(param_1 + 0x88);
    }
    else {
      iVar4 = fn_828E9DA8(param_2);
      iVar5 = fn_828E9D90(param_2);
      if (iVar4 - iVar5 < 2) {
        iVar4 = 1;
      }
      else {
        iVar4 = fn_828E9FF8(param_2,2);
        iVar4 = iVar4 + 1;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar4;
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if ((iVar4 - iVar5 < 1) || (iVar4 = fn_828E9FF8(param_2,1), iVar4 == 0)) {
      *(unsigned int *)(param_1 + 0x90) = 0;
    }
    else {
      iVar4 = fn_828E9DA8(param_2);
      iVar5 = fn_828E9D90(param_2);
      if (iVar4 - iVar5 < 4) {
        *(unsigned int *)(param_1 + 0x90) = 0;
      }
      else {
        uVar6 = fn_828E9FF8(param_2,4);
        *(unsigned int *)(param_1 + 0x90) = uVar6;
      }
    }
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (iVar4 - iVar5 < 8) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_828E9FF8(param_2,8);
    }
    *(unsigned int *)(param_1 + 0xa0) = uVar6;
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (iVar4 - iVar5 < 8) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_828E9FF8(param_2,8);
    }
    *(unsigned int *)(param_1 + 0xa4) = uVar6;
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if ((iVar4 - iVar5 < 1) || (iVar4 = fn_828E9FF8(param_2,1), iVar4 == 0)) {
      *(unsigned char *)(param_1 + 0xc4) = 0;
    }
    else {
      iVar4 = fn_828E9DA8(param_2);
      iVar5 = fn_828E9D90(param_2);
      if (iVar4 - iVar5 < 8) {
        *(unsigned char *)(param_1 + 0xc4) = 0;
      }
      else {
        uVar7 = fn_828E9FF8(param_2,8);
        *(unsigned char *)(param_1 + 0xc4) = uVar7;
      }
    }
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if ((iVar4 - iVar5 < 1) || (iVar4 = fn_828E9FF8(param_2,1), iVar4 == 0)) {
      *(unsigned char *)(param_1 + 0xc5) = 0;
    }
    else {
      iVar4 = fn_828E9DA8(param_2);
      iVar5 = fn_828E9D90(param_2);
      if (iVar4 - iVar5 < 8) {
        *(unsigned char *)(param_1 + 0xc5) = 0;
      }
      else {
        uVar7 = fn_828E9FF8(param_2,8);
        *(unsigned char *)(param_1 + 0xc5) = uVar7;
      }
    }
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if ((0 < iVar4 - iVar5) && (iVar4 = fn_828E9FF8(param_2,1), iVar4 != 0)) {
      fn_8224BE90(param_2,acStack_130,0x100,1,0,0);
      pcVar8 = acStack_130;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      fn_82230360(param_1 + 0xa8,acStack_130,pcVar8 + (-1 - (int)acStack_130));
    }
    iVar4 = fn_828E9DA8(param_2);
    iVar5 = fn_828E9D90(param_2);
    if (iVar4 - iVar5 < 1) {
      lVar3 = 0;
      *(unsigned char *)(param_1 + 0xc6) = 0;
    }
    else {
      lVar3 = fn_828E9FF8(param_2,1);
      *(char *)(param_1 + 0xc6) = '\x01' - (lVar3 == 0);
    }
  }
  else {
    *(unsigned char *)(param_1 + 0x80) = 0;
    uVar2 = fn_823AA970();
    lVar3 = fn_828E9D50(param_2,uVar2);
  }
  return lVar3;
}

