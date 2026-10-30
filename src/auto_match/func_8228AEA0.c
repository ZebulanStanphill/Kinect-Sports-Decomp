extern void fn_82278950(int p);
extern void fn_82289670(void *o, int a);
extern void fn_8228A728(void *buf, void *o, int a, int b, void *x, void *y);
extern void fn_8229E090(int p, int a, int b);
extern int fn_82484768(int p);

typedef struct { int b; int a; } Pair_8228AEA0;

void fn_8228AEA0(int param_1, char *o)
{
  Pair_8228AEA0 pr;
  char buf[1008];
  int v;

  if (param_1 == 2) {
    *(int *)(o + 0x11f8) = 0;
  } else {
    if (param_1 == 0) {
      int *q = *(int **)(o + 0x740);
      int qa = *(int *)((char *)q + 0x8c4);
      int qb = *(int *)((char *)q + 0x8c8);
      pr.b = qb;
      pr.a = qa;
      fn_82289670(o, 2);
      {
        int p = *(int *)(o + 0x64c);
        *(int *)(o + 0x728) = 4;
        *(int *)(p + 0xb4) = 0;
        fn_82278950(*(int *)(p + 0xb0));
      }
      *(int *)(o + 0x768) = 4;
      fn_8228A728(buf, o, 2, fn_82484768(*(int *)(o + 0x11f0)), &pr.a, &pr.b);
      v = 7;
    } else {
      v = 1;
    }
    *(int *)(o + 0x604) = v;
    fn_8229E090(*(int *)(o + 0x11f8), 0, 1);
    *(int *)(o + 0x11f8) = 0;
  }
}
