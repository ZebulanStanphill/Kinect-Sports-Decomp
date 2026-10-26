typedef struct { char pad[0xc]; int a; int b; char pad2[0x24]; int parent; } Node;
typedef struct { int x; int y; unsigned int count; int z; int w; Node **nodes; } Obj;

int fn_8299D558(Obj *o)
{
  unsigned int i;
  for (i = 0; i < o->count; i++) {
    Node *n = o->nodes[i];
    if (n->parent != -1) {
      n->a = o->nodes[n->parent]->a;
      n->b = o->nodes[n->parent]->b;
    }
  }
  return 0;
}
