extern unsigned int lbl_821C0DB8;
extern unsigned int lbl_821C23D8;
extern void fn_822315A0(unsigned rep);
extern void fn_824CA800(void *p, int a);
extern void fn_8255F0B8(void *p, int a, int b);
extern void *fn_8265C9E0(unsigned n);
extern void fn_827F0FB8(void *self, void *m, int f);
extern void fn_827F1148(void *self, int a, int b);
extern void fn_827F4818(void *tmp, int a, void *m1, void *m2);
extern void fn_827F5AF8(void *dst, void *src);

typedef struct M_8250E2F8 { char pad[0x170]; int f170, f174, f178; char pad2[0x1b0 - 0x17c]; } M_8250E2F8;
typedef struct Rep_8250E2F8 { void *vt; int uses; int weak; int f0c; } Rep_8250E2F8;
typedef struct Tmp_8250E2F8 { char pad[0x2c]; int f2c; } Tmp_8250E2F8;
typedef struct SP_8250E2F8 { int p; struct Rep_8250E2F8 *rep; } SP_8250E2F8;
typedef struct Obj_8250E2F8 {
  void *vt;
  char pad0[0x190 - 4];
  M_8250E2F8 ma;
  M_8250E2F8 mb;
  char c4f0[0xe8];
  SP_8250E2F8 sp;
  int f5e0, f5e4;
} Obj_8250E2F8;

Obj_8250E2F8 *fn_8250E2F8(Obj_8250E2F8 *o, int a, unsigned c, int d, int e)
{
  Tmp_8250E2F8 tmp;
  M_8250E2F8 *m1;
  M_8250E2F8 *m2;
  Rep_8250E2F8 *r;
  Rep_8250E2F8 *nr;
  SP_8250E2F8 *q;
  fn_827F1148(o, a, 0);
  o->vt = &lbl_821C23D8;
  m1 = &o->ma;
  fn_8255F0B8(m1, a, 0);
  m2 = &o->mb;
  fn_8255F0B8(m2, a, 0);
  fn_827F4818(&tmp, 0, m1, m2);
  tmp.f2c = 1;
  fn_827F5AF8(o->c4f0, &tmp);
  o->sp.p = 0;
  o->sp.rep = 0;
  q = &o->sp;
  r = (Rep_8250E2F8 *)fn_8265C9E0(0x10);
  if (r != 0) {
    r->uses = 1;
    r->weak = 1;
    r->f0c = 0;
    r->vt = &lbl_821C0DB8;
    nr = r;
  } else {
    nr = 0;
  }
  if (q->rep != 0) fn_822315A0((unsigned)q->rep);
  q->rep = nr;
  q->p = 0;
  o->f5e0 = 0;
  o->f5e4 = 0;
  fn_827F0FB8(o, m1, 0);
  fn_827F0FB8(o, m2, 0);
  fn_827F0FB8(o, o->c4f0, 1);
  if (c != 0) {
    m1->f170 = c;
    m1->f178 = d;
    m1->f174 = 0;
    m2->f170 = c;
    m2->f174 = 0;
    m2->f178 = d;
  }
  fn_824CA800((char *)o + 0x320, e);
  *(int *)((char *)o + 0x338) = 1;
  fn_824CA800((char *)o + 0x4d0, e);
  *(int *)((char *)o + 0x4e8) = 1;
  return o;
}
