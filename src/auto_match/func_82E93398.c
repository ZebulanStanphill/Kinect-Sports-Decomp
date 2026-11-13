int fn_82E93398(char *self, int flag, long long off)
{
  int ret = 0;
  long long t;
  if (flag != 0) {
    t = *(long long *)(self + 0x1e20) - *(long long *)(self + 0x1e38) + off;
  } else {
    t = *(long long *)(self + 0x1e28) + *(long long *)(self + 0x1e20);
  }
  if (!(*(int *)(self + 0x1e10) != 0 && t < *(long long *)(self + 0x1e18) && *(int *)(self + 0x4c08) == 0))
    ret = 1;
  return ret;
}
