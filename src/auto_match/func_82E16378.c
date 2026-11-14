typedef struct {
  unsigned int value;  /* 0x00 */
  unsigned int id;     /* 0x04 */
} Elem_82E16378;
typedef struct {
  char pad[0x58];
  Elem_82E16378 *arr;  /* 0x58 */
  int count;           /* 0x5c */
} Self_82E16378;

static __forceinline int Decrement(int *p) { return --*p; }

static __forceinline void Copy4(void *dst, const void *src, int nwords)
{
  char *d = (char *)dst;
  const char *s = (const char *)src;
  int i;
  for (i = 0; i < nwords * 4; i += 4) *(unsigned int *)(d + i) = *(const unsigned int *)(s + i);
}

void fn_82E16378(Self_82E16378 *self, unsigned int id)
{
  int i, last;
  Elem_82E16378 *data;
  i = self->count - 1;
  if (i < 0) return;
  data = self->arr;
  for (; i >= 0; i--) {
    if (data[i].id == id) {
      last = Decrement(&self->count);
      if (last != i) {
        Copy4(&self->arr[i], &self->arr[last], 2);
      }
      return;
    }
  }
}
