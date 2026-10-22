extern void *fn_8265C940(int, unsigned int);
extern void fn_8265C990(void *, unsigned int);

typedef struct Node {
  struct Node *next;
  int data;
} Node;

typedef struct {
  Node *head;
  int f4;
  Node *free;
  Node *last;
  int f10;
  int count;
} List;

List *fn_82E91718(List *l, int *err, int n)
{
  Node dummy;
  Node *node;
  Node *prev;
  Node *next;
  int i;

  prev = (Node *)&l->free;
  node = &dummy;
  i = 0;
  l->head = 0;
  l->f4 = 0;
  l->free = 0;
  l->last = 0;
  *err = 0;
  l->f10 = 0;
  l->count = n;
  for (; i < n; i++) {
    node = (Node *)fn_8265C940(8, 0x248c8000);
    if (node == 0) {
      prev = l->free;
      while (prev != 0) {
        next = prev->next;
        fn_8265C990(prev, 0x248c8000);
        prev = next;
      }
      prev = l->head;
      while (prev != 0) {
        next = prev->next;
        fn_8265C990(prev, 0x248c8000);
        prev = next;
      }
      *err = -100;
      return l;
    }
    node->data = 0;
    prev->next = node;
    prev = node;
  }
  l->last = node;
  node->next = 0;
  l->f4 = 0;
  l->head = 0;
  return l;
}
