unsigned __int64 fn_829640A0(int param_1,unsigned int param_2)

{
  if (param_2 == 0) {
    return 0xffffffff80004005;
  }
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_2 + 0x60);
  *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_2 + 100);
  *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_2 + 0x68);
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_2 + 0x6c);
  *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_2 + 0x70);
  *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_2 + 0x74);
  return 0;
}

