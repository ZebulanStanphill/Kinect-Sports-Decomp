typedef struct Entry_82822838 {
  struct Entry_82822838 *next;
  int list;
} Entry_82822838;

extern int lbl_83156E78;
extern Entry_82822838 *lbl_8320A648;
extern int fn_82822580(Entry_82822838 *e);

static __forceinline Entry_82822838 *Lookup(int i)
{
  if (i >= 0 && i <= lbl_83156E78) {
    return &lbl_8320A648[i];
  }
  return 0;
}

int fn_82822838(int i)
{
  Entry_82822838 *e = Lookup(i);
  if (e != 0) {
    return fn_82822580(e);
  }
  return 0;
}
