typedef unsigned int uint;

extern int fn_82ACA920(int ctx, int node, int arg);
extern int fn_82AD1978(uint obj, int node);
extern uint fn_82B841E8(int ctx, int owner, int a, int b, int c, int d);

uint fn_82B48490(int param_1, int param_2, int param_3)
{
  uint obj;
  int a;
  int b;
  uint *node;
  uint *head;

  obj = fn_82B841E8(param_1, *(int *)(param_1 + 0x234), 0, 0x10, 2, 4);
  a = param_2;
  if (*(uint *)(param_2 + 0x10) != 0) {
    a = fn_82ACA920(param_1, param_2, *(int *)(param_2 + 0xc));
  }
  *(int *)(obj + 0x2c) = fn_82AD1978(obj, a);
  if (*(uint *)(param_3 + 0x10) != 0) {
    b = fn_82ACA920(param_1, param_3, *(int *)(param_3 + 0xc));
  } else {
    b = param_3;
  }
  *(int *)(obj + 0x30) = fn_82AD1978(obj, b);
  *(uint *)(obj + 8) = *(uint *)(obj + 8) & 0xfffe3fff | 0x4000;
  node = (uint *)((obj & ~1u) + 0x24);
  head = (uint *)(*(int *)(param_1 + 0x234) + 0x18);
  node[0] = *head;
  *(uint *)(*head & ~1u) = (uint)((char *)node - 0x24);
  node[1] = (uint)((char *)head - 0x24) | 1;
  *head = (uint)(node + 1);
  return obj;
}
