extern int fn_826829A0();
extern int fn_8268C210();
extern int fn_826C09B0();
extern unsigned int lbl_82015E90;
extern unsigned int lbl_82015EE4;
typedef struct In { int x; } In;
typedef struct Mid { int f; In in; } Mid;
typedef struct Sub { int a; Mid m; } Sub;
typedef struct O { void *vt; int pad[3]; void *vt2; int pad2[7]; Sub s; } O;
static void Mid_init(Mid *m) { m->f = 2; fn_8268C210(&m->in); }
static void Sub_init(Sub *s) { s->a = 0; Mid_init(&s->m); }
O * fn_827AE478(O *p, int a, int b)
{
  fn_826C09B0();
  p->vt = &lbl_82015EE4;
  p->vt2 = &lbl_82015E90;
  Sub_init(&p->s);
  fn_826829A0(&p->vt2, a, b);
  return p;
}
