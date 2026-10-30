struct Heap_82F9ABC8;
typedef struct HeapVT_82F9ABC8 { void *pad0[2]; void (*free)(struct Heap_82F9ABC8 *, void *); } HeapVT_82F9ABC8;
typedef struct Heap_82F9ABC8 { HeapVT_82F9ABC8 *vt; } Heap_82F9ABC8;
struct Obj_82F9ABC8;
typedef struct ObjVT_82F9ABC8 { void (*dtor)(struct Obj_82F9ABC8 *, int); } ObjVT_82F9ABC8;
typedef struct Obj_82F9ABC8 {
  ObjVT_82F9ABC8 *vt;
  char pad0[0x10];
  unsigned int size;
  char pad1[0xf8];
  void *slots[1];
} Obj_82F9ABC8;

int fn_82F9ABC8(Obj_82F9ABC8 *p, Heap_82F9ABC8 *h)
{
  unsigned int i = 0;
  void **s;

  if ((p->size & ~3u) != 0) {
    s = &p->slots[0];
    do {
      if (*s != 0) {
        h->vt->free(h, *s);
        *s = 0;
      }
      i++;
      s++;
    } while (i < p->size >> 2);
  }
  if (((void **)p)[0x1d] != 0) {
    h->vt->free(h, ((void **)p)[0x1d]);
    ((void **)p)[0x1d] = 0;
  }
  p->vt->dtor(p, 1);
  h->vt->free(h, p);
  return 1;
}
