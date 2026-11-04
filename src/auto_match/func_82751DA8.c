typedef struct Sub_82751DA8 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_82751DA8;
typedef struct Obj_82751DA8 { void *vt0; int pad[3]; void *vt4; int pad2[10]; Sub_82751DA8 s; } Obj_82751DA8;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_82751990();
extern char lbl_82006E64[], lbl_82013BD4[], lbl_82013C30[], lbl_82013BD0[];
Obj_82751DA8 *fn_82751DA8(Obj_82751DA8 *p, void *a, void *b, void *c)
{
  Sub_82751DA8 *s;
  fn_82751990();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82013BD4;
  p->vt4 = lbl_82013C30;
  p->s.vt = lbl_82013BD0;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
