extern int fn_82F37880(void);
int fn_82F37D40(char *obj, int idx)
{
  int r = fn_82F37880();
  if (r >= 0) {
    unsigned cur = *(unsigned *)(obj + 0x68) + 1;
    unsigned nw = idx + 1U;
    *(unsigned *)(obj + 0x68) = (cur > nw) ? cur : nw;
  }
  return r >= 0;
}
