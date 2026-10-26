extern void fn_826824B0(void *o);

typedef struct { void *a; void *b; unsigned char flags; } Pair;
typedef struct { int x, y; Pair pair; } S;

void fn_826A2A40(S *p)
{
  Pair *q = &p->pair;
  if ((q->flags & 2) == 0 && q->a != 0)
    fn_826824B0(q->a);
  q->a = 0;
  if ((q->flags & 1) == 0 && q->b != 0)
    fn_826824B0(q->b);
  q->b = 0;
}
