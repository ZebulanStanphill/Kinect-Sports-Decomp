void *memset(void *dst, int value, unsigned int size);

struct Obj_82E569B0;
typedef struct Vt_82E569B0 {
  int f0;
  int (*f4)(struct Obj_82E569B0 *, struct Obj_82E569B0 *);
} Vt_82E569B0;
typedef struct Tail_82E569B0 {
  unsigned short a;
  unsigned char b;
} Tail_82E569B0;
typedef struct Obj_82E569B0 {
  Vt_82E569B0 *vt;
  int f4;
  unsigned f8;
  char pad0c[0x10 - 0xc];
  Tail_82E569B0 f10;
  unsigned char f14[0x50];
  struct Obj_82E569B0 *f64;
} Obj_82E569B0;

int fn_82E569B0(Obj_82E569B0 *self, int keep)
{
  Obj_82E569B0 *p = self;
  Obj_82E569B0 *cur;
  int r;

  if (keep == 0) {
    Obj_82E569B0 **pl = &self->f64;
    Tail_82E569B0 *t = &self->f10;
    self->f4 = 0;
    self->f8 = self->f8 & ~1u;
    t->a = 0;
    t->b = 0;
    memset(self->f14, 0, sizeof(self->f14));
    p = *pl;
    *pl = 0;
  }
  r = 0;
  while (p != 0) {
    cur = p;
    p = p->f64;
    r = self->vt->f4(self, cur);
    if (r < 0) break;
  }
  return r;
}
