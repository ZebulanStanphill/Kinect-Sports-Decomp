struct Rc_82E74768;
typedef struct { void *f0; void (*AddRef)(struct Rc_82E74768 *); } RcVt_82E74768;
typedef struct Rc_82E74768 { RcVt_82E74768 *vt; } Rc_82E74768;
typedef struct { int a, b, c, d, e, f, g; } Sub_82E74768;
typedef struct {
  int f0, f4, f8, fc;
  Sub_82E74768 s;
  char pad[0x1d0 - 0x2c];
  unsigned __int64 q1d0; Rc_82E74768 *rc; unsigned __int64 q1e0; unsigned __int64 q1e8; int f1f0; unsigned __int64 q1f8, q200, q208;
} Obj_82E74768;
extern void fn_82E73080(void *p);
extern void fn_82E74190(void *p, int n);

static void Sub_init(Sub_82E74768 *s)
{
  s->e = 0;
  s->f = 0;
  s->g = 0;
  { int *t = &s->c; t[0] = 0; t[-1] = 0; t[-2] = 0; t[1] = 0; }
}

Obj_82E74768 *fn_82E74768(Obj_82E74768 *p, int a, int b, int c, Rc_82E74768 *rc, int d)
{
  p->f0 = a;
  p->f4 = b;
  p->f8 = c;
  p->fc = d;
  Sub_init(&p->s);
  p->q1d0 = 0;
  p->rc = rc;
  p->q1e0 = 0;
  p->q1e8 = 0;
  p->f1f0 = 0;
  p->q1f8 = 0;
  p->q200 = 0;
  p->q208 = 0;
  if (rc != 0) rc->vt->AddRef(rc);
  fn_82E74190(&p->s.e, 0x10);
  fn_82E73080(p);
  return p;
}
