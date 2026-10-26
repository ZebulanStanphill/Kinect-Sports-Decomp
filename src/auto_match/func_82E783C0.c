typedef struct Node { int data[2]; struct Node *next; int x; } Node;
typedef struct Block { struct Block *next; Node nodes[16]; } Block;
typedef struct { Node *free; Block *block; int arg; Block first; } Pool;

void fn_82E783C0(Pool *p, int arg)
{
  int i;
  if (p->block != 0) {
    return;
  }
  p->arg = arg;
  p->block = &p->first;
  p->first.next = 0;
  for (i = 0; i < 16; i++) {
    Node *n = &p->block->nodes[i];
    n->next = p->free;
    p->free = n;
  }
}
