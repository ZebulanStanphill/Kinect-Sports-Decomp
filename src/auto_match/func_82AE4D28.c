int fn_82AE4D28(int param_1)

{
  if (*(int *)(param_1 + 0x324) != 0) {
    return *(int *)(param_1 + 0x324);
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x10000) != 0) {
    return 0x20;
  }
  return (-(unsigned int)((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) & 0xc) + 4;
}

