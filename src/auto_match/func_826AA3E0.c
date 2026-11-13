typedef struct Ctl_826AA3E0 { int pad[2]; int refs; } Ctl_826AA3E0;
typedef struct Elem_826AA3E0 { int a; Ctl_826AA3E0 *c; } Elem_826AA3E0;
typedef struct Vec_826AA3E0 { Elem_826AA3E0 *data; unsigned size; unsigned cap; int a; Ctl_826AA3E0 *c; } Vec_826AA3E0;
extern void fn_826A9BC8(Vec_826AA3E0 *, Vec_826AA3E0 *, unsigned);

void fn_826AA3E0(Vec_826AA3E0 *v, unsigned n)
{
  unsigned old = v->size;
  fn_826A9BC8(v, v, n);
  if (n > old) {
    Elem_826AA3E0 *p = v->data + old;
    unsigned cnt = n - old;
    unsigned i = 0;
    if (cnt != 0) {
      do {
        if (p != 0) {
          p->a = v->a;
          p->c = v->c;
          p->c->refs = p->c->refs + 1;
        }
        i++;
        p++;
      } while (i < cnt);
    }
  }
}
