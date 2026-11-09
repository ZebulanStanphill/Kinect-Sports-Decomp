typedef struct { float x, y, z, w; } Elem_827724F8;
typedef struct { Elem_827724F8 *data; unsigned size; } Vec_827724F8;

extern void fn_82772400(void *, void *, unsigned);

void fn_827724F8(Vec_827724F8 *v, unsigned n)
{
  unsigned old = v->size;
  fn_82772400(v, v, n);
  if (n > old) {
    Elem_827724F8 *p = v->data + old;
    unsigned cnt = n - old;
    unsigned i = 0;
    if (cnt != 0) {
      do {
        if (p != 0) { p->x = 0.0f; p->y = 0.0f; p->z = 0.0f; p->w = 0.0f; }
        i++; p++;
      } while (i < cnt);
    }
  }
}
