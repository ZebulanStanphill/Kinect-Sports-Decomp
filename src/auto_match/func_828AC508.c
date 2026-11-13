void fn_828AC508(unsigned int param_1,int param_2)

{
  if (param_1 == param_2) {
    return;
  }
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_2 + 4);
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_2 + 0x14);
  return;
}

