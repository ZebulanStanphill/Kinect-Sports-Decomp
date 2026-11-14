extern int fn_82CE1780(int a, int b, unsigned __int64 *c, int d);

unsigned int fn_828ED350(int param_1, unsigned __int64 param_2)
{
  int state;
  unsigned __int64 local;

  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  state = *(int *)(param_1 + 8);
  if (state != 2 && state != 4) {
    return 0;
  }
  local = param_2;
  return fn_82CE1780(*(int *)(param_1 + 0x58), 1, &local, 0);
}
