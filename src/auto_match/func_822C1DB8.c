extern int fn_82529320();
typedef struct { int a; int b; } Pair;
typedef struct { int pad[3]; Pair p; } S;
extern int fn_822B7068(int a, int b);

void fn_822C1DB8(S *s)
{
  Pair *q = &s->p;
  fn_822B7068(q->a, q->b);
  fn_82529320(q->b, 0);
}
