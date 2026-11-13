extern void fn_828BDDA0(void *);
extern void fn_82899030(void *, int, int);
extern void fn_828B5580(void *, void *);
extern char lbl_82023ABC[];
extern char lbl_82023AC0[];
extern char lbl_82023C3C[];

typedef struct Mid { int a; char str[8]; } Mid;
typedef struct It { int f0; Mid mid; int f10; } It;
typedef struct S98 { void *vt; Mid mid; int f8; unsigned char flag; } S98;
typedef struct Q { char pad[0x14]; It *it; int f18; } Q;
typedef struct P {
  void *vt;
  char pad[0x50 - 4];
  void *f50;
  char pad2[0x80 - 0x54];
  int f80, f84;
  char f88[0x10];
  S98 s;
  int f_b0;
} P;

P *fn_8289A718(P *p, Q *q, int p3, int p4, unsigned char p5, int p6)
{
  S98 *s;
  It *it;
  Mid *m;
  Mid *im;
  fn_828BDDA0(p);
  p->vt = lbl_82023AC0;
  p->f50 = lbl_82023ABC;
  p->f80 = q->f18;
  p->f84 = (int)q;
  fn_82899030(p->f88, p3, p4);
  it = q->it;
  s = &p->s;
  s->vt = lbl_82023C3C;
  m = &s->mid;
  im = &it->mid;
  m->a = im->a;
  fn_828B5580(m->str, im->str);
  s->f8 = it->f10;
  p->s.flag = p5;
  p->f_b0 = p6;
  return p;
}
