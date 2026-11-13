extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();

typedef struct { int a; int b; void *p; } Elem;
typedef struct { Elem *data; int count; int cap; } Vec;

Vec * fn_82E08FA0(Vec *v, unsigned int flags)
{
  int *alloc;
  int i, n, r; Elem *d;

  r = fn_82CE5410();
  n = v->count; d = v->data; alloc = *(int **)(r + 0x10);
  for (i = 0; i < n; i++) {
    if (d[i].p != 0) {
      fn_82CE4118(d[i].p);
    }
    d[i].p = 0;
    fn_82CED5B8(&d[i].b);
    fn_82CED5B8(&d[i].a);
  }
  v->count = 0;
  if ((v->cap & (int)0x80000000) == 0) {
    (*(int (**)())(*alloc + 0x10))(alloc, v->data, v->cap & 0x3fffffff, 0xc);
  }
  v->data = 0;
  v->cap = 0x80000000;
  if ((flags & 1) != 0) {
    alloc = *(int **)(fn_82CE5410() + 0x10);
    (*(int (**)())(*alloc + 8))(alloc, v, 0xc);
  }
  return v;
}
