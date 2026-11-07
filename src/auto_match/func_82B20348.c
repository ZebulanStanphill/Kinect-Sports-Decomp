extern int fn_82ABDD90(int obj, int kind, int a, int b);
extern int fn_82AC9F80(int obj, int node, int kind);
extern int fn_82AD18C0(int obj, int node, int flag);
extern void fn_82AD1978(int node, int value);
extern int fn_82B1B1B8(int obj, int src, int ext, int node);
extern int fn_82B841E8(int obj, int src, int ext, int kind, int a, int b);
extern int fn_82B8A3A0(int obj, int flag, float x, float y, float z, float w);

void fn_82B20348(int param_1, int param_2, int param_3, int param_4)
{
  int *p;
  int node;
  int item;
  int off;

  node = fn_82B8A3A0(param_1, 1, 0.0f, 0.0f, 0.0f, 0.0f);
  node = fn_82AD18C0(param_1, node, 0);
  node = fn_82B1B1B8(param_1, param_2, param_2 + 0x18, node);
  item = fn_82B841E8(param_1, param_2, param_2 + 0x20, 0x55, 0, 0);
  *(unsigned int *)(item + 8) |= 0x60000;
  fn_82AD1978(item, fn_82AC9F80(param_1, node, 7));
  off = fn_82ABDD90(param_1, 0x55, 0, 0);
  p = (int *)(off + (item - 0x14));
  p[0] = param_3;
  p[1] = *(int *)(param_4 + 4);
  p[4] |= 0x10;
  *(unsigned int *)(param_1 + 0x2c) |= 0x2000;
}
