typedef struct Node_8291B238 { int pad[9]; struct Node_8291B238 *next; } Node_8291B238;
extern int fn_829191A0(Node_8291B238 *, int, float *, int, int);


static int notNull(Node_8291B238 *p) { if (p) return 1; return 0; }
int fn_8291B238(int a, int b, unsigned c, float d)
{
  Node_8291B238 *p = (Node_8291B238 *)~c;
  int r;
  for (;;) {
    r = fn_829191A0(p, b, &d, 1, 0);
    if (r < 0) return r;
    p = p->next;
    if (!notNull(p)) break;
  }
  return 0;
}
