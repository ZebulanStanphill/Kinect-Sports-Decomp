extern int fn_82AB1870();


void fn_82B7C3A0(int param_1)

{
  if (*(char *)(param_1 + 0x558) == '\0') {
    fn_82AB1870(*(unsigned int *)(param_1 + 0x55c));
  }
  *(unsigned char *)(param_1 + 0x558) = 1;
  return;
}

