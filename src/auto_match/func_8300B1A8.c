typedef struct Node_8300B1A8 {
  struct Node_8300B1A8 *next;
  unsigned int key;
} Node_8300B1A8;

typedef struct {
  Node_8300B1A8 *head;
} List_8300B1A8;

typedef struct {
  char pad[0x5c];
  List_8300B1A8 list;
} Owner_8300B1A8;

extern void fn_8300BBC0(List_8300B1A8 *list, Node_8300B1A8 *node, Node_8300B1A8 *prev);

int fn_8300B1A8(Owner_8300B1A8 *self, unsigned int key)
{
  List_8300B1A8 *list = &self->list;
  Node_8300B1A8 *node = list->head;
  Node_8300B1A8 *prev = 0;
  while (node != 0) {
    if (node->key == key) {
      fn_8300BBC0(list, node, prev);
      return 1;
    }
    prev = node;
    node = node->next;
  }
  return 1;
}
