extern void fn_8265CA20(void *);

typedef struct { void *p; int a; int b; } Item_82883EE0;
typedef struct {
  int pad0;
  Item_82883EE0 **buf;
  unsigned cap;
  unsigned head;
  unsigned count;
} Q_82883EE0;

void fn_82883EE0(Q_82883EE0 *q0)
{
  Q_82883EE0 *q = q0;
  Item_82883EE0 *it;
  unsigned idx;
  unsigned i;
  unsigned n;
  unsigned *pc = &q->count;
  while (*pc != 0) {
    if (q->count != 0) {
      idx = q->count + q->head - 1;
      if (q->cap <= idx) idx = idx - q->cap;
      it = q->buf[idx];
      if (it->p != 0) fn_8265CA20(it->p);
      it->p = 0;
      it->a = 0;
      it->b = 0;
      q->count = q->count - 1;
      if (q->count == 0) q->head = 0;
    }
  }
  n = q->cap;
  if (n != 0) {
    i = n * 4;
    do {
      i -= 4;
      n--;
      if (*(Item_82883EE0 **)((char *)q->buf + i) != 0) fn_8265CA20(*(Item_82883EE0 **)((char *)q->buf + i));
    } while (n != 0);
  }
  if (q->buf != 0) fn_8265CA20(q->buf);
  q->cap = 0;
  q->buf = 0;
}
