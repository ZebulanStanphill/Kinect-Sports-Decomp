typedef struct Node_8291B038 { int pad[9]; struct Node_8291B038 *next; } Node_8291B038;
extern int fn_82918760(Node_8291B038 *, int, int, int, int);


static int notNull(Node_8291B038 *p) { if (p) return 1; return 0; }
int fn_8291B038(int a, int b, unsigned c, int d, unsigned e)
{
  Node_8291B038 *p = (Node_8291B038 *)~c;
  int r;
  for (;;) {
    r = fn_82918760(p, b, d, e >> 2, 0);
    if (r < 0) return r;
    p = p->next;
    if (!notNull(p)) break;
  }
  return 0;
}
