void *memmove(void *d, const void *s, unsigned int n);
typedef struct { char d[0xc]; } Elem;
typedef struct { Elem *data; unsigned int count; } Array;
extern void fn_82794758(Array *a, unsigned int n);
extern void fn_82790730(Elem *e, const void *v);

void fn_82794938(Array *a, unsigned int i, const void *v)
{
  Elem *e;
  fn_82794758(a, a->count + 1);
  if (i < a->count - 1) {
    memmove(&a->data[i + 1], &a->data[i], (a->count - i - 1) * sizeof(Elem));
  }
  e = &a->data[i];
  if (e != 0) fn_82790730(e, v);
}
