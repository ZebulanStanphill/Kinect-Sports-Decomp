extern int fn_82E2E298(void);
int fn_82E2F460(char *obj, int idx)
{
  int r = fn_82E2E298();
  if (r >= 0) {
    unsigned cur = *(unsigned *)(obj + 0x68) + 1;
    unsigned nw = idx + 1U;
    *(unsigned *)(obj + 0x68) = (cur > nw) ? cur : nw;
  }
  return r >= 0;
}
