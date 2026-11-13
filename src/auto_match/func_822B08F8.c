extern int fn_822B0950();


void fn_822B08F8(int param_1)

{
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 0xf98) != 0)) {
    fn_822B0950(param_1,1);
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

