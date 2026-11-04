typedef struct Sub_8273E080 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_8273E080;
typedef struct Obj_8273E080 { void *vt0; int pad[3]; void *vt4; int pad2[9]; Sub_8273E080 s; } Obj_8273E080;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_8273DAB8();
extern char lbl_82006E64[], lbl_820121BC[], lbl_82012168[], lbl_82012280[];
Obj_8273E080 *fn_8273E080(Obj_8273E080 *p, void *a, void *b, void *c)
{
  Sub_8273E080 *s;
  fn_8273DAB8();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_820121BC;
  p->vt4 = lbl_82012168;
  p->s.vt = lbl_82012280;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
