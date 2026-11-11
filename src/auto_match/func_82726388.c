typedef struct Elem_82726388 { int first, value; int extra[2]; } Elem_82726388;
extern void fn_82725FA8(void *, void *, unsigned);
typedef struct { Elem_82726388 *data; unsigned size; } Vec_82726388;

void fn_82726388(Vec_82726388 *v, unsigned n)
{
  unsigned old = v->size;
  fn_82725FA8(v, v, n);
  if (n > old) {
    Elem_82726388 *p = v->data + old;
    unsigned cnt = n - old;
    unsigned i = 0;
    if (cnt != 0) {
      do {
        if (p != 0) p->value = -1;
        i++; p++;
      } while (i < cnt);
    }
  }
}
