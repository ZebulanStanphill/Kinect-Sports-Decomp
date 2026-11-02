typedef struct { unsigned int pad : 4; unsigned int v : 3; unsigned int rest : 25; } Src_82B4D170;
typedef struct { unsigned int pad : 15; unsigned int v : 3; unsigned int rest : 14; } Dst_82B4D170;
extern unsigned int fn_82AD17B0(int, int);
extern unsigned int fn_82AD1978(unsigned int, unsigned int);
extern unsigned int fn_82B4BAA8(int, __int64 *);
extern unsigned int fn_82B841E8(int, int, int, int, int, int);

unsigned int fn_82B4D170(int ctx, int a2, __int64 a3)
{
  unsigned int obj;
  unsigned int *l;
  unsigned int *head;
  int h;

  obj = fn_82B841E8(ctx, *(int *)(ctx + 0x234), 0, 1, 2, 4);
  *(unsigned int *)(obj + 0x2c) = fn_82AD1978(obj, fn_82AD17B0(ctx, a2));
  *(unsigned int *)(obj + 0x30) = fn_82AD1978(obj, fn_82B4BAA8(ctx, &a3));
  ((Dst_82B4D170 *)(obj + 8))->v = (*(Src_82B4D170 **)(obj + 0x2c))->v ? (*(Src_82B4D170 **)(obj + 0x2c))->v : 0;
  h = *(int *)(ctx + 0x234);
  head = (unsigned int *)(h + 0x18);
  l = (unsigned int *)((obj & 0xfffffffe) + 0x24);
  l[0] = *head;
  *(unsigned int *)(*head & 0xfffffffe) = (unsigned int)l - 0x24;
  l[1] = ((unsigned int)head - 0x24) | 1;
  *head = (unsigned int)&l[1];
  return obj;
}
