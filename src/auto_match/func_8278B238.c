__int64 fn_8278B238(int param_1,unsigned int *param_2)

{
  if (*(unsigned int **)(param_1 + 8) != (unsigned int *)0x0) {
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = **(unsigned int **)(param_1 + 8);
    }
    return (unsigned __int64)*(unsigned int *)(param_1 + 8) + 4;
  }
  return 0;
}

