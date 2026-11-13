unsigned int fn_82B453E0(int param_1)

{
  unsigned int iVar1;
  
  if ((((*(int **)(param_1 + 0x18) != (int *)0x0) &&
       (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0)) &&
      (iVar1 = *(int *)(iVar1 + 0x14), iVar1 != 0)) &&
     ((*(int *)(iVar1 + 4) == 3 && (*(int *)(iVar1 + 0x10) == 9)))) {
    return *(unsigned int *)(iVar1 + 0x18);
  }
  return 0;
}

