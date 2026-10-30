typedef struct { void *vt; int a, b, c; } Sub_827AE550;
typedef struct { int x; int y; } Z_827AE550;
typedef struct { int v; Z_827AE550 z; } Inner_827AE550;
typedef struct { int a; Inner_827AE550 b; } Mid_827AE550;
typedef struct {
  void *vt;
  int pad1[3];
  Sub_827AE550 sub;
  int pad2[4];
  Mid_827AE550 mid;
} Obj_827AE550;
typedef struct { char pad[0x78]; int r; } Q_827AE550;
extern void *fn_826C0B08(void *p, void *q);
extern void fn_8268C210(void *p);
extern unsigned int fn_826B14D8(int a, int b);
extern void fn_826829A0(void *a, void *b, unsigned int c);
extern void fn_82720700(void *a, void *b);
extern void fn_8271FDB0(void *a, void *b, void *c);
extern char lbl_82015E90[];
extern char lbl_82015EE4[];

Obj_827AE550 *fn_827AE550(Obj_827AE550 *p, Q_827AE550 *q)
{
    Sub_827AE550 *s;
  Mid_827AE550 *m;
  Inner_827AE550 *b;
  unsigned int n;
  fn_826C0B08(p, q);
  p->vt = lbl_82015EE4;
  p->sub.vt = lbl_82015E90;
  m = &p->mid;
  m->a = 0;
  b = &m->b;
  b->v = 2;
  s = &p->sub;
  fn_8268C210(&b->z);
  n = fn_826B14D8(q->r, 0x21);
  fn_826829A0(s, &q->r, n);
  fn_82720700(&q->r, s);
  fn_8271FDB0(q, s, s);
  return p;
}
