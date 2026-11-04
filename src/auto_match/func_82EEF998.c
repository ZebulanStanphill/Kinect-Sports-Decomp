struct Obj_82EEF998;
typedef struct Vt_82EEF998 {
  int f0;
  int (*f4)(struct Obj_82EEF998 *, struct Obj_82EEF998 *);
} Vt_82EEF998;
typedef struct Tail_82EEF998 {
  unsigned short a;
  unsigned char b;
} Tail_82EEF998;
typedef struct Obj_82EEF998 {
  Vt_82EEF998 *vt;
  int f4;
  unsigned f8;
  char pad0c[0x1c - 0xc];
  Tail_82EEF998 f18;
  char pad_20[0x140];
  struct Obj_82EEF998 *f10c;
} Obj_82EEF998;

int fn_82EEF998(Obj_82EEF998 *self, int keep)
{
  Obj_82EEF998 *p = self;
  Obj_82EEF998 *cur;
  int r;

  if (keep == 0) {
    Obj_82EEF998 **pl = &self->f10c;
    Tail_82EEF998 *t = &self->f18;
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
