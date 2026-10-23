typedef struct Alloc Alloc;
typedef struct {
  void *pad[10];
  void (*free)(Alloc *, void *);
} AllocVtbl;
struct Alloc {
  AllocVtbl *vt;
};

extern Alloc *fn_825089A0(void);
extern void fn_828A30A0(void *, void *, void *);

typedef struct {
  void *first;
  void *last;
  void *end;
  char al[4];
} Vec;

void fn_828A35E0(Vec *v)
{
  void *p;
  Alloc *a;

  if (v->first != 0) {
    fn_828A30A0(v->first, v->last, v->al);
    p = v->first;
    a = fn_825089A0();
    a->vt->free(a, p);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
