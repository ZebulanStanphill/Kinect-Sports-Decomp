typedef struct { int heap; int a; int b; int c; } Node_82BC9078;
typedef struct { char pad[0xc]; char *ctx; } Self_82BC9078;
typedef struct { unsigned capacity; unsigned size; int **data; } List_82BC9078;
extern Node_82BC9078 *fn_82B7BD28(int heap, int size);
/* grows the list to hold index i and returns &l->data[i] */
extern int **fn_82BC0088(List_82BC9078 *l, unsigned i);

/* The list's element accessor: in range reads the slot, otherwise grows.
   Called with i == l->size the range test folds away, but the merged result
   keeps its own register (mr r11, r3 after the call). */
static __forceinline int **at_82BC9078(List_82BC9078 *l, unsigned i)
{
  int **e;
  if (i < l->size) e = &l->data[i];
  else e = fn_82BC0088(l, i);
  return e;
}

int fn_82BC9078(Self_82BC9078 *s, int a, int *b, int c, int ret, List_82BC9078 *l)
{
  int heap = *(int *)(s->ctx + 0x5b0);
  Node_82BC9078 *n = fn_82B7BD28(heap, 0x10);
  n->heap = heap;
  n->a = a;
  n->b = *b;
  n->c = c;
  *at_82BC9078(l, l->size) = &n->a;
  *b = -1;
  return ret;
}
