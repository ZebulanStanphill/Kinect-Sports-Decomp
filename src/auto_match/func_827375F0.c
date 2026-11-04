typedef struct Sub_827375F0 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_827375F0;
typedef struct Obj_827375F0 { void *vt0; int pad[3]; void *vt4; int pad2[24]; Sub_827375F0 s; } Obj_827375F0;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_82735870();
extern char lbl_82006E64[], lbl_820118D0[], lbl_820117B0[], lbl_820117A8[];
Obj_827375F0 *fn_827375F0(Obj_827375F0 *p, void *a, void *b, void *c)
{
  Sub_827375F0 *s;
  fn_82735870();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_820118D0;
  p->vt4 = lbl_820117B0;
  p->s.vt = lbl_820117A8;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
