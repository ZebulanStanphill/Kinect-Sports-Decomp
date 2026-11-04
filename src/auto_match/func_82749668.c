typedef struct Sub_82749668 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_82749668;
typedef struct Obj_82749668 { void *vt0; int pad[3]; void *vt4; int pad2[15]; Sub_82749668 s; } Obj_82749668;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_82749358();
extern char lbl_82006E64[], lbl_82012D58[], lbl_82012C60[], lbl_82012D54[];
Obj_82749668 *fn_82749668(Obj_82749668 *p, void *a, void *b, void *c)
{
  Sub_82749668 *s;
  fn_82749358();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_82012D58;
  p->vt4 = lbl_82012C60;
  p->s.vt = lbl_82012D54;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
