extern int fn_822B0A98();


void fn_822B0A48(int param_1)

{
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 0xfa4) != 0)) {
    fn_822B0A98();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

