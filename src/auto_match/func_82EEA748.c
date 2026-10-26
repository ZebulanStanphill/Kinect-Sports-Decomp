typedef struct Node { int data; struct Node *next; } Node;
typedef struct Block { struct Block *next; Node nodes[8]; } Block;
typedef struct { Node *free; Block *block; int arg; Block first; } Pool;

void fn_82EEA748(Pool *p, int arg)
{
  int i;
  if (p->block != 0) {
    return;
  }
  p->arg = arg;
  p->block = &p->first;
  p->first.next = 0;
  for (i = 0; i < 8; i++) {
    Node *n = &p->block->nodes[i];
    n->next = p->free;
    p->free = n;
  }
}
