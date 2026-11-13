typedef struct Node_8291B108 { int pad[9]; struct Node_8291B108 *next; } Node_8291B108;
extern int fn_82918A68(Node_8291B108 *, int, int, int, int);


static int notNull(Node_8291B108 *p) { if (p) return 1; return 0; }
int fn_8291B108(int a, int b, unsigned c, int d, int e)
{
  Node_8291B108 *p = (Node_8291B108 *)~c;
  int r;
  for (;;) {
    r = fn_82918A68(p, b, d, e, 0);
    if (r < 0) return r;
    p = p->next;
    if (!notNull(p)) break;
  }
  return 0;
}
