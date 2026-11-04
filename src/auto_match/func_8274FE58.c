typedef struct Sub_8274FE58 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_8274FE58;
typedef struct Obj_8274FE58 { void *vt0; int pad[3]; void *vt4; int pad2[10]; Sub_8274FE58 s; } Obj_8274FE58;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_8274F528();
extern char lbl_82006E64[], lbl_8201391C[], lbl_82013810[], lbl_82013808[];
Obj_8274FE58 *fn_8274FE58(Obj_8274FE58 *p, void *a, void *b, void *c)
{
  Sub_8274FE58 *s;
  fn_8274F528();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_8201391C;
  p->vt4 = lbl_82013810;
  p->s.vt = lbl_82013808;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
