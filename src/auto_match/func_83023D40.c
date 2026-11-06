extern int fn_82A1EFC0(int, int, int);

int fn_83023D40(int param_1)
{
  *(unsigned short *)(param_1 + 0x10e) = 0;
  if (*(int *)(param_1 + 0x108) == 0x11) {
    *(int *)(param_1 + 0x70) = 2;
  } else {
    *(int *)(param_1 + 0x70) = 1;
  }
  *(int *)(param_1 + 0x108) = 0x11;
  if (*(unsigned int *)(param_1 + 0x100) != 0) {
    fn_82A1EFC0(*(int *)(param_1 + 0x100), 0, *(int *)(param_1 + 0x150));
  }
  return 1;
}
