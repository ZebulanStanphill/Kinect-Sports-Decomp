typedef struct Buf_82CE7EE0 { char *data; int len; unsigned cap; char inl[1]; } Buf_82CE7EE0;
typedef struct Svc_82CE7EE0 { char pad[0xc]; void *fc; } Svc_82CE7EE0;
extern Svc_82CE7EE0 *fn_82CE5410(void);
extern void fn_82CE6310(void *, Buf_82CE7EE0 *, int, int);

Buf_82CE7EE0 *fn_82CE7EE0(Buf_82CE7EE0 *b)
{
  int n;
  b->data = b->inl;
  b->cap = 0x80000020;
  b->len = 0;
  {
    void *h = fn_82CE5410()->fc;
    n = b->cap & 0x3fffffff;
    if (n < 1) {
      n = n * 2;
      if (n <= 1) n = 1;
      fn_82CE6310(h, b, n, 1);
    }
  }
  b->len = 1;
  *b->data = 0;
  *b->data = 0;
  return b;
}
