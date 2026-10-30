extern void *fn_8267B890(void *a, unsigned n, int z);
extern void fn_8267BE38(void *p);
extern void *memcpy(void *d, const void *s, unsigned n);

typedef struct Elem_8277B4A0 { int f0; unsigned size; } Elem_8277B4A0;

typedef struct Vec_8277B4A0 {
  unsigned count;
  unsigned cap;
  void *data;
  Elem_8277B4A0 *desc;
  void *alloc;
} Vec_8277B4A0;

void fn_8277B4A0(Vec_8277B4A0 *v, unsigned n)
{
  void *p;
  if (n != v->count && v->desc->f0 != 0) {
    if (n > v->cap && n > v->count) {
      p = fn_8267B890(v->alloc, v->desc->size * n, 0);
      if (v->data != 0) {
        if (p != 0) {
          memcpy(p, v->data, v->desc->size * v->count);
        }
        fn_8267BE38(v->data);
      }
      v->cap = n;
      v->data = p;
    }
    v->count = n;
  }
}
