extern void fn_826996C0(void *, void *, unsigned);
typedef struct { unsigned *data; unsigned size; } Vec_82699740;

void fn_82699740(Vec_82699740 *v, unsigned n)
{
  unsigned old = v->size;
  fn_826996C0(v, v, n);
  if (n > old) {
    unsigned *p = v->data + old;
    unsigned cnt = n - old;
    unsigned i = 0;
    if (cnt != 0) {
      do {
        if (p != 0) *p = 0;
        i++; p++;
      } while (i < cnt);
    }
  }
}
