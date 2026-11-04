struct Obj_82E77258;
typedef struct Vt_82E77258 {
  int f0;
  int (*f4)(struct Obj_82E77258 *, struct Obj_82E77258 *);
} Vt_82E77258;
typedef struct Tail_82E77258 {
  unsigned short a;
  unsigned char b;
} Tail_82E77258;
typedef struct Obj_82E77258 {
  Vt_82E77258 *vt;
  int f4;
  unsigned f8;
  char pad0c[0x18 - 0xc];
  Tail_82E77258 f18;
  char pad1c[0x10c - 0x1c];
  struct Obj_82E77258 *f10c;
} Obj_82E77258;

int fn_82E77258(Obj_82E77258 *self, int keep)
{
  Obj_82E77258 *p = self;
  Obj_82E77258 *cur;
  int r;

  if (keep == 0) {
    Obj_82E77258 **pl = &self->f10c;
    Tail_82E77258 *t = &self->f18;
    self->f4 = 0;
    self->f8 = self->f8 & ~1u;
    t->a = 0;
    t->b = 0;
    p = *pl;
    *pl = 0;
  }
  r = 0;
  while (p != 0) {
    cur = p;
    p = p->f10c;
    r = self->vt->f4(self, cur);
    if (r < 0) break;
  }
  return r;
}
