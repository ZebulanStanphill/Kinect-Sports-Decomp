int fn_82365098(int param_1)

{
  unsigned int iVar1;
  unsigned int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x188);
  if ((((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 0x1cc), iVar2 != 0)) &&
      (*(int *)(param_1 + 0xa0) != 0)) &&
     ((*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x40) == 1 &&
      (((*(int *)(iVar1 + 0x24) != 0 && (*(int *)(iVar1 + 0x7a0) != 0)) ||
       ((*(int *)(iVar2 + 0x24) != 0 && (*(int *)(iVar2 + 0x7a0) != 0)))))))) {
    return param_1 + 0x874;
  }
  return 0;
}

