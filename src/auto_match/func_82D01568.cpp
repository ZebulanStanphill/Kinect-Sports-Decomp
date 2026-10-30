struct Node_82D01568 { Node_82D01568 *next; int f4, f8; int size; };
struct Alloc_82D01568 { virtual void s0(); virtual void s1(); virtual void Free(Node_82D01568 *n); };
struct Obj_82D01568 {
  char pad[0x28]; int f28; int f2c; Alloc_82D01568 *alloc;
};

extern "C" int fn_82D01568(Obj_82D01568 *o, Node_82D01568 *p)
{
  int n = 0;
  Node_82D01568 *next;
  while (p != 0) {
    n++;
    o->f2c -= p->size;
    o->f28 -= p->size;
    next = p->next;
    o->alloc->Free(p);
    p = next;
  }
  return n;
}
