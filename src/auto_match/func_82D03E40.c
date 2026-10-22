typedef struct Node {
  struct Node *prev;
  struct Node *next;
  int pad8;
  int size;
} Node;

typedef struct {
  char pad0[0xa4];
  Node head;
  char padb4[0xc0 - 0xb4];
  int used;
} Obj;

extern int fn_82D02F08(Obj *o);

void fn_82D03E40(Obj *o, int *out)
{
  Node *n;
  int total = 0;

  for (n = o->head.next; n != &o->head; n = n->next)
    total += n->size;
  out[0] = total;
  out[1] = o->used;
  out[3] = total - o->used;
  out[5] = fn_82D02F08(o);
  out[4] = 0;
}
