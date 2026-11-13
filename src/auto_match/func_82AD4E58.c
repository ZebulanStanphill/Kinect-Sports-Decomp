extern unsigned char *fn_82B42C70(int a, int b, int c, int d, int e, int f);
extern unsigned int fn_82B841E8(int a, unsigned char *b, int c, int d, int e, int f);
extern int fn_82AD18C0(int a, int b, int c);
extern int fn_82AD1978(unsigned int node, int r);
extern void fn_82AD2128(unsigned int node, int one, unsigned int child, int a);

unsigned char *fn_82AD4E58(int p1, int p2, int p3, int p4, int p5, int p6)
{
  unsigned char *obj;
  unsigned int node;
  unsigned int *tail;
  unsigned int *link;
  unsigned int child;

  obj = fn_82B42C70(p1, p2, p3, 1, p4, 1);
  node = fn_82B841E8(p1, obj, 0, p5, 1, 1);
  *(unsigned int *)(node + 8) |= 0x40;
  *(int *)(node + 0x2c) = fn_82AD1978(node, fn_82AD18C0(p1, p6, 0));
  tail = (unsigned int *)(obj + 0x20);
  link = (unsigned int *)((node & ~1u) + 0x24);
  link[0] = *tail;
  *(unsigned int *)(*tail & ~1u) = (unsigned int)link - 0x24;
  link[1] = ((unsigned int)tail - 0x24) | 1;
  *tail = (unsigned int)(link + 1);
  child = *(unsigned int *)(obj + 0x60);
  if (child != 0) {
    fn_82AD2128(node, 1, child, p1);
  }
  *(unsigned int *)(obj + 0x60) = node;
  *(unsigned int *)(node + 8) |= 0x2000000;
  return obj;
}
