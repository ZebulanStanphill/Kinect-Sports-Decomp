unsigned __int64 fn_8242C410(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c),
     (*(int *)(iVar1 + 0x1c8) - *(int *)(iVar1 + 0x1c4) & 0xfffffffcU) != 4)) {
    return (__int64)((*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
  }
  return (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x174) + 0xbc);
}

