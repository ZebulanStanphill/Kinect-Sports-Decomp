typedef struct Src {
  unsigned int pad : 4;
  unsigned int f : 3;
  unsigned int rest : 25;
} Src;

typedef struct Node {
  int pad0[2];
  unsigned int pad8 : 15;
  unsigned int f : 3;
  unsigned int rest8 : 14;
  int padc[8];
  Src *a;
  int b;
  int c;
} Node;

typedef struct Arg {
  int pad[3];
  int c;
  void *p;
} Arg;

typedef struct P3 {
  int pad[7];
  int x1c;
} P3;

extern void fn_82AC6860(void *ctx, Node *n, int p2, P3 *p3);
extern int fn_82ACA920(void *ctx, Arg *a, int c);
extern int fn_82AD17B0(void *ctx, int v);
extern int fn_82AD1978(Node *n, int v);
extern Node *fn_82B841E8(void *ctx, int a, int b, int c, int d, int e);

Node *fn_82B1C198(void *ctx, int p2, P3 *p3, Arg *p4, int p5, int p6)
{
  Node *n;
  int v;

  n = fn_82B841E8(ctx, p3->x1c, 0, 0xd, 3, 4);
  if (p4->p != 0) {
    v = fn_82ACA920(ctx, p4, p4->c);
  } else {
    v = (int)p4;
  }
  n->a = (Src *)fn_82AD1978(n, v);
  n->b = fn_82AD1978(n, fn_82AD17B0(ctx, p5));
  n->c = fn_82AD1978(n, fn_82AD17B0(ctx, p6));
  n->f = n->a->f ? n->a->f : 0;
  fn_82AC6860(ctx, n, p2, p3);
  return n;
}
