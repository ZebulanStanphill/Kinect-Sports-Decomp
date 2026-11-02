extern void fn_826CBF70(void *, void *, unsigned);
typedef struct { unsigned *data; unsigned size; } Vec_826CD508;

void fn_826CD508(Vec_826CD508 *v, unsigned n)
{
  unsigned old = v->size;
  fn_826CBF70(v, v, n);
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
