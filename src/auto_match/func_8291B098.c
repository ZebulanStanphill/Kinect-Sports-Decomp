typedef struct Node_8291B098 { int pad[9]; struct Node_8291B098 *next; } Node_8291B098;
extern int fn_82918A68(Node_8291B098 *, int, unsigned int *, int, int);


static int notNull(Node_8291B098 *p) { if (p) return 1; return 0; }
int fn_8291B098(int a, int b, unsigned c, unsigned d)
{
  Node_8291B098 *p = (Node_8291B098 *)~c;
  int r;
  for (;;) {
    r = fn_82918A68(p, b, &d, 1, 0);
    if (r < 0) return r;
    p = p->next;
    if (!notNull(p)) break;
  }
  return 0;
}
