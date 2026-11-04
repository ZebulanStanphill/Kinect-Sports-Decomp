struct Obj_82E3BCC8;
typedef struct Vt_82E3BCC8 {
  int f0;
  int (*f4)(struct Obj_82E3BCC8 *, struct Obj_82E3BCC8 *);
} Vt_82E3BCC8;
typedef struct Tail_82E3BCC8 {
  unsigned short a;
  unsigned char b;
} Tail_82E3BCC8;
typedef struct Obj_82E3BCC8 {
  Vt_82E3BCC8 *vt;
  int f4;
  unsigned f8;
  char pad0c[0xe - 0xc];
  Tail_82E3BCC8 f18;
  char pad_12[0x2a];
  struct Obj_82E3BCC8 *f10c;
} Obj_82E3BCC8;

int fn_82E3BCC8(Obj_82E3BCC8 *self, int keep)
{
  Obj_82E3BCC8 *p = self;
  Obj_82E3BCC8 *cur;
  int r;

  if (keep == 0) {
    Obj_82E3BCC8 **pl = &self->f10c;
    Tail_82E3BCC8 *t = &self->f18;
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
