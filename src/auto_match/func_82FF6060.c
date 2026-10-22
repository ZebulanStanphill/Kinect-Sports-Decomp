extern int fn_82FA5190();

typedef struct Node {
  struct Node *next;
} Node;

typedef struct {
  Node *head;
  Node *tail;
  Node *freeList;
  int blockCount;
  int f10;
  int count;
  Node *blocks;
  int heap;
} List;

void fn_82FF6060(List *list, Node *node, Node *prev)
{
  unsigned char external;

  if (node == list->head) {
    list->head = node->next;
  }
  else {
    prev->next = node->next;
  }
  if (node == list->tail) {
    list->tail = prev;
  }
  external = node < list->blocks || node >= list->blocks + list->blockCount * 2;
  if (external) {
    fn_82FA5190(list->heap, node);
  }
  else {
    node->next = list->freeList;
    list->freeList = node;
  }
  list->count--;
}
