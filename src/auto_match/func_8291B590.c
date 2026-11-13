typedef struct Node_8291B590 { int pad[9]; struct Node_8291B590 *next; } Node_8291B590;
extern int fn_8291AA40(Node_8291B590 *, int, int, int, int);


static int notNull(Node_8291B590 *p) { if (p) return 1; return 0; }
int fn_8291B590(int a, int b, unsigned c, int d, int e)
{
  Node_8291B590 *p = (Node_8291B590 *)~c;
  int r;
  for (;;) {
    r = fn_8291AA40(p, b, d, e, 0);
    if (r < 0) return r;
    p = p->next;
    if (!notNull(p)) break;
  }
  return 0;
}
