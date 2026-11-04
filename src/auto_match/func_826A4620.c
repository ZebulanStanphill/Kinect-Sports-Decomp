typedef struct Sub_826A4620 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_826A4620;
typedef struct Obj_826A4620 { void *vt0; int pad[3]; void *vt4; int pad2[13]; Sub_826A4620 s; } Obj_826A4620;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_826A2BC8();
extern char lbl_82006E64[], lbl_82006F7C[], lbl_82006F28[], lbl_82006F24[];
Obj_826A4620 *fn_826A4620(Obj_826A4620 *p, void *a, void *b, void *c)
{
  Sub_826A4620 *s;
  fn_826A2BC8();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82006F7C;
  p->vt4 = lbl_82006F28;
  p->s.vt = lbl_82006F24;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
