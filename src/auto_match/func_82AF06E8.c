typedef struct { unsigned a, b, c, d; unsigned e; } Arg;
typedef struct { unsigned pad:4; unsigned g:3; unsigned rest:25; } W;
typedef struct { int p0; int p1; struct { unsigned pad:15; unsigned f:3; unsigned rest:14; } w; char pad[0x20]; W *r2c; unsigned r30; unsigned r34; } Node;
extern Node *fn_82B841E8();
extern Arg *fn_82ACA920();
extern unsigned fn_82AD1978();
extern void fn_82AC6860();

Node *fn_82AF06E8(void *p1, void *p2, char *p3, Arg *a, Arg *b, Arg *c)
{
  Node *n;
  n = fn_82B841E8(p1, *(void **)(p3 + 0x1c), 0, 0xc, 3, 4);
  n->r2c = (W *)fn_82AD1978(n, a->e != 0 ? fn_82ACA920(p1, a, a->d) : a);
  n->r30 = fn_82AD1978(n, b->e != 0 ? fn_82ACA920(p1, b, b->d) : b);
  n->r34 = fn_82AD1978(n, c->e != 0 ? fn_82ACA920(p1, c, c->d) : c);
  n->w.f = n->r2c->g ? n->r2c->g : 0;
  fn_82AC6860(p1, n, p2, p3);
  return n;
}
