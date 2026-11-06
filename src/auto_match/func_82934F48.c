typedef struct Node_82934F48 Node_82934F48;
typedef struct NodeVtbl_82934F48 {
  void *f0;
  Node_82934F48 *(*Clone)(Node_82934F48 *self);
} NodeVtbl_82934F48;
struct Node_82934F48 { NodeVtbl_82934F48 *vt; };
typedef struct Block_82934F48 { unsigned __int64 v[4]; } Block_82934F48;
typedef struct Obj_82934F48 {
  char pad0[0x10];
  Block_82934F48 block;
  int f30;
  int f34;
  int f38;
  Node_82934F48 *a;
  Node_82934F48 *b;
  Node_82934F48 *kids[4];
  int f54;
  int f58;
  int f5c;
} Obj_82934F48;
extern void *fn_82930318(unsigned size);
extern Obj_82934F48 *fn_82934E38(void *mem);

Obj_82934F48 *fn_82934F48(Obj_82934F48 *o)
{
  void *mem;
  Obj_82934F48 *n;
  unsigned i;
  mem = fn_82930318(0x60);
  if (mem != 0)
    n = fn_82934E38(mem);
  else
    n = 0;
  if (n == 0)
    return 0;
  n->block = o->block;
  n->f30 = o->f30;
  n->f34 = o->f34;
  n->f38 = o->f38;
  n->f54 = o->f54;
  n->f58 = o->f58;
  if (o->a != 0) {
    if ((n->a = o->a->vt->Clone(o->a)) == 0)
      return 0;
  }
  if (o->b != 0) {
    if ((n->b = o->b->vt->Clone(o->b)) == 0)
      return 0;
  }
  for (i = 0; i < 4; i++) {
    if (o->kids[i] != 0) {
      if ((n->kids[i] = o->kids[i]->vt->Clone(o->kids[i])) == 0)
        return 0;
    }
  }
  return n;
}
