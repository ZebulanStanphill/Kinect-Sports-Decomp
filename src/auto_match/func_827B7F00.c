extern void fn_827B7AE0(void *, void *);

typedef struct Node_827B7F00 {
  struct Node_827B7F00 *n0;
  struct Node_827B7F00 *n1;
  int pad[6];
  unsigned short key;
} Node_827B7F00;

typedef struct {
  char pad[0x30];
  Node_827B7F00 *h0;
  Node_827B7F00 *h1;
} Obj_827B7F00;

void fn_827B7F00(Obj_827B7F00 *o, unsigned int key)
{
  Node_827B7F00 *n;
  Node_827B7F00 *next;
  Node_827B7F00 *head = (Node_827B7F00 *)&o->h0;

  for (n = o->h1; n != head; n = next) {
    next = n->n1;
    if ((n->key & 0xffff3fff) == key) {
      fn_827B7AE0(o, n);
      n->n0->n1 = n->n1;
      n->n1->n0 = n->n0;
      n->n1 = head->n1;
      n->n0 = head;
      head->n1->n0 = n;
      head->n1 = n;
    }
  }
}
