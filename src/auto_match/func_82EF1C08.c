struct Obj_82EF1C08;
typedef struct Vt_82EF1C08 {
  int f0;
  int (*f4)(struct Obj_82EF1C08 *, struct Obj_82EF1C08 *);
} Vt_82EF1C08;
typedef struct Tail_82EF1C08 {
  unsigned short a;
  unsigned char b;
} Tail_82EF1C08;
typedef struct Obj_82EF1C08 {
  Vt_82EF1C08 *vt;
  char pad_4[0x4]; int f4;
  unsigned f8;
  char pad_10[0x28];
  Tail_82EF1C08 f18;
  char pad_3c[0x324];
  struct Obj_82EF1C08 *f10c;
} Obj_82EF1C08;

int fn_82EF1C08(Obj_82EF1C08 *self, int keep)
{
  Obj_82EF1C08 *p = self;
  Obj_82EF1C08 *cur;
  int r;

  if (keep == 0) {
    Obj_82EF1C08 **pl = &self->f10c;
    Tail_82EF1C08 *t = &self->f18;
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
