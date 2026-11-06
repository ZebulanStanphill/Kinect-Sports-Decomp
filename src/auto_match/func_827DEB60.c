typedef struct Node_827DEB60 { int a; int b; struct Node_827DEB60 *next; } Node_827DEB60;

static __forceinline unsigned char nn(Node_827DEB60 *q) { if (q != 0) return 1; return 0; }

unsigned char fn_827DEB60(Node_827DEB60 *p)
{
  if (nn(p->next)) {
    return p->b == p->next->b;
  }
  return 1;
}
