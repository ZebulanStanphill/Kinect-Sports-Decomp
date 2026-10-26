typedef struct Node { char pad[0x48]; struct List *a; struct List *b; } Node;
typedef struct List { int pad; int count; Node **items; } List;

Node *fn_83067950(void *param_1, List *list, List *other, int n)
{
  int i;
  for (i = 0; i < list->count; i++) {
    Node *e = list->items[i];
    List *o = e->b;
    if (list == o) {
      o = e->a;
    }
    if (o == other) {
      if (n == 0) {
        return e;
      }
      n--;
    }
  }
  return 0;
}
