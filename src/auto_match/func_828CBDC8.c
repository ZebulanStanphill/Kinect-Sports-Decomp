typedef struct { int a, b, c; } S90_828CBDC8;
typedef struct {
  void *vt;
  char pad4[0x4c];
  void *vt2;
  char pad54[0x2c];
  char sub[0x8];
  unsigned int f88;
  unsigned char f8c;
  unsigned char f8d;
  char pad8e[2];
  S90_828CBDC8 s90;
  char pad9c[4];
  int fa0;
  int fa4;
} Obj_828CBDC8;
extern int lbl_82025A98[];
extern int lbl_82025AA0[];
extern void fn_828BDDA0(void *);
extern void fn_828B5580(void *, void *);
extern int fn_823AA970(void *);
extern void fn_8288DB98(void *, void *, void *);

Obj_828CBDC8 *fn_828CBDC8(Obj_828CBDC8 *self, char *p2, unsigned char *p3, unsigned char p4, int p5)
{
  fn_828BDDA0(self);
  self->vt = lbl_82025AA0;
  self->vt2 = lbl_82025A98;
  fn_828B5580(self->sub, p2 + 0x14);
  self->f8c = p4;
  {
  S90_828CBDC8 *sp = &self->s90;
  self->f8d = 0;
  sp->a = 0;
  sp->b = 0;
  sp->c = 0;
  self->fa0 = p5;
  self->fa4 = p3 != 0 ? fn_823AA970(p3) : 0x10000;
  self->f88 = *(unsigned char *)(p2 + 0x5c);
  if (self->f8c != 0) {
    unsigned char c;
    self->f8d = p3[0x26];
    c = p3[0x26];
    self->f8d = c;
    if (c == 0) fn_8288DB98(p2, p3, sp);
  }
  }
  return self;
}
