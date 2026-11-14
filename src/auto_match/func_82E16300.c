typedef struct {
  int value;
  unsigned int id;
} Elem_82E16300;
typedef struct {
  char pad[0x4c];
  Elem_82E16300 *arr;  /* 0x4c */
  int count;           /* 0x50 */
} Self_82E16300;

static __forceinline int Decrement(int *p) { return --*p; }

void fn_82E16300(Self_82E16300 *self, unsigned int id)
{
  int i, last;
  i = self->count - 1;
  if (i < 0) return;
  do {
    if (self->arr[i].id == id) {
      last = Decrement(&self->count);
      if (last != i) {
        unsigned int *d = (unsigned int *)&self->arr[i];
        unsigned int *s = (unsigned int *)&self->arr[last];
        int k = 0;
        do { d[k] = s[k]; k++; } while (k < 2);
      }
    }
    i--;
  } while (i >= 0);
}
