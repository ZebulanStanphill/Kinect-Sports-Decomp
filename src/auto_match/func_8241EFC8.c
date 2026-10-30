struct Ctx_8241EFC8;
struct Obj_8241EFC8;

typedef struct {
  char pad0[4];
  int f4;
  char pad8[0xc];
  int f14;
  char pad18[0x20];
  unsigned int f38;
  char pad3c[4];
  unsigned int f40;
  char pad44[0x1ac - 0x44];
} Ent_8241EFC8;

typedef struct {
  char pad0[0x278];
  int f278;
  int f27c;
} A_8241EFC8;

typedef struct {
  char pad0[0x44];
  int f44;
  char pad48[0xc];
  unsigned int f54;
} B_8241EFC8;

typedef struct {
  char pad0[0x24];
  int f24;
  char pad28[0x168 - 0x28];
  unsigned int f168;
  unsigned int f16c;
} C_8241EFC8;

typedef struct Ctx_8241EFC8 {
  char pad0[0x1bc4];
  char s1bc4[0xfc];
  char s1cc0[0x2b20 - 0x1cc0];
  struct Obj_8241EFC8 *f2b20;
  char pad2b24[0x2b50 - 0x2b24];
  int f2b50;
} Ctx_8241EFC8;

typedef struct Obj_8241EFC8 {
  Ctx_8241EFC8 *ctx;
  int f4;
  Ent_8241EFC8 *ents;
  char padc[0x18 - 0xc];
  unsigned int idx;
  int f1c;
  A_8241EFC8 **abeg;
  A_8241EFC8 **aend;
  char pad28[0x88 - 0x28];
  B_8241EFC8 **bbeg;
  B_8241EFC8 **bend;
  char pad90[0x2dc - 0x90];
  int f2dc;
} Obj_8241EFC8;

extern void fn_82414950(int, int, int);
extern C_8241EFC8 *fn_82417F58(Obj_8241EFC8 *);
extern void fn_8241F2A0(Obj_8241EFC8 *, Ent_8241EFC8 *);
extern void fn_8241F440(Obj_8241EFC8 *, Ent_8241EFC8 *);
extern void fn_8241F610(Obj_8241EFC8 *);
extern unsigned char fn_8288B760(unsigned int);

void fn_8241EFC8(Obj_8241EFC8 *self, unsigned int idx)
{
  Ent_8241EFC8 *e;
  char *p;
  A_8241EFC8 *a;
  B_8241EFC8 *b;
  A_8241EFC8 **pa;
  B_8241EFC8 **pb;
  C_8241EFC8 *c;
  int v;

  self->idx = idx;
  self->f1c = 0;
  e = &self->ents[idx];
  fn_8241F440(self, e);
  if (self == self->ctx->f2b20 && (self->idx != 0 || e->f40 != 1)) {
    fn_82414950(self->ctx->f2b50, e->f14, 0x1e);
  }
  fn_8241F610(self);
  if (e->f38 == 0) {
    fn_8241F2A0(self, e);
  }
  e->f38 = e->f38 + 1;
  if (self->ents[self->idx].f4 != 0) {
    p = self->ctx->s1bc4;
  } else {
    p = self->ctx->s1cc0;
  }
  for (pa = self->abeg; pa != self->aend; pa++) {
    a = *pa;
    a->f278 = (int)p;
    a->f27c = 0;
  }
  for (pb = self->bbeg; pb != self->bend; pb++) {
    b = *pb;
    if ((unsigned int)p != b->f54) {
      b->f54 = (int)p;
      b->f44 = 1;
    }
  }
  c = fn_82417F58(self);
  if (c != 0 && c->f24 != 0) {
    if (c->f168 != 0) {
      v = fn_8288B760(c->f168);
    } else {
      v = c->f16c;
    }
    if (v != 0) {
      self->f2dc = 0;
      return;
    }
  }
  self->f2dc = 2;
}
