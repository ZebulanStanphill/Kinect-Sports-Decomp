typedef struct Node { int data[3]; struct Node *next; int x[2]; } Node;
typedef struct Block { struct Block *next; int pad; Node nodes[16]; } Block;
typedef struct { Node *free; Block *block; int arg; Block first; } Pool;

void fn_82E74190(Pool *p, int arg)
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
