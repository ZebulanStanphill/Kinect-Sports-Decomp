extern int fn_82A1BBE8(int, void *, int);
extern int fn_82A371C0(void *, int);
extern int fn_82A37600(void *, int);
extern int fn_82A37F58(void *, int);

typedef struct { int pad0; int v4; } Sub_82A34310;
typedef struct { int pad0; Sub_82A34310 *p4; int pad8, padc, pad10, v14, v18, v1c; unsigned v20; } Arg_82A34310;

typedef struct { int lo; int hi; } Range_82A34310;
static void Range_init(Range_82A34310 *r) { r->lo = 0; r->hi = 0; }

int fn_82A34310(char *param_1, Arg_82A34310 *param_2)
{
  int a, c, d, i;
  unsigned b;
  struct { int first; int arr[2]; } s;
  s.first = 0;
  for (i = 0; i < 2; i++) s.arr[i] = 0;
  s.arr[0] = param_2->p4 ? param_2->p4->v4 : 0x80000;
  a = fn_82A37F58(param_1 + 0x50, param_2->v1c);
  b = param_2->v20;
  c = fn_82A37600(param_1 + 0xc4, param_2->v18);
  d = fn_82A371C0(param_1 + 0x10c, param_2->v14);
  return fn_82A1BBE8(1, &s, 0x80000000) + d + c + b + a;
}
