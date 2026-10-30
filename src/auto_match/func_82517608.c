typedef struct P_82517608 { unsigned a; unsigned b; } P_82517608;
typedef struct Q_82517608 { P_82517608 p; P_82517608 q; } Q_82517608;
static void SwapU(unsigned *x, unsigned *y) { unsigned t = *x; *x = *y; *y = t; }
void fn_82517608(Q_82517608 *self, P_82517608 *o1, P_82517608 *o2)
{
  P_82517608 *q;
  self->p.a = 0;
  self->p.b = 0;
  if (&self->p != o1) {
    SwapU(&self->p.b, &o1->b);
    SwapU(&self->p.a, &o1->a);
  }
  q = &self->q;
  q->a = 0;
  q->b = 0;
  if (q != o2) {
    SwapU(&q->b, &o2->b);
    SwapU(&q->a, &o2->a);
  }
}
