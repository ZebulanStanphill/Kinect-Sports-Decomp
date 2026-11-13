typedef struct Node { unsigned k; unsigned v; struct Node *next; struct Node *chain; } Node;
typedef struct { int pad; Node *head; } List;
extern void *fn_8265C9E0(int);
extern Node *fn_82E1D978(List *, unsigned);
extern unsigned fn_82E1F7F0(void *);

void fn_82E1E0E8(List *l, void *a, void *b)
{
  unsigned k = fn_82E1F7F0(a);
  unsigned v = fn_82E1F7F0(b);
  Node *f = fn_82E1D978(l, k);
  Node *n;
  Node *mem;
  if (f == 0) {
    mem = (Node *)fn_8265C9E0(0x10);
    if (mem != 0) {
      mem->k = 0;
      mem->v = 0;
      mem->next = 0;
      mem->chain = 0;
      n = mem;
    } else n = 0;
    n->k = k;
    n->v = v;
    n->next = l->head;
    n->chain = 0;
    l->head = n;
  } else {
    mem = (Node *)fn_8265C9E0(0x10);
    if (mem != 0) {
      mem->k = 0;
      mem->v = 0;
      mem->next = 0;
      mem->chain = 0;
      n = mem;
    } else n = 0;
    while (f->chain != 0) f = f->chain;
    f->k = k;
    n->v = v;
    f->chain = n;
  }
}
