typedef struct { unsigned int count; int *data; } Array_82FE4700;
extern void *memset(void *dst, int c, unsigned int n);

void fn_82FE4700(Array_82FE4700 *a)
{
  if (a->data == 0) {
    return;
  }
  memset(a->data, 0, a->count * sizeof(int));
}
