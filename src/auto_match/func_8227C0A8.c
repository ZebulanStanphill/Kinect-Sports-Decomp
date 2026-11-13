unsigned int fn_8227C0A8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      if ((*(int *)(param_1 + 0xa6c) != 0) &&
         ((*(int *)(param_1 + 0xa70) != 0 || (*(int *)(param_1 + 0xa74) != 0)))) {
        return 1;
      }
    }
    else if (3 < iVar1) {
      if (iVar1 < 9) goto LAB_8227c10c;
      if (iVar1 == 0xf) {
        return *(unsigned int *)(param_1 + 0xa74);
      }
    }
    return 0;
  }
LAB_8227c10c:
  return *(unsigned int *)(param_1 + 0xa6c);
}

