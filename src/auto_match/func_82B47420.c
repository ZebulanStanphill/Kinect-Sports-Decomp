extern void fn_82AD17B0(void *, int *);
extern int fn_82AD1978(int *, unsigned int);
extern unsigned int fn_82B471E8(void *, unsigned int, unsigned int);
extern int *fn_82B84350(void *, int, int, int);

void fn_82B47420(void *ctx, unsigned int p2, unsigned int p3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
  unsigned int v0, v1;
  int *node;
  int n;
  int k;

  n = 2;
  v0 = fn_82B471E8(ctx, p2, p3);
  v1 = fn_82B471E8(ctx, a4, a5);
  if (a6 != 0) {
    a6 = fn_82B471E8(ctx, a6, a7);
    n = 3;
  }
  if (a8 != 0) {
    a8 = fn_82B471E8(ctx, a8, a9);
    n = n + 1;
  }
  node = fn_82B84350(ctx, *(int *)((int)ctx + 0x234), *(int *)((int)ctx + 0x234) + 0x18, n);
  node[0xb] = fn_82AD1978(node, v0);
  node[0xc] = fn_82AD1978(node, v1);
  k = 2;
  if (a6 != 0) {
    node[0xd] = fn_82AD1978(node, a6);
    k = 3;
  }
  if (a8 != 0) {
    node[k + 0xb] = fn_82AD1978(node, a8);
  }
  fn_82AD17B0(ctx, node);
}
