extern void *memcpy(void *, const void *, unsigned int);
typedef struct { int pad; unsigned int count; unsigned int *data; } Arr;
int fn_82BC0000(Arr *a, unsigned int v)
{
  unsigned int n = a->count;
  unsigned int i = 0;
  unsigned int *d = a->data;
  unsigned int *p;
  unsigned int *pc = &a->count;
  if (n != 0) {
    p = d;
    do {
      if (v == *p) {
        if (i < n) {
          unsigned int m = n - 1;
          a->count = m;
          p = d + i;
          memcpy(p, p + 1, (m - i) * 4);
        }
        return 1;
      }
      i++;
      p++;
    } while (i < *pc);
  }
  return 0;
}
