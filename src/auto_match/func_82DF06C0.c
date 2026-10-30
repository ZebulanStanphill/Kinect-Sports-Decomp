typedef struct Alloc_82DF06C0 { struct { void *f0; void *(*alloc)(struct Alloc_82DF06C0 *, int); } *vt; } Alloc_82DF06C0;
typedef struct Heap_82DF06C0 { char pad[0x10]; Alloc_82DF06C0 *al; } Heap_82DF06C0;
typedef struct Blk_82DF06C0 { int a; unsigned short b; unsigned short c; int d; unsigned short e; unsigned short f; } Blk_82DF06C0;
typedef struct Obj_82DF06C0 { char pad[0x214]; Blk_82DF06C0 *blk; } Obj_82DF06C0;
extern Heap_82DF06C0 *fn_82CE5410(void);

char *fn_82DF06C0(Obj_82DF06C0 *o)
{
  Blk_82DF06C0 *p;
  Blk_82DF06C0 *mem;
  if (o->blk == 0) {
    Heap_82DF06C0 *h = fn_82CE5410();
    mem = (Blk_82DF06C0 *)h->al->vt->alloc(h->al, 0x10);
    if (mem != 0) {
      p = mem;
      p->a = 0;
      p->c = 0x8000;
      p->b = 0;
      p->d = 0;
      p->e = 0;
      p->f = 0x8000;
    } else p = 0;
    o->blk = p;
  }
  return (char *)o->blk + 8;
}
