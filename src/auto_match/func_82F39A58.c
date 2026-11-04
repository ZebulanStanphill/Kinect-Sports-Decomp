struct Obj_82F39A58;
typedef struct Vt_82F39A58 {
  int f0;
  int (*f4)(struct Obj_82F39A58 *, struct Obj_82F39A58 *);
} Vt_82F39A58;
typedef struct Tail_82F39A58 {
  unsigned short a;
  unsigned char b;
} Tail_82F39A58;
typedef struct Obj_82F39A58 {
  Vt_82F39A58 *vt;
  int f4;
  unsigned f8;
  char pad0c[0xe8 - 0xc];
  Tail_82F39A58 f18;
  char pad_ec[0x1130];
  struct Obj_82F39A58 *f10c;
} Obj_82F39A58;

int fn_82F39A58(Obj_82F39A58 *self, int keep)
{
  Obj_82F39A58 *p = self;
  Obj_82F39A58 *cur;
  int r;

  if (keep == 0) {
    Obj_82F39A58 **pl = &self->f10c;
    Tail_82F39A58 *t = &self->f18;
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
