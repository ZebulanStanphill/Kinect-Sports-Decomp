extern int fn_82EC7488();


void fn_82E81C50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1fa8);
  *(int (***)())(param_1 + 0x1b90) = fn_82EC7488;
  if (*(int *)(param_1 + 0x1fac) == 2) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
LAB_82e81c7c:
        *(unsigned int *)(param_1 + 0x1f28) = 1;
        *(unsigned int *)(param_1 + 0x760c) = 1;
        *(unsigned int *)(param_1 + 0x920) = 1;
        return;
      }
      if (iVar1 != 2) {
        if (iVar1 == 3) goto LAB_82e81c7c;
        if ((iVar1 != 4) && (iVar1 != 5)) {
          return;
        }
      }
LAB_82e81cb0:
      *(unsigned int *)(param_1 + 0x760c) = 1;
      *(unsigned int *)(param_1 + 0x920) = 1;
      return;
    }
  }
  else {
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x5268) = 0;
      *(unsigned int *)(param_1 + 0x648) = 0;
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *(unsigned int *)(param_1 + 0x920) = 1;
        return;
      }
      if (iVar1 != 3) {
        if ((iVar1 != 4) && (iVar1 != 5)) {
          return;
        }
        *(unsigned int *)(param_1 + 0x6d70) = 1;
        *(unsigned int *)(param_1 + 0x6dc8) = 2;
        *(unsigned int *)(param_1 + 0x6dcc) = 2;
        *(unsigned int *)(param_1 + 0x760c) = 1;
        *(unsigned int *)(param_1 + 0x920) = 1;
        return;
      }
      goto LAB_82e81cb0;
    }
  }
  *(unsigned int *)(param_1 + 0x5268) = 0;
  *(unsigned int *)(param_1 + 0x920) = 1;
  return;
}

