void fn_8228A318(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x11f0) + 0x18b8);
  if (uVar1 == 0) {
    if (param_2 != 1) {
code_r0x8228a354:
      if (param_2 != 6) {
        return;
      }
      uVar4 = 0xe;
      goto code_r0x8228a418;
    }
code_r0x8228a40c:
    uVar4 = 1;
code_r0x8228a410:
    *(unsigned int *)(param_1 + 0x6a0) = uVar4;
  }
  else {
    if (uVar1 == 1) {
      if (param_2 == 0) {
        iVar2 = *(int *)(param_1 + 0x728);
        *(unsigned int *)(param_1 + 0x6a0) = 1;
        if ((iVar2 == 1) || (iVar2 == 0)) {
          uVar4 = 6;
        }
        else if ((iVar2 == 3) && (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18c0) == 3)) {
          uVar4 = 0xb;
        }
        else {
          uVar4 = 7;
        }
        goto code_r0x8228a418;
      }
      if (param_2 != 1) goto code_r0x8228a354;
code_r0x8228a3a4:
      uVar4 = 2;
      goto code_r0x8228a410;
    }
    if (2 < uVar1) {
      return;
    }
    if (param_2 == 2) goto code_r0x8228a40c;
    if (param_2 == 3) goto code_r0x8228a3a4;
    if (param_2 == 4) {
      uVar4 = 3;
      goto code_r0x8228a410;
    }
    if (param_2 != 5) goto code_r0x8228a354;
    iVar2 = 0;
    piVar3 = (int *)(param_1 + 0x6a8);
    lVar5 = 4;
    do {
      if (*piVar3 != 4) {
        iVar2 = iVar2 + 1;
      }
      piVar3 = piVar3 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (iVar2 != 2) {
      uVar4 = 10;
      goto code_r0x8228a418;
    }
  }
  uVar4 = *(unsigned int *)(param_1 + 0x608);
code_r0x8228a418:
  *(unsigned int *)(param_1 + 0x604) = uVar4;
  return;
}

