extern int fn_82A2B760();


unsigned int fn_83055E98(unsigned int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    return param_1;
  }
  *(unsigned char *)(param_1 + 0x44) = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar1 = NtSetEvent(*(unsigned int *)(param_1 + 0x38),0);
    if (iVar1 < 0) {
      fn_82A2B760();
    }
    return (unsigned int)(iVar1 >= 0);
  }
  return param_1;
}

