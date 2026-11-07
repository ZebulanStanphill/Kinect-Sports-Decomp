extern int fn_82358810(int param_1, int param_2);

int fn_82398140(int param_1, int param_2)
{
  unsigned int state;

  if (param_2 != 0) {
    return 1;
  }
  state = *(unsigned int *)(param_1 + 0x54);
  if ((state == 3 || state == 5 || state == 0x11) && fn_82358810(param_1, 0) != 0) {
    return 1;
  }
  return 0;
}
