struct Tgt_822B73D8;
typedef struct VT8_822B73D8 { void *s[2]; void (*f8)(struct Tgt_822B73D8 *self); } VT8_822B73D8;
typedef struct Tgt_822B73D8 { VT8_822B73D8 *vt; } Tgt_822B73D8;
struct Elem_822B73D8;
typedef struct VTE_822B73D8 { void *s[9]; void (*f24)(struct Elem_822B73D8 *self, int a); } VTE_822B73D8;
typedef struct { char pad[0x90]; int v90; } Inner_822B73D8;
typedef struct { char pad[0x8c0]; Inner_822B73D8 *in; } Outer_822B73D8;
typedef struct Elem_822B73D8 {
  VTE_822B73D8 *vt;
  int pad[4];
  Outer_822B73D8 *outer;
  int pad2[3];
  unsigned int tgt;
} Elem_822B73D8;
typedef struct { int pad; Elem_822B73D8 *cur; Tgt_822B73D8 *tgt; } Obj_822B73D8;

int fn_822B73D8(Obj_822B73D8 *self, Elem_822B73D8 *e)
{
  if (e->tgt == (unsigned int)self->tgt) {
    if (e == self->cur)
      return 0;
    if (self->tgt != 0)
      self->tgt->vt->f8(self->tgt);
    if (e->tgt != 0) {
      e->tgt = 0;
      e->outer->in->v90 = 0;
      e->vt->f24(e, 0);
    }
  }
  return 1;
}
