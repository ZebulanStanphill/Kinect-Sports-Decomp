typedef struct Sub_826D2390 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_826D2390;
typedef struct Obj_826D2390 { void *vt0; int pad[3]; void *vt4; int pad2[9]; Sub_826D2390 s; } Obj_826D2390;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_826D1B88();
extern char lbl_82006E64[], lbl_8200BF48[], lbl_8200C0D0[], lbl_8200BF44[];
Obj_826D2390 *fn_826D2390(Obj_826D2390 *p, void *a, void *b, void *c)
{
  Sub_826D2390 *s;
  fn_826D1B88();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_8200BF48;
  p->vt4 = lbl_8200C0D0;
  p->s.vt = lbl_8200BF44;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
