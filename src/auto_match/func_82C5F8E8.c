extern int fn_82C5E098();
extern int fn_82CA6768();


unsigned __int64 fn_82C5F8E8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  if (*(int *)(param_1 + 0xe88) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x3cb0);
  if (iVar1 < 5) {
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x3cac) = *(unsigned int *)(param_1 + 0x8c);
      goto LAB_82c5f980;
    }
    if (iVar1 == 4) {
      fn_82C5E098(param_1);
    }
    if (param_2 < 0x17) {
      return 0xfffffffffffffffd;
    }
  }
  else {
    iVar1 = fn_82C5E098();
    if (*(int *)(iVar1 + 0x3cb0) != 5) goto LAB_82c5f980;
    if (param_2 == 0) {
      return 0xfffffffffffffffd;
    }
  }
  uVar2 = fn_82CA6768(*(unsigned int *)(param_1 + 0x8c));
  *(unsigned int *)(param_1 + 0x3cac) = uVar2;
LAB_82c5f980:
  if ((*(int *)(param_1 + 0x3cd4) != 0) || (uVar2 = 1, *(int *)(param_1 + 0x98) == 0)) {
    uVar2 = 0;
  }
  *(unsigned int *)(param_1 + 0x3cb4) = uVar2;
  *(unsigned int *)(param_1 + 0xe88) = 1;
  return 0;
}

