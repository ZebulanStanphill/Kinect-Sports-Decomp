typedef struct Sub_82713850 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_82713850;
typedef struct Obj_82713850 { void *vt0; int pad[3]; void *vt4; int pad2[11]; Sub_82713850 s; } Obj_82713850;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_827137E8();
extern char lbl_82006E64[], lbl_8200F254[], lbl_8200F280[], lbl_8200F278[];
Obj_82713850 *fn_82713850(Obj_82713850 *p, void *a, void *b, void *c)
{
  Sub_82713850 *s;
  fn_827137E8();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_8200F254;
  p->vt4 = lbl_8200F280;
  p->s.vt = lbl_8200F278;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
