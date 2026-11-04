typedef struct Sub_8271CDB0 { void *vt; int a, b; unsigned char c; int d, e; unsigned char f; int g; } Sub_8271CDB0;
typedef struct Obj_8271CDB0 { void *vt0; int pad[3]; void *vt4; int pad2[11]; Sub_8271CDB0 s; } Obj_8271CDB0;
extern int fn_826C0608(void *, void *, void *, void *);
extern int fn_8271CB60();
extern char lbl_82006E64[], lbl_8200FCCC[], lbl_8200FC78[], lbl_8200FC70[];
Obj_8271CDB0 *fn_8271CDB0(Obj_8271CDB0 *p, void *a, void *b, void *c)
{
  Sub_8271CDB0 *s;
  fn_8271CB60();
  s = &p->s;
  s->vt = lbl_82006E64;
  p->s.c = 0;
  p->s.a = 0;
  s->b = 0;
  p->s.f = 0;
  p->s.d = 0;
  p->s.e = 0;
  s->g = 0;
  p->vt0 = lbl_8200FCCC;
  p->vt4 = lbl_8200FC78;
  p->s.vt = lbl_8200FC70;
  fn_826C0608(&p->s, p, a, c);
  return p;
}
