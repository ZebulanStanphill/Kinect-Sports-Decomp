int fn_82FAF750(int param_1)

{
  unsigned char bVar1;
  
  bVar1 = *(unsigned char *)(param_1 + 0x98);
  while ((bVar1 & 0x80) == 0) {
    param_1 = *(int *)(param_1 + 0x10);
    bVar1 = *(unsigned char *)(param_1 + 0x98);
  }
  return param_1 + 0x88;
}

