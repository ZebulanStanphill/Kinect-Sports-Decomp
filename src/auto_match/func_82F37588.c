struct Obj_82F37588;
typedef struct Vt_82F37588 {
  int f0;
  int (*f4)(struct Obj_82F37588 *, struct Obj_82F37588 *);
} Vt_82F37588;
typedef struct Tail_82F37588 {
  unsigned short a;
  unsigned char b;
} Tail_82F37588;
typedef struct Obj_82F37588 {
  Vt_82F37588 *vt;
  int f4;
  unsigned f8;
  char pad0c[0x10 - 0xc];
  Tail_82F37588 f18;
  char pad_14[0x50];
  struct Obj_82F37588 *f10c;
} Obj_82F37588;

int fn_82F37588(Obj_82F37588 *self, int keep)
{
  Obj_82F37588 *p = self;
  Obj_82F37588 *cur;
  int r;

  if (keep == 0) {
    Obj_82F37588 **pl = &self->f10c;
    Tail_82F37588 *t = &self->f18;
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
