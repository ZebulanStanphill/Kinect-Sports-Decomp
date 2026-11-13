extern void *RtlCreateHeap(unsigned, void *, unsigned, unsigned, void *, void *);
extern void fn_82A2A370(int);

void *fn_82A265A8(unsigned flags, unsigned reserve, unsigned commit)
{
  unsigned f = flags & 5 | 0x1000;
  void *h;
  if (commit < 0x10000) {
    if (commit == 0) {
      f |= 2;
      goto create;
    }
    commit = 0x10000;
  }
  if (reserve > commit)
    commit = reserve;
create:
  h = RtlCreateHeap(f, 0, commit, reserve, 0, 0);
  if (h == 0)
    fn_82A2A370(8);
  return h;
}
