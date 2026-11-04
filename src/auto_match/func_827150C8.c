typedef struct Sub_827150C8 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_827150C8;
typedef struct Obj_827150C8 { void *vt0; int pad[3]; void *vt4; int pad2[8]; Sub_827150C8 s; } Obj_827150C8;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_82714BA8();
extern char lbl_82006E64[], lbl_8200F488[], lbl_8200F588[], lbl_8200F484[];
Obj_827150C8 *fn_827150C8(Obj_827150C8 *p, void *a, void *b, void *c)
{
  Sub_827150C8 *s;
  fn_82714BA8();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_8200F488;
  p->vt4 = lbl_8200F588;
  p->s.vt = lbl_8200F484;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
