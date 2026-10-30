typedef struct Node { struct Node *next; int pad[11]; int v; } Node;

int fn_82D1ED70(char *p)
{
  Node *n;
  int m = -1;
  for (n = *(Node **)(p + 0x2c); n != 0; n = n->next) {
    if (n->v > m) m = n->v;
  }
  return m + 1;
}
