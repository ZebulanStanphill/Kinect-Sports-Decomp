typedef struct Alloc_82D01108 { struct AllocVt_82D01108 *vt; } Alloc_82D01108;
typedef struct AllocVt_82D01108 { void *s0; void *s1; void (*dealloc)(Alloc_82D01108 *, void *, int); } AllocVt_82D01108;
typedef struct Ctx_82D01108 { char pad[0x14]; Alloc_82D01108 *alloc; } Ctx_82D01108;
extern Ctx_82D01108 *fn_82CE5410(void);

typedef struct Arr_82D01108 { void *a; void *b; int n; } Arr_82D01108;

void fn_82D01108(Arr_82D01108 *p)
{
  void *a = p->a;
  if (a != 0) {
    int n = p->n;
    void *b;
    Alloc_82D01108 *al1;
    Alloc_82D01108 *al2;
    al1 = fn_82CE5410()->alloc;
    al1->vt->dealloc(al1, a, n * 4);
    n = p->n;
    b = p->b;
    al2 = fn_82CE5410()->alloc;
    al2->vt->dealloc(al2, b, n * 72);
  }
  p->a = 0; p->b = 0; p->n = 0;
}
