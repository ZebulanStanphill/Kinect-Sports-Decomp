typedef struct Node_82E2E920 {
  unsigned short key;
  unsigned int val;
  struct Node_82E2E920 *next;
  struct Node_82E2E920 *prev;
} Node_82E2E920;

typedef struct List_82E2E920 {
  Node_82E2E920 *head;
  Node_82E2E920 *tail;
  int pad8;
  int count;
  int alloc;
} List_82E2E920;

extern int fn_82E2DD28(int *alloc, Node_82E2E920 **out);

int fn_82E2E920(List_82E2E920 *list, unsigned short *key, unsigned int *val)
{
  Node_82E2E920 *slot;
  Node_82E2E920 *node;
  Node_82E2E920 *cur;

  if (fn_82E2DD28(&list->alloc, &slot) < 0) {
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
