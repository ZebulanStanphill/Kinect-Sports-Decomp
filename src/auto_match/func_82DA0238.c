typedef unsigned __int64 ulonglong;
typedef struct Node_82DA0238 { unsigned short type; char pad[0x12]; struct Node_82DA0238 *next; } Node_82DA0238;
extern ulonglong fn_82DA0180(Node_82DA0238 *, unsigned, unsigned);
ulonglong fn_82DA0238(Node_82DA0238 *p, unsigned a, unsigned b)
{
  ulonglong r = 0;
  Node_82DA0238 *q = p;
  while (q->type >= 0x17) {
    r |= fn_82DA0180(q, a, b);
    q = q->next;
  }
  return r;
}
