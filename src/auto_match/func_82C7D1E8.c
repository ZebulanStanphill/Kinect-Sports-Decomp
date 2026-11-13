extern int fn_82CAAF00();
extern int fn_82CAAF50();


unsigned __int64 fn_82C7D1E8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x571c) != 0) {
    if (*(int *)(param_1 + 0x5714) != 0) {
      if (*(int *)(param_1 + 0x3ba0) != 1) goto LAB_82c7d238;
      *(unsigned int *)(param_1 + 0x3ba0) = 0xffffffff;
    } else {
      if (*(int *)(param_1 + 0x3ba0) == 0) goto LAB_82c7d238;
    }
    *(unsigned int *)(param_1 + 0x571c) = 0;
  }
LAB_82c7d238:
  iVar2 = *(int *)(param_1 + 0x3ba0);
  if ((iVar2 != -1) &&
     (((*(int *)(param_1 + 0x120) == 1 || (*(int *)(param_1 + 0x120) == 5)) &&
      (*(int *)(param_1 + 0x3ba0) = iVar2 + -1, iVar2 == 0)))) {
    uVar1 = *(unsigned int *)(param_1 + 0xea8);
    fn_82CAAF00(*(unsigned int *)(param_1 + 0x3ba4),param_1 + 0xea8,0xffffffffffffffff);
    iVar2 = fn_82CAAF50(*(unsigned int *)(param_1 + 0x3ba4),uVar1);
    if (iVar2 != 0) {
      return 0xffffffffffffff9c;
    }
  }
  if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x5714) != 0)) {
    *(unsigned int *)(param_1 + 0x5714) = 0;
    *(unsigned int *)(param_1 + 0x3ba0) = 1;
    if (*(int *)(param_1 + 0x120) == 0) {
      *(unsigned int *)(param_1 + 0x5718) = 1;
    }
  }
  return 0;
}

