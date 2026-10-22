typedef struct Q { unsigned int n; unsigned int cap; int pad; int **blocks; } Q;
extern unsigned char fn_82681A78(Q *q, unsigned int b);

unsigned char fn_82682070(Q *q, int *v)
{
  unsigned int b;
  int *e;

  b = q->n >> 10;
  if (b < q->cap || fn_82681A78(q, b)) {
    e = q->blocks[b] + (q->n & 0x3ff);
    if (e == 0)
      return 0;
    *e = *v;
    q->n++;
    return 1;
  }
  return 0;
}
