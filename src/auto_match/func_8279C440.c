void *memmove(void *d, const void *s, unsigned int n);
typedef struct { char d[0x30]; } Elem;
typedef struct { Elem *data; unsigned int count; } Array;
extern void fn_8279BAE0(Array *a, unsigned int n);
extern void fn_8279A7A8(Elem *e, const void *v);

void fn_8279C440(Array *a, unsigned int i, const void *v)
{
  Elem *e;
  fn_8279BAE0(a, a->count + 1);
  if (i < a->count - 1) {
    memmove(&a->data[i + 1], &a->data[i], (a->count - i - 1) * sizeof(Elem));
  }
  e = &a->data[i];
  if (e != 0) fn_8279A7A8(e, v);
}
