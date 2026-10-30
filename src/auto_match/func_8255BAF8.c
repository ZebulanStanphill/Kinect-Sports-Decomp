extern void fn_822315A0(unsigned int);
extern void fn_8265CA20(void *);
typedef struct Key_8255BAF8 { int f0; unsigned int key; } Key;
typedef struct Node_8255BAF8 { struct Node_8255BAF8 *next; struct Node_8255BAF8 *prev; Key *k; unsigned int f0c; } Node;
typedef struct List_8255BAF8 { Node *head; int size; } List;
typedef struct Self_8255BAF8 { int f0; List l; } Self;
void fn_8255BAF8(Self *s, unsigned int key)
{
  List *l = &s->l;
  Node *head = l->head;
  Node *n = head->next;
  while (n != head && n->k->key != key) n = n->next;
  if (n != s->l.head) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
    if (n->f0c != 0) fn_822315A0(n->f0c);
    fn_8265CA20(n);
    l->size = l->size - 1;
  }
}
