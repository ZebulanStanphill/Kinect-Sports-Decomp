unsigned __int64 fn_82E6FFA0(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x68);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  *(unsigned int *)(param_1 + 0x68) = param_2;
  return 0;
}

