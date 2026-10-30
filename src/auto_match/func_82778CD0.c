typedef struct Blk_82778CD0 { int w[9]; unsigned char b24; unsigned char b25; } Blk_82778CD0;
typedef struct Nd_82778CD0 {
  struct Nd_82778CD0 *next; struct Nd_82778CD0 *prev;
  Blk_82778CD0 *blk;
  struct Obj_82778CD0 *owner;
} Nd_82778CD0;
typedef struct Obj_82778CD0 {
  unsigned int heap;
  char pad4[0x24 - 4];
  char pool[0x14];
  Nd_82778CD0 *head;
  char pad3c[0x40 - 0x3c];
  char sub40[0x9e4 - 0x40];
  char cs[1];
} Obj_82778CD0;
typedef struct Arg5_82778CD0 { int pad[3]; int f0c; } Arg5_82778CD0;
extern Blk_82778CD0 *fn_8267B890(unsigned int, int, int);
extern Nd_82778CD0 *fn_82774AC0(void *);
extern void fn_82775EB0(Blk_82778CD0 *, int);
extern void fn_82776E60(Obj_82778CD0 *, int);
extern void fn_82777070(void);
extern void fn_82777888(Obj_82778CD0 *, Blk_82778CD0 *, int, Arg5_82778CD0 **, int, int, int, unsigned int);
extern void fn_827B7580(void *, int);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

static Blk_82778CD0 *NewBlk(unsigned int heap)
{
  Blk_82778CD0 *b = fn_8267B890(heap, 0x28, 0);
  if (b != 0) {
    b->w[0] = 0; b->w[1] = 0; b->w[2] = 0; b->w[3] = 0; b->w[4] = 0;
    b->w[5] = 0; b->w[6] = 0; b->w[7] = 0; b->w[8] = 0;
    b->b24 = 0;
    b->b25 = 0;
    return b;
  }
  return 0;
}

Nd_82778CD0 *fn_82778CD0(Obj_82778CD0 *o, unsigned int heap, Nd_82778CD0 *nd, int p4, Arg5_82778CD0 **p5, int p6, int p7, int p8, unsigned int p9)
{
  Blk_82778CD0 *old;
  RtlEnterCriticalSection(o->cs);
  if (heap == 0) heap = o->heap;
  fn_82776E60(o, (*p5)->f0c);
  if (nd != 0) {
    old = nd->blk;
    if (nd->owner == o) {
      if (old != 0) {
        if (p9 != 0) fn_82777070();
      } else {
        nd->blk = NewBlk(heap);
      }
      goto done;
    }
    if (old != 0) fn_82775EB0(old, 1);
  }
  nd = fn_82774AC0(o->pool);
  nd->owner = o;
  nd->blk = NewBlk(heap);
  nd->next = o->head;
  nd->prev = (Nd_82778CD0 *)&o->head;
  o->head->prev = nd;
  o->head = nd;
done:
  fn_82777888(o, nd->blk, p4, p5, p6, p7, p8, p9);
  fn_827B7580(o->sub40, (*p5)->f0c);
  RtlLeaveCriticalSection(o->cs);
  return nd;
}
