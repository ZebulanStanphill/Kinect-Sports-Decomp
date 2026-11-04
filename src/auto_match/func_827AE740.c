typedef struct Sub_827AE740 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_827AE740;
typedef struct Obj_827AE740 { void *vt0; int pad[3]; void *vt4; int pad2[11]; Sub_827AE740 s; } Obj_827AE740;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_827AE478();
extern char lbl_82006E64[], lbl_82015DE4[], lbl_82015D90[], lbl_82015D88[];
Obj_827AE740 *fn_827AE740(Obj_827AE740 *p, void *a, void *b, void *c)
{
  Sub_827AE740 *s;
  fn_827AE478();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82015DE4;
  p->vt4 = lbl_82015D90;
  p->s.vt = lbl_82015D88;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
