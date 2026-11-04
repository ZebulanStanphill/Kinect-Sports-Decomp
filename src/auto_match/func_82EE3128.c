struct Obj_82EE3128;
typedef struct Vt_82EE3128 {
  int f0;
  int (*f4)(struct Obj_82EE3128 *, struct Obj_82EE3128 *);
} Vt_82EE3128;
typedef struct Tail_82EE3128 {
  unsigned short a;
  unsigned char b;
} Tail_82EE3128;
typedef struct Obj_82EE3128 {
  Vt_82EE3128 *vt;
  int f4;
  unsigned f8;
  char pad0c[0x14 - 0xc];
  Tail_82EE3128 f18;
  char pad_18[0xa0];
  struct Obj_82EE3128 *f10c;
} Obj_82EE3128;

int fn_82EE3128(Obj_82EE3128 *self, int keep)
{
  Obj_82EE3128 *p = self;
  Obj_82EE3128 *cur;
  int r;

  if (keep == 0) {
    Obj_82EE3128 **pl = &self->f10c;
    Tail_82EE3128 *t = &self->f18;
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
