typedef struct Node_82AEA430 Node_82AEA430;
typedef struct Link_82AEA430 { Node_82AEA430 **prev; Node_82AEA430 *next; } Link_82AEA430;
struct Node_82AEA430 {
  char pad0[8];
  unsigned pad18 : 18;
  unsigned kind : 7;
  unsigned low : 7;
  char padc[8];
  unsigned f14;
  char pad18_[0xc];
  Link_82AEA430 link;
};

#define NODE(p) ((Node_82AEA430 *)((unsigned)(p) & 0xfffffffe))

static __inline Node_82AEA430 *Step_82AEA430(Node_82AEA430 *cur, unsigned lo, unsigned hi)
{
  Node_82AEA430 *n;
  unsigned char ok;
  if (cur->kind < lo || cur->kind > hi)
    ok = 0;
  else
    ok = 1;
  if (ok) {
    n = NODE(cur)->link.next;
    if (((unsigned)n & 1) == 0 && n != 0 && ((n->f14 ^ cur->f14) & 0x1fff) == 0)
      cur = n;
  }
  return cur;
}

static __inline void Insert_82AEA430(Link_82AEA430 *la, Link_82AEA430 *lb)
{
  lb->next = la->next;
  NODE(la->next)->link.prev = &lb->next;
  lb->prev = &la->next;
  la->next = (Node_82AEA430 *)((char *)lb - 0x24);
}

void fn_82AEA430(Node_82AEA430 **pp, Node_82AEA430 *other)
{
  Node_82AEA430 *a = *pp;
  a = Step_82AEA430(a, 1, 0x1f);
  a = Step_82AEA430(a, 0x20, 0x52);
  Insert_82AEA430(&NODE(a)->link, &NODE(other)->link);
}
