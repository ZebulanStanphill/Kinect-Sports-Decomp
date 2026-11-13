unsigned __int64 fn_825EDC58(int param_1,int *param_2)

{
  if ((param_2[*(int *)(param_1 + 0x30) + 2] != 0) &&
     ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + *param_2) & 0x800) == 0)) {
    return 1;
  }
  return 0;
}

