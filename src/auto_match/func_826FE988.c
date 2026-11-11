typedef struct Elem_826FE988 { int first, value; } Elem_826FE988;
extern void fn_826FDA38(void *, void *, unsigned);
typedef struct { Elem_826FE988 *data; unsigned size; } Vec_826FE988;

void fn_826FE988(Vec_826FE988 *v, unsigned n)
{
  unsigned old = v->size;
  fn_826FDA38(v, v, n);
  if (n > old) {
    Elem_826FE988 *p = v->data + old;
    unsigned cnt = n - old;
    unsigned i = 0;
    if (cnt != 0) {
      do {
        if (p != 0) p->value = 0;
        i++; p++;
      } while (i < cnt);
    }
  }
}
