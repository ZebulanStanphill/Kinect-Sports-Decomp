typedef struct { int f0; int f4; unsigned cap; unsigned head; unsigned count; } Ring_825AC888;
typedef struct { char pad[0xfc]; Ring_825AC888 ring; } Item_825AC888;
typedef struct { char pad0[0x6c]; void *f6c; char pad1[0x10]; unsigned f80; char f84[1]; } Obj_825AC888;
extern Item_825AC888 *fn_8288F1E8(void *a, void *b);
extern unsigned char fn_8288B760(Item_825AC888 *p);
extern void fn_825AC9E8(Ring_825AC888 *r, unsigned *v);

static void Pop(Ring_825AC888 *r)
{
  unsigned n = r->count;
  if (n != 0) {
    r->head = r->head + 1;
    if (r->cap * 4 <= r->head) r->head = 0;
    r->count = n - 1;
    if (r->count == 0) r->head = 0;
  }
}

int fn_825AC888(Obj_825AC888 *o)
{
  Item_825AC888 *it = fn_8288F1E8(o->f6c, o->f84);
  if (it != 0) {
    unsigned v = o->f80;
    if (fn_8288B760(it) == 0) {
      fn_825AC9E8(&it->ring, &v);
      if (it->ring.count > 10) Pop(&it->ring);
    }
  }
  return 1;
}
