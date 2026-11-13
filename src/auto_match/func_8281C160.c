extern void *fn_8281BC98(void *ctx, unsigned int size);
extern void *memset(void *, int, unsigned int);
extern int lbl_8320A764;

void *fn_8281C160(void *ctx, unsigned int n, unsigned int size)
{
  void *p;
  lbl_8320A764++;
  if (size == 0) {
    p = fn_8281BC98(ctx, n);
    if (p)
      memset(p, 0, n);
    return p;
  } else {
    unsigned int total = n * size;
    p = fn_8281BC98(ctx, total);
    if (p)
      memset(p, 0, total);
    return p;
  }
}
