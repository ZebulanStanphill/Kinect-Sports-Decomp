typedef struct Node_8291B3C0 { int pad[9]; struct Node_8291B3C0 *next; } Node_8291B3C0;
extern int fn_829199E0(Node_8291B3C0 *, int, int, int, int);


static int notNull(Node_8291B3C0 *p) { if (p) return 1; return 0; }
int fn_8291B3C0(int a, int b, unsigned c, int d)
{
  Node_8291B3C0 *p = (Node_8291B3C0 *)~c;
  int r;
  for (;;) {
    r = fn_829199E0(p, b, d, 1, 0);
    if (r < 0) return r;
    p = p->next;
    if (!notNull(p)) break;
  }
  return 0;
}
