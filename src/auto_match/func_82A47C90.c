typedef struct Node { int a; struct Node *next; } Node;
typedef struct { int hdr; Node node; } Item;
typedef struct { Node *free; Item *items; Item storage[8]; int pad; int a, b, c; int count; } Pool;

void fn_82A47C90(Pool *p)
{
  int i;
  p->count = 8;
  p->free = 0;
  p->a = 0;
  p->b = 0;
  p->c = 0;
  p->items = p->storage;
  p->storage[0].hdr = 0;
  for (i = 0; i < 8; i++) {
    Node *n = &p->items[i].node;
    n->next = p->free;
    p->free = n;
  }
}
