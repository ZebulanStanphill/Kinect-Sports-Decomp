typedef struct Sub_827511A8 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_827511A8;
typedef struct Obj_827511A8 { void *vt0; int pad[3]; void *vt4; int pad2[10]; Sub_827511A8 s; } Obj_827511A8;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_82750A58();
extern char lbl_82006E64[], lbl_82013A6C[], lbl_82013A18[], lbl_82013A10[];
Obj_827511A8 *fn_827511A8(Obj_827511A8 *p, void *a, void *b, void *c)
{
  Sub_827511A8 *s;
  fn_82750A58();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82013A6C;
  p->vt4 = lbl_82013A18;
  p->s.vt = lbl_82013A10;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
