typedef unsigned int uint;
extern uint fn_82AE6B08();

typedef struct {
  int f0;
  uint next;
  uint count;
  int fc;
  int data[1];
} Node;

typedef struct {
  int f0;
  uint first;
} Q;

typedef struct {
  char pad[0x9b4];
  Q *q;
} S;

int fn_82AE6CC0(S *p)
{
  Q *q = p->q;
  uint idx;
  uint n;
  if (q != 0 && (idx = fn_82AE6B08(q)) != 0xffffffff && (idx & 1) == 0) {
    n = q->first;
    idx = idx + 1;
    for (;;) {
      n = n & (((n & 1) == 0) ? -1 : 0);
      if (idx < ((Node *)n)->count) break;
      idx -= ((Node *)n)->count;
      n = ((Node *)(n & ~1))->next;
    }
    return ((Node *)n)->data[idx];
  }
  return 0;
}
