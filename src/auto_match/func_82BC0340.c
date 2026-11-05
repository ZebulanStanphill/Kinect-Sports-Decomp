typedef struct Vec_82BC0340 { int pad; unsigned size; unsigned *data; } Vec_82BC0340;
typedef struct Tab_82BC0340 {
  unsigned n;
  int pad4;
  Vec_82BC0340 **buckets;
  int (*eq)(unsigned, void *);
  unsigned (*hash)(void *);
} Tab_82BC0340;
extern unsigned *fn_82BC0088(Vec_82BC0340 *, unsigned);
unsigned fn_82BC0340(Tab_82BC0340 *t, void *key)
{
  Vec_82BC0340 *b;
  unsigned i;
  unsigned h = t->hash(key);
  b = t->buckets[(t->n - 1) & h];
  if (b != 0) {
    i = 0;
    if (b->size != 0) {
      do {
        unsigned *e;
        unsigned v;
        if (i < b->size) e = b->data + i; else e = fn_82BC0088(b, i);
        v = *e;
        if (t->eq(v, key) == 0) return v;
        i++;
      } while (i < b->size);
    }
  }
  return 0;
}
