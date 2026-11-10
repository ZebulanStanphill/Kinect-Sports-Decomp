typedef struct { int v[2]; } Elem_82FE55F0;
typedef struct { unsigned int count; Elem_82FE55F0 *data; } Array_82FE55F0;
extern void *memset(void *dst, int c, unsigned int n);

void fn_82FE55F0(Array_82FE55F0 *a)
{
  if (a->data == 0) {
    return;
  }
  memset(a->data, 0, a->count * sizeof(Elem_82FE55F0));
}
