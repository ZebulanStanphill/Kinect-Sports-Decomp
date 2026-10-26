typedef struct Ops Ops;
struct Ops { int a; int b; int c; void (*fn)(Ops *o, int p2, int p3, int *p4, int *p5, __int64 *p6); };
typedef struct { int a; Ops *ops; } S;

void fn_82C114A0(S *s, int p2, int p3, int *p4, int *p5, __int64 *p6)
{
  *p4 = 0;
  *p5 = 0;
  *p6 = 0;
  s->ops->fn(s->ops, p2, p3, p4, p5, p6);
}
