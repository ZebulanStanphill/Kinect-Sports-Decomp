typedef struct Sub_82740EA8 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_82740EA8;
typedef struct Obj_82740EA8 { void *vt0; int pad[3]; void *vt4; int pad2[12]; Sub_82740EA8 s; } Obj_82740EA8;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_827402A0();
extern char lbl_82006E64[], lbl_82012464[], lbl_82012410[], lbl_820124CC[];
Obj_82740EA8 *fn_82740EA8(Obj_82740EA8 *p, void *a, void *b, void *c)
{
  Sub_82740EA8 *s;
  fn_827402A0();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82012464;
  p->vt4 = lbl_82012410;
  p->s.vt = lbl_820124CC;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
