unsigned __int64 fn_829655B8(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  if (param_2 != 0xffffffff) {
    do {
      puVar1 = *(unsigned int **)(param_2 * 4 + *(int *)(param_1 + 0x14));
      if (((*puVar1 & 0x20) != 0) ||
         ((puVar1[0xe] != 0xffffffff &&
          ((**(unsigned int **)(puVar1[0xe] * 4 + *(int *)(param_1 + 0x14)) & 0x20) != 0)))) {
        return 1;
      }
      param_2 = puVar1[2];
    } while (param_2 != 0xffffffff);
  }
  return 0;
}

