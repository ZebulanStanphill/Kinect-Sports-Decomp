typedef struct Node_8291B4D8 { int pad[9]; struct Node_8291B4D8 *next; } Node_8291B4D8;
extern int fn_8291A458(Node_8291B4D8 *, int, int, int, int);


static int notNull(Node_8291B4D8 *p) { if (p) return 1; return 0; }
int fn_8291B4D8(int a, int b, unsigned c, int d)
{
  Node_8291B4D8 *p = (Node_8291B4D8 *)~c;
  int r;
  for (;;) {
    r = fn_8291A458(p, b, d, 1, 0);
    if (r < 0) return r;
    p = p->next;
    if (!notNull(p)) break;
  }
  return 0;
}
