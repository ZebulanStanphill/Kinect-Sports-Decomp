extern unsigned fn_82B841E8(void *, int, int, int, int, int);
extern int fn_82B4BAA8(void *, void *);
extern int fn_82AD1978(unsigned, int);
extern int fn_82ACA920(void *, int, int);

typedef struct { unsigned prev; unsigned tag; } Link_82B4CB88;
typedef struct { char pad[0xc]; int mc; unsigned m10; } Arg_82B4CB88;

static __forceinline void linkInsert(unsigned *h, unsigned r)
{
  Link_82B4CB88 *l = (Link_82B4CB88 *)((r & ~1u) + 0x24);
  l->prev = *h;
  *(unsigned *)(*h & ~1u) = (unsigned)l - 0x24;
  l->tag = ((unsigned)h - 0x24) | 1;
  *h = (unsigned)&l->tag;
}

unsigned fn_82B4CB88(char *param_1, void *param_2, Arg_82B4CB88 *param_3)
{
  unsigned n;
  int v;
  int a;

  n = fn_82B841E8(param_1, *(int *)(param_1 + 0x234), 0, 0x61, 2, 4);
  v = fn_82B4BAA8(param_1, param_2);
  *(int *)(n + 0x2c) = fn_82AD1978(n, v);
  *(int *)(n + 0x30) = fn_82AD1978(n, param_3->m10 != 0 ? fn_82ACA920(param_1, (int)param_3, param_3->mc) : (int)param_3);
  linkInsert((unsigned *)(*(int *)(param_1 + 0x234) + 0x18), n);
  return n;
}
