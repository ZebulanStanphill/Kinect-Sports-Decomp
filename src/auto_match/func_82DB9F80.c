typedef struct { int *data; int size; unsigned int cap; } Vec_82DB9F80;
extern int fn_82CE6310(int, Vec_82DB9F80 *, int, int);
extern int fn_82CF6B28(int *, int *, int);

void fn_82DB9F80(Vec_82DB9F80 *v, int ctx, int pos, int rem, int *src, int n)
{
  int size = v->size;
  int cap = v->cap & 0x3fffffff;
  int newsize = size - rem + n;
  int cnt = size - pos - rem;
  int *d; int nc;
  if (cap < newsize) { fn_82CE6310(ctx, v, (newsize < cap * 2) ? cap * 2 : newsize, 4); }
  fn_82CF6B28(v->data + pos + n, v->data + pos + rem, cnt * 4);
  d = v->data + pos;
  if (n > 0) {
    int k = n;
    int off = (char *)src - (char *)d;
    do { *d = *(int *)((char *)d + off); d++; k--; } while (k != 0);
  }
  v->size = newsize;
}
