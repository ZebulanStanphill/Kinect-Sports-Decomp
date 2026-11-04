typedef struct Sub_82739298 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_82739298;
typedef struct Obj_82739298 { void *vt0; int pad[3]; void *vt4; int pad2[12]; Sub_82739298 s; } Obj_82739298;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_827391E8();
extern char lbl_82006E64[], lbl_82011B9C[], lbl_82011B48[], lbl_82011BC0[];
Obj_82739298 *fn_82739298(Obj_82739298 *p, void *a, void *b, void *c)
{
  Sub_82739298 *s;
  fn_827391E8();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82011B9C;
  p->vt4 = lbl_82011B48;
  p->s.vt = lbl_82011BC0;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
