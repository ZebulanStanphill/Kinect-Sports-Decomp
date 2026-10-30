typedef struct Node_83034268 { struct Node_83034268 *next; int key; } Node_83034268;
typedef struct List_83034268 {
  Node_83034268 *head; Node_83034268 *tail; Node_83034268 *free; int f0c, f10; int count;
} List_83034268;
extern void fn_83032D88(void *key);

void fn_83034268(List_83034268 *l, void **key)
{
  Node_83034268 *head = l->head;
  Node_83034268 *prev = 0;
  Node_83034268 *n = head;
  if (head != 0) {
    do {
      if (n->key == (int)*key) {
        if (n == head) l->head = n->next;
        else prev->next = n->next;
        if (n == l->tail) l->tail = prev;
        n->next = l->free;
        l->free = n;
        l->count--;
        break;
      }
      prev = n;
      n = n->next;
    } while (n != 0);
  }
  if (*key != 0) {
    fn_83032D88(*key);
    *key = 0;
  }
}
