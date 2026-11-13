unsigned __int64 use_merged_upsample(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((((*(char *)(param_1 + 0x48) == '\0') && (*(char *)(param_1 + 0x10a) == '\0')) &&
       (*(int *)(param_1 + 0x28) == 3)) &&
      (((*(int *)(param_1 + 0x24) == 3 && (*(int *)(param_1 + 0x2c) == 2)) &&
       ((*(int *)(param_1 + 100) == 3 &&
        ((iVar1 = *(int *)(param_1 + 0xc4), *(int *)(iVar1 + 8) == 2 &&
         (*(int *)(iVar1 + 0x5c) == 1)))))))) &&
     ((*(int *)(iVar1 + 0xb0) == 1 &&
      (((((*(int *)(iVar1 + 0xc) <= 2 && (*(int *)(iVar1 + 0x60) == 1)) &&
         (*(int *)(iVar1 + 0xb4) == 1)) &&
        ((iVar2 = *(int *)(param_1 + 0x118), *(int *)(iVar1 + 0x24) == iVar2 &&
         (*(int *)(iVar1 + 0x78) == iVar2)))) && (*(int *)(iVar1 + 0xcc) == iVar2)))))) {
    return 1;
  }
  return 0;
}

