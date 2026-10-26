typedef struct Node { struct Node *next, *prev; int pad[2]; unsigned int key; } Node;
typedef struct { char pad[0x2c]; Node head; } Obj;

static void insert_before(Node *pos, Node *n)
{
  Node *prev = pos->prev;
  n->next = pos;
  n->prev = prev;
  prev->next = n;
  pos->prev = n;
}

void fn_82A1FBD8(Obj *o, Node *n)
{
  Node *head = &o->head;
  Node *it = head->next;
  if (it != head && o->head.prev->key > n->key) {
    do {
      if (n->key <= it->key) {
        insert_before(it, n);
        return;
      }
      it = it->next;
    } while (it != head);
    return;
  }
  insert_before(head, n);
}
