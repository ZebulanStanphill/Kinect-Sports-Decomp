extern void fn_82BC6DC0(void *p, int flags);
extern void fn_82B7BEB0(void *heap, void *p);
typedef struct { unsigned int count; int a; void **items; int b, c; void *heap; } List;

void fn_82BC05A8(List *l)
{
  unsigned int i;
  for (i = 0; i < l->count; i++) {
    if (l->items[i] != 0) {
      void *p = l->items[i];
      if (p != 0) fn_82BC6DC0(p, 1);
    }
  }
  fn_82B7BEB0(l->heap, l->items);
}
