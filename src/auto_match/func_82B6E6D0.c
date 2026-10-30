typedef struct HT_82B6E6D0 {
  unsigned *tab;
  void *ctx;
  int pad8;
  void (*dealloc)(void *, void *);
  void *owner;
  unsigned n;
} HT_82B6E6D0;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void fn_82B6B3E8(void *, unsigned);

void fn_82B6E6D0(HT_82B6E6D0 *t)
{
  unsigned i;
  int off;
  if (t == 0) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pSHashTable", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", 0x213);
  }
  i = 0;
  if (t->n > 0) {
    off = 0;
    do {
      fn_82B6B3E8(t->owner, t->tab[i]);
      i++;
      off += 4;
    } while (i < t->n);
  }
  t->dealloc(t->ctx, t->tab);
  t->dealloc(t->ctx, t);
}
