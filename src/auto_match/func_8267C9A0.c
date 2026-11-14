typedef struct Node_8267C9A0 {
  int unknown0;
  struct Node_8267C9A0 *next;
  struct Node_8267C9A0 *prev;
} Node_8267C9A0;

typedef struct List_8267C9A0 {
  char pad[0x20];
  Node_8267C9A0 *head;
  Node_8267C9A0 *tail;
} List_8267C9A0;

/* Unlinks `node` from the list if it is in it. */
void fn_8267C9A0(List_8267C9A0 *list, Node_8267C9A0 *node)
{
  Node_8267C9A0 *it;

  for (it = list->head; it != 0; it = it->next) {
    if (it == node) {
      if (node->prev != 0) {
        node->prev->next = node->next;
      } else {
        list->head = node->next;
      }
      if (node->next != 0) {
        node->next->prev = node->prev;
      } else {
        list->tail = node->prev;
      }
      return;
    }
  }
}
