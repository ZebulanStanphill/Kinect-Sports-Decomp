typedef struct Elem_82756288 { int id; float value; } Elem_82756288;
typedef struct Vec_82756288 { Elem_82756288 *data; unsigned size; } Vec_82756288;

extern void fn_8272DED0(void *, void *, unsigned);

void fn_82756288(Vec_82756288 *v, unsigned n)
{
  unsigned old = v->size;
  fn_8272DED0(v, v, n);
  if (n > old) {
    Elem_82756288 *p = v->data + old;
    unsigned cnt = n - old;
    unsigned i = 0;
    if (cnt != 0) {
      do {
        if (p != 0) { p->id = -1; p->value = 0.0f; }
        i++; p++;
      } while (i < cnt);
    }
  }
}
