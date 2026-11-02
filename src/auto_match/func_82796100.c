extern void fn_82795AE8(void *, void *, unsigned);
typedef struct { unsigned *data; unsigned size; } Vec_82796100;

void fn_82796100(Vec_82796100 *v, unsigned n)
{
  unsigned old = v->size;
  fn_82795AE8(v, v, n);
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
