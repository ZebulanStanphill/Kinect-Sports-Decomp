typedef struct Sub_826C2928 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_826C2928;
typedef struct Obj_826C2928 { void *vt0; int pad[3]; void *vt4; int pad2[7]; Sub_826C2928 s; } Obj_826C2928;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_826C0A68();
extern char lbl_82006E64[], lbl_8200F0B0[], lbl_82010284[], lbl_82013318[];
Obj_826C2928 *fn_826C2928(Obj_826C2928 *p, void *a, void *b, void *c)
{
  Sub_826C2928 *s;
  fn_826C0A68();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82010284;
  p->vt4 = lbl_82013318;
  p->s.vt = lbl_8200F0B0;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
