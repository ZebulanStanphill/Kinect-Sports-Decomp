extern int fn_82ACA920(int ctx, int node, int arg);
extern int fn_82AD1978(unsigned int obj, int node);
extern unsigned int fn_82B841E8(int ctx, int owner, int a, int b, int c, int d);

unsigned int fn_82B48490(int param_1, int param_2, int param_3)
{
  unsigned int obj;
  int a;
  int b;
  unsigned int *node;
  unsigned int *head;

  obj = fn_82B841E8(param_1, *(int *)(param_1 + 0x234), 0, 0x10, 2, 4);
  a = param_2;
  if (*(unsigned int *)(param_2 + 0x10) != 0) {
    a = fn_82ACA920(param_1, param_2, *(int *)(param_2 + 0xc));
  }
  *(int *)(obj + 0x2c) = fn_82AD1978(obj, a);
  if (*(unsigned int *)(param_3 + 0x10) != 0) {
    b = fn_82ACA920(param_1, param_3, *(int *)(param_3 + 0xc));
  } else {
    b = param_3;
  }
  *(int *)(obj + 0x30) = fn_82AD1978(obj, b);
  *(unsigned int *)(obj + 8) = *(unsigned int *)(obj + 8) & 0xfffe3fff | 0x4000;
  node = (unsigned int *)((obj & ~1u) + 0x24);
  head = (unsigned int *)(*(int *)(param_1 + 0x234) + 0x18);
  node[0] = *head;
  *(unsigned int *)(*head & ~1u) = (unsigned int)((char *)node - 0x24);
  node[1] = (unsigned int)((char *)head - 0x24) | 1;
  *head = (unsigned int)(node + 1);
  return obj;
}
