typedef struct { int w[12]; } DescA_82C1C418;
typedef struct { int w[29]; } DescB_82C1C418;
extern void fn_82A70AA8(DescA_82C1C418 *);
extern void fn_82A70AF0(void);
extern void fn_82A70BF8(void *);
extern int fn_82C37FA8(void *, int, DescA_82C1C418 *, DescB_82C1C418 *);
extern void *fn_82C2B580(int);
extern void fn_82C2B590(void *);
extern void fn_82C37A98(DescB_82C1C418 *);

int fn_82C1C418(int *p, int flag)
{
  int ctx = *p;
  int hr = 0;
  DescA_82C1C418 a;
  DescB_82C1C418 b;
  void *mem;
  int v;
  if (flag != 0 && *(int *)(ctx + 0x3c) >= 3 && p[0x76] == 0) {
    fn_82A70AA8(&a);
    a.w[11] = ctx;
    a.w[1] = 3;
    a.w[0] = 3;
    a.w[6] = 1;
    a.w[4] = p[0x7a];
    a.w[2] = p[0x79];
    a.w[7] = *(int *)(ctx + 0x1c4);
    if (a.w[7] >= p[0x54])
      a.w[7] = p[0x54];
    a.w[8] = *(unsigned short *)(ctx + 0x22);
    a.w[9] = *(int *)(ctx + 0x58);
    a.w[10] = *(unsigned short *)(ctx + 0x6e);
    fn_82C37A98(&b);
    b.w[11] = *(int *)(ctx + 0x270);
    b.w[4] = p[0x7c];
    b.w[6] = p[0x7b];
    b.w[2] = 1;
    b.w[1] = 3;
    b.w[0] = 3;
    b.w[28] = 1;
    if (*(void **)(ctx + 0x238) != 0) {
      fn_82A70BF8(*(void **)(ctx + 0x238));
      fn_82C2B590(*(void **)(ctx + 0x238));
      *(void **)(ctx + 0x238) = 0;
    }
    mem = fn_82C2B580(0x130);
    *(void **)(ctx + 0x238) = mem;
    if (mem == 0) {
      hr = 0x8007000e;
    } else {
      fn_82A70AF0();
      hr = fn_82C37FA8(*(void **)(ctx + 0x238), 0, &a, &b);
      if (hr >= 0)
        p[0x76] = 1;
    }
  }
  return hr;
}
