extern int fn_82F02410();


void fn_82E838A0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  iVar1 = *(int *)(param_1 + 0xaf0);
  if ((iVar1 == 2) && (*(int *)(param_1 + 0x7b38) == 0)) {
    uVar4 = 1;
    uVar3 = (unsigned int)(*(int *)(param_1 + 0x89c) == 1);
    goto LAB_82e83aa0;
  }
  if (*(unsigned int *)(param_1 + 0x614) < 0xd) {
    if ((*(int *)(param_1 + 0x8a0) != 0) && (iVar1 != 2)) {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),1,4);
    }
    uVar3 = *(unsigned int *)(param_1 + 0x89c);
    if (uVar3 < 4) {
      if (uVar3 != 1) {
        if (uVar3 == 2) {
LAB_82e8393c:
          uVar5 = 3;
          uVar4 = 1;
          goto LAB_82e839c4;
        }
        if (uVar3 == 0) goto LAB_82e83988;
        goto LAB_82e83994;
      }
LAB_82e83934:
      uVar4 = 1;
LAB_82e839c0:
      uVar5 = 1;
LAB_82e839c4:
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar4,uVar5);
    }
  }
  else {
    if ((*(int *)(param_1 + 0x8a0) != 0) && (iVar1 != 2)) {
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),1,4);
    }
    uVar3 = *(unsigned int *)(param_1 + 0x89c);
    if (uVar3 < 4) {
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 2) goto LAB_82e8393c;
          goto LAB_82e83934;
        }
LAB_82e83988:
        uVar5 = 2;
        uVar4 = 1;
        goto LAB_82e839c4;
      }
LAB_82e83994:
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),0,3);
      if ((*(int *)(param_1 + 0x8a0) == 0) && (*(int *)(param_1 + 0xaf0) != 2)) {
        uVar4 = 0;
        goto LAB_82e839c0;
      }
    }
  }
  if (*(int *)(param_1 + 0x8a0) == 0) {
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x1ebc);
  if (*(int *)(param_1 + 0x7b38) == 0) {
    fn_82F02410(uVar2,*(unsigned int *)(param_1 + 0x8ac),6);
    uVar3 = *(unsigned int *)(param_1 + 0x8b0);
  }
  else if (*(int *)(param_1 + 0x8a4) == 0) {
    fn_82F02410(uVar2,1,2);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x8bc),6);
    uVar3 = *(unsigned int *)(param_1 + 0x8c0);
  }
  else if (*(int *)(param_1 + 0x8a8) == 0) {
    fn_82F02410(uVar2,0,2);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x8b4),6);
    uVar3 = *(unsigned int *)(param_1 + 0x8b8);
  }
  else {
    fn_82F02410(uVar2,1,1);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x8b4),6);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x8b8),6);
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned int *)(param_1 + 0x8bc),6);
    uVar3 = *(unsigned int *)(param_1 + 0x8c0);
  }
  uVar4 = 6;
LAB_82e83aa0:
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar3,uVar4);
  return;
}

