typedef struct Node_82E74598 {
  unsigned __int64 key;
  unsigned int val;
  struct Node_82E74598 *next;
  struct Node_82E74598 *prev;
} Node_82E74598;

typedef struct List_82E74598 {
  Node_82E74598 *head;
  Node_82E74598 *tail;
  int pad8;
  int count;
  int alloc;
} List_82E74598;

extern int fn_82E741E0(int *alloc, Node_82E74598 **out);

int fn_82E74598(List_82E74598 *list, unsigned __int64 *key, unsigned int *val)
{
  Node_82E74598 *slot;
  Node_82E74598 *node;
  Node_82E74598 *cur;

  if (fn_82E741E0(&list->alloc, &slot) < 0) {
    return 0;
  }
  node = slot;
  node->key = *key;
  node->val = *val;
  node->next = 0;
  node->prev = 0;
  cur = list->head;
  if (cur == 0) {
    list->head = node;
  } else {
    do {
      if (cur->key > *key) {
        node->next = cur;
        node->prev = cur->prev;
        if (cur->prev != 0) {
          cur->prev->next = node;
        }
        cur->prev = node;
        if (cur == list->head) {
          list->head = node;
        }
        goto done;
      }
      cur = cur->next;
    } while (cur != 0);
    node->prev = list->tail;
    list->tail->next = node;
  }
  list->tail = node;
done:
  list->count = list->count + 1;
  return 1;
}
