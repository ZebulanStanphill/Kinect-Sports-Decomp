typedef struct Sub_8274D798 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_8274D798;
typedef struct Obj_8274D798 { void *vt0; int pad[3]; void *vt4; int pad2[9]; Sub_8274D798 s; } Obj_8274D798;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_8274D498();
extern char lbl_82006E64[], lbl_82013660[], lbl_820135B0[], lbl_820135A8[];
Obj_8274D798 *fn_8274D798(Obj_8274D798 *p, void *a, void *b, void *c)
{
  Sub_8274D798 *s;
  fn_8274D498();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82013660;
  p->vt4 = lbl_820135B0;
  p->s.vt = lbl_820135A8;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
