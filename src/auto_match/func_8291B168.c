typedef struct Node_8291B168 { char pad[0x24]; struct Node_8291B168 *next; } Node_8291B168;
extern int fn_82918E10(Node_8291B168 *, int, int *, int, int);

static __forceinline int notNull(Node_8291B168 *p) { if (p) return 1; return 0; }
int fn_8291B168(int a, int b, unsigned c, int d)
{
  Node_8291B168 *p = (Node_8291B168 *)~c;
  int r;
  for (;;) {
    r = fn_82918E10(p, b, &d, 1, 0);
    if (r < 0) return r;
    p = p->next;
    if (!notNull(p)) break;
  }
  return 0;
}
