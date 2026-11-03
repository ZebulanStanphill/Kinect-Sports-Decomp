struct Heap_82D70F30;
typedef struct HV_82D70F30 { void *s0; void *(*alloc)(struct Heap_82D70F30 *, int); } HV_82D70F30;
typedef struct Heap_82D70F30 { HV_82D70F30 *vt; } Heap_82D70F30;
typedef struct Ctx_82D70F30 { char pad[0x10]; Heap_82D70F30 *heap; } Ctx_82D70F30;
typedef struct Node_82D70F30 { unsigned f0; char pad4[0xc]; unsigned char f10; char pad11[2]; unsigned char f13; int f14; int f18; } Node_82D70F30;
typedef struct Arr_82D70F30 { Node_82D70F30 **data; int count; int w; } Arr_82D70F30;
extern Ctx_82D70F30 *fn_82CE5410(void);
extern void fn_82CE6310(Heap_82D70F30 *, Arr_82D70F30 *, int, int);
extern void fn_82CE63B0(Heap_82D70F30 *, Arr_82D70F30 *, int);
void fn_82D70F30(Arr_82D70F30 *a)
{
  Heap_82D70F30 *h;
  Ctx_82D70F30 *c;
  Node_82D70F30 *m;
  Node_82D70F30 *n;
  int k;
  a->count = 0;
  h = fn_82CE5410()->heap;
  if ((a->w & 0x3fffffff) < 4) {
    k = (a->w & 0x3fffffff) << 1;
    if (k <= 4) k = 4;
    fn_82CE6310(h, a, k, 4);
  }
  c = fn_82CE5410();
  if (a->count == (a->w & 0x3fffffff)) fn_82CE63B0(c->heap, a, 4);
  a->count = a->count + 1;
  h = fn_82CE5410()->heap;
  m = (Node_82D70F30 *)h->vt->alloc(h, 0x200);
  if (m != 0) { m->f0 = 0; n = m; } else n = 0;
  *a->data = n;
  n->f13 = 0x10;
  n->f10 = 1;
  n->f18 = -1;
  n->f14 = -1;
  n->f0 = 0x10;
}
