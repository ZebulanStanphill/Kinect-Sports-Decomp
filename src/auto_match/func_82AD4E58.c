typedef unsigned int uint;

extern unsigned char *fn_82B42C70(int a, int b, int c, int d, int e, int f);
extern uint fn_82B841E8(int a, unsigned char *b, int c, int d, int e, int f);
extern int fn_82AD18C0(int a, int b, int c);
extern int fn_82AD1978(uint node, int r);
extern void fn_82AD2128(uint node, int one, uint child, int a);

unsigned char *fn_82AD4E58(int p1, int p2, int p3, int p4, int p5, int p6)
{
  unsigned char *obj;
  uint node;
  uint *tail;
  uint *link;
  uint child;

  obj = fn_82B42C70(p1, p2, p3, 1, p4, 1);
  node = fn_82B841E8(p1, obj, 0, p5, 1, 1);
  *(uint *)(node + 8) |= 0x40;
  *(int *)(node + 0x2c) = fn_82AD1978(node, fn_82AD18C0(p1, p6, 0));
  tail = (uint *)(obj + 0x20);
  link = (uint *)((node & ~1u) + 0x24);
  link[0] = *tail;
  *(uint *)(*tail & ~1u) = (uint)link - 0x24;
  link[1] = ((uint)tail - 0x24) | 1;
  *tail = (uint)(link + 1);
  child = *(uint *)(obj + 0x60);
  if (child != 0) {
    fn_82AD2128(node, 1, child, p1);
  }
  *(uint *)(obj + 0x60) = node;
  *(uint *)(node + 8) |= 0x2000000;
  return obj;
}
