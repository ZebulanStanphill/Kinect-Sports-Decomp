extern void fn_8276ABC0(void *, void *, unsigned);
typedef struct { unsigned *data; unsigned size; } Vec_8276B138;

void fn_8276B138(Vec_8276B138 *v, unsigned n)
{
  unsigned old = v->size;
  fn_8276ABC0(v, v, n);
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
