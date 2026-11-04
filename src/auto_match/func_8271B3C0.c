typedef struct Sub_8271B3C0 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_8271B3C0;
typedef struct Obj_8271B3C0 { void *vt0; int pad[3]; void *vt4; int pad2[8]; Sub_8271B3C0 s; } Obj_8271B3C0;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_8271B2A0();
extern char lbl_82006E64[], lbl_8200FBB4[], lbl_8200FB60[], lbl_8200FB5C[];
Obj_8271B3C0 *fn_8271B3C0(Obj_8271B3C0 *p, void *a, void *b, void *c)
{
  Sub_8271B3C0 *s;
  fn_8271B2A0();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_8200FBB4;
  p->vt4 = lbl_8200FB60;
  p->s.vt = lbl_8200FB5C;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
