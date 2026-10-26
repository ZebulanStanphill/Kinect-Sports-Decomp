typedef struct Node { int pad[3]; struct Node *next; unsigned int key; } Node;
typedef struct { int pad[4]; Node head; } List;
typedef struct { int pad[7]; List *list; } Arg;
extern void fn_82685698(void *self, Node *n);

int fn_826857F8(void *self, Arg *a, unsigned int key)
{
  List *l = a->list;
  Node *n;

  if (l != 0) {
    for (n = l->head.next; n != &l->head; n = n->next) {
      if (n->key == key) {
        fn_82685698(self, n);
        return 1;
      }
    }
  }
  return 0;
}
