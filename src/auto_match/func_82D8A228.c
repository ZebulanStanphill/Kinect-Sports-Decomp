typedef struct Heap { struct HeapVt *vt; } Heap;
struct HeapVt { void *f0; void *(*alloc)(Heap *, int); };
typedef struct { Heap *pad[4]; Heap *heap; } Glob;
typedef struct { unsigned *a; unsigned short b; unsigned short c; } Part;
typedef struct { Part p0; Part p1; } Set;
static __forceinline void init(Part *p) { p->a = 0; p->b = 0; p->c = 0x8000; }
typedef struct { char pad[0x214]; Set *set; } Obj;
extern Glob *fn_82CE5410(void);

void fn_82D8A228(Obj *o, unsigned x)
{
  Set *s;
  int i;
  unsigned *p;
  int n;
  if (o->set == 0) {
    Glob *g = fn_82CE5410();
    Set *m = (Set *)g->heap->vt->alloc(g->heap, 0x10);
    Set *r;
    if (m != 0) {
      init(&m->p0);
      init(&m->p1);
      r = m;
    } else r = 0;
    o->set = r;
  }
  s = o->set;
  i = 0;
  n = s->p1.b;
  if (n > 0) {
    p = s->p1.a;
    do {
      if (*p == x) goto found;
      i++;
      p++;
    } while (i < n);
  }
  i = -1;
found:
  s->p1.a[i] = 0;
}
