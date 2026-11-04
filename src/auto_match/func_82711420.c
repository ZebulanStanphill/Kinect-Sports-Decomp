typedef struct Sub_82711420 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_82711420;
typedef struct Obj_82711420 { void *vt0; int pad[3]; void *vt4; int pad2[8]; Sub_82711420 s; } Obj_82711420;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_82711098();
extern char lbl_82006E64[], lbl_8200E89C[], lbl_8200E980[], lbl_8200E898[];
Obj_82711420 *fn_82711420(Obj_82711420 *p, void *a, void *b, void *c)
{
  Sub_82711420 *s;
  fn_82711098();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_8200E89C;
  p->vt4 = lbl_8200E980;
  p->s.vt = lbl_8200E898;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
