extern int ExCreateThread(void **, unsigned, unsigned *, void *, void *, void *, unsigned);
extern void fn_82A37050(void);
extern void fn_82A2B760(void);

void *fn_82A33490(int unused, unsigned stack, void *start, void *ctx, unsigned flags, int prio, unsigned *tid)
{
  void *handle;
  unsigned f = (flags >> 2) & 1;
  if (prio != -1) {
    f = ((1 << prio) << 24) | f;
  }
  if (ExCreateThread(&handle, stack, tid, (void *)fn_82A37050, start, ctx, f) < 0) {
    fn_82A2B760();
    handle = 0;
  }
  return handle;
}
