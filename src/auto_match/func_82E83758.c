extern int fn_82F02410();
extern int fn_82F68B74();


void fn_82E83758(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  if (*(int *)(param_1 + 0x202c) != 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
    if (*(int *)(param_1 + 0x76c8) == 0) {
      uVar4 = 4;
      uVar3 = 0xf;
    }
    else {
      uVar4 = 5;
      uVar3 = 0x1f;
    }
    goto fn_82F02410;
  }
  iVar1 = *(int *)(param_1 + 0xaf0);
  if (iVar1 == 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
    uVar4 = 3;
    uVar3 = 6;
    goto fn_82F02410;
  }
  if ((*(int *)(param_1 + 0x76c8) == 0) || (*(int *)(param_1 + 0x76e0) != 0)) {
LAB_82e83808:
    if ((iVar1 == 1) && ((*(int *)(param_1 + 0x76e0) != 0 || (*(int *)(param_1 + 0x76d0) == 0)))) {
      uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
      uVar4 = 1;
      uVar3 = 0;
      goto fn_82F02410;
    }
  }
  else if (iVar1 == 1) {
    if (*(__int64 *)(param_1 + 0x7758) <=
        *(__int64 *)(param_1 + 0x1e30) - *(__int64 *)(param_1 + 0x7740)) {
      if (*(__int64 *)(param_1 + 0x7758) >> 1 <=
          *(__int64 *)(param_1 + 0x1e18) - *(__int64 *)(param_1 + 0x1e20)) {
        uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
        uVar4 = 6;
        uVar3 = 0x3d;
        goto fn_82F02410;
      }
    }
    goto LAB_82e83808;
  }
  if (iVar1 == 2) {
    uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
    uVar4 = 2;
    uVar3 = 2;
  }
  else if (iVar1 == 4) {
    uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
    uVar4 = 4;
    uVar3 = 0xe;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x76e0) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x76d0) == 0) {
      return;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
    uVar4 = 6;
    uVar3 = 0x3c;
  }
fn_82F02410:
  fn_82F68B74(uVar2,uVar3,uVar4);
  return;
}

