extern int fn_827676C8();


void fn_82769A30(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = fn_827676C8(param_1,*(unsigned int *)(param_1 + 0x20),param_2);
  *(int *)(param_1 + 0x20) = iVar1 + *(int *)(param_1 + 0x20);
  uVar2 = *param_2;
  if (uVar2 == 0) {
    *(unsigned int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2[1];
LAB_82769b34:
    *param_2 = 2;
    param_2[1] = *(unsigned int *)(param_1 + 0x10);
  }
  else {
    if (uVar2 == 1) {
      *(unsigned int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[1];
      goto LAB_82769b34;
    }
    if (2 < uVar2) {
      if (uVar2 == 3) {
        uVar2 = *(int *)(param_1 + 0x10) + param_2[1];
        *(unsigned int *)(param_1 + 0x10) = uVar2;
        *(unsigned int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[2];
        param_2[1] = uVar2;
        param_2[2] = *(unsigned int *)(param_1 + 0x14);
        uVar2 = *(int *)(param_1 + 0x10) + param_2[3];
        *(unsigned int *)(param_1 + 0x10) = uVar2;
        *(unsigned int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[4];
        param_2[3] = uVar2;
        param_2[4] = *(unsigned int *)(param_1 + 0x14);
      }
      goto LAB_82769b4c;
    }
    uVar2 = *(int *)(param_1 + 0x10) + param_2[1];
    *(unsigned int *)(param_1 + 0x10) = uVar2;
    *(unsigned int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[2];
    param_2[1] = uVar2;
  }
  param_2[2] = *(unsigned int *)(param_1 + 0x14);
LAB_82769b4c:
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  if ((*(int *)(param_1 + 0x1c) == 0) && (*(char *)(param_1 + 0x24) != '\0')) {
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 0x20);
  }
  return;
}

