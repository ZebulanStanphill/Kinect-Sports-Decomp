extern int fn_82E1E9F0();


void fn_82E1EAE8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x44) != 0) {
    fn_82E1E9F0(param_1,*(unsigned int *)(param_1 + 0x4c), *(unsigned int *)(param_1 + 0x44));
    *(unsigned int *)(param_1 + 0x44) = 0;
  }
  return;
}

