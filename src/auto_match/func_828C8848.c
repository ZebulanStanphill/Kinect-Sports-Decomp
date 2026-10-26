typedef struct { unsigned int *items; unsigned int count; } L;
int fn_828C8848(L *l, unsigned int k)
{
  unsigned int i;
  for (i = 0; i < l->count; i += 2) {
    if (l->items[i] == k) return l->items[i + 1];
  }
  return 1;
}
