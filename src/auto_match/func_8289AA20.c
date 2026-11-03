typedef struct { int a; int b[2]; } Mid;
typedef struct { int p0; Mid t; int c10; } Src;
typedef struct { int pad[5]; Src *src; int p18; } Par;
typedef struct {
  int vt;
  Mid m;
  int c;
  unsigned char flag;
  char pad[3];
  int d;
} Sub;
typedef struct {
  int vt;
  char pad4[0x4c];
  int vt50;
  char pad54[0x2c];
  int f80;
  Par *f84;
  int f88[4];
  Sub sub;
} Obj;
extern void fn_828BDDA0();
extern void fn_8288BB90(void *, int);
extern void fn_828B5580(void *, void *);
extern char lbl_82023ABC[];
extern char lbl_82023AC0[];
extern char lbl_82023C3C[];

static __forceinline void MidCopy(Mid *d, Mid *s)
{
  d->a = s->a;
  fn_828B5580(&d->b, &s->b);
}

Obj *fn_8289AA20(Obj *o, Par *par, int p3, unsigned char p4, int p5)
{
  Src *y;
  Sub *s;
  Mid *m;
  Mid *t;
  fn_828BDDA0();
  o->vt = (int)lbl_82023AC0;
  o->vt50 = (int)lbl_82023ABC;
  o->f80 = par->p18;
  o->f84 = par;
  fn_8288BB90(&o->f88, p3);
  y = par->src;
  s = &o->sub;
  s->vt = (int)lbl_82023C3C;
  MidCopy(&s->m, &y->t);
  s->c = y->c10;
  o->sub.flag = p4;
  o->sub.d = p5;
  return o;
}
