typedef struct Heap { struct HeapVt *vt; } Heap;
struct HeapVt { void *f0, *f4; void (*f8)(Heap *, void *); };
typedef struct Obj { void (**vt)(struct Obj *, int); int pad[2]; char sub[0x138]; void *slots[2]; } Obj;
extern void fn_82FC9C90(void *);

int fn_82FD3D30(Obj *o, Heap *h)
{
  void **p;
  int n;
  fn_82FC9C90(o->sub);
  p = o->slots;
  n = 2;
  do {
    if (*p != 0) {
      h->vt->f8(h, *p);
      *p = 0;
    }
    n--;
    p++;
  } while (n != 0);
  if (o != 0) {
    o->vt[0](o, 1);
  }
  h->vt->f8(h, o);
  return 1;
}
