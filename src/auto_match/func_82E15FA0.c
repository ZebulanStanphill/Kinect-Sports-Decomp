extern int fn_82E0F0E0();


void fn_82E15FA0(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    fn_82E0F0E0(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 0x14) = 1;
  }
  return;
}

