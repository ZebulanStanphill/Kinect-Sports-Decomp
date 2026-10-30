typedef struct Node_82B1A590 { char pad[0xc]; struct Node_82B1A590 *next; } Node_82B1A590;
typedef struct Obj_82B1A590 { char pad[0x5c]; Node_82B1A590 *slots[1]; } Obj_82B1A590;
extern Node_82B1A590 *fn_82AD1AC8(Node_82B1A590 *, int);
extern void fn_82AD2128(Node_82B1A590 *, int, Node_82B1A590 *, unsigned long long);

void fn_82B1A590(Obj_82B1A590 *a, int idx, Obj_82B1A590 *b, unsigned long long p4)
{
  Node_82B1A590 *n = b->slots[idx];
  if (n != 0) {
    Node_82B1A590 *old = a->slots[idx];
    if (old != 0) {
      Node_82B1A590 *cur = n;
      Node_82B1A590 *t;
      while ((t = fn_82AD1AC8(cur, idx)) != 0) {
        cur = t->next;
      }
      fn_82AD2128(cur, idx, old, p4);
    }
    a->slots[idx] = n;
  }
}
