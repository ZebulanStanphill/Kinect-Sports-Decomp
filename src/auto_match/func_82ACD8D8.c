typedef struct Node_82ACD8D8 Node_82ACD8D8;
typedef struct Link_82ACD8D8 { unsigned prev; Node_82ACD8D8 *next; } Link_82ACD8D8;
struct Node_82ACD8D8 {
  char pad0[8];
  unsigned pad5 : 5;
  unsigned flag : 1;
  unsigned rest : 26;
  unsigned padc;
  unsigned pad6 : 6;
  unsigned flag2 : 1;
  unsigned rest2 : 25;
  char pad14[0x10];
  Link_82ACD8D8 link;
};
typedef struct Head_82ACD8D8 { unsigned f0; Node_82ACD8D8 *first; } Head_82ACD8D8;
typedef struct Aux_82ACD8D8 { char pad[0x10]; unsigned f10; } Aux_82ACD8D8;
typedef struct Owner_82ACD8D8 {
  Head_82ACD8D8 *head;
  char pad4[0x34];
  Aux_82ACD8D8 *f38;
  Node_82ACD8D8 *f3c;
  unsigned f40;
  unsigned f44;
  unsigned char f48;
  unsigned char f49;
} Owner_82ACD8D8;
typedef struct Src_82ACD8D8 { char pad[0xc]; Node_82ACD8D8 *f0c; Node_82ACD8D8 *f10; unsigned f14; } Src_82ACD8D8;
extern void fn_82ACC5D8(Owner_82ACD8D8 *, Node_82ACD8D8 *, int);
extern Node_82ACD8D8 *fn_82ACD310(Owner_82ACD8D8 *, unsigned, Node_82ACD8D8 *);

#define NODE(p) ((Node_82ACD8D8 *)((unsigned)(p) & 0xfffffffe))

static __inline Node_82ACD8D8 *Clean_82ACD8D8(Node_82ACD8D8 *x)
{
  return ((unsigned)x & 1) ? 0 : x;
}

static __inline void Unlink_82ACD8D8(Link_82ACD8D8 *l)
{
  NODE(l->next)->link.prev = l->prev;
  *(Node_82ACD8D8 **)(l->prev & 0xfffffffe) = l->next;
}

void fn_82ACD8D8(Owner_82ACD8D8 *o, Src_82ACD8D8 *s)
{
  Node_82ACD8D8 *end = s->f10;
  Node_82ACD8D8 *cur, *next;
  if (o->f3c != 0)
    cur = NODE(o->f3c)->link.next;
  else
    cur = o->head->first;
  cur = Clean_82ACD8D8(cur);
  while (cur != end) {
    Node_82ACD8D8 *n = NODE(cur);
    next = Clean_82ACD8D8(n->link.next);
    fn_82ACC5D8(o, cur, 1);
    if ((unsigned char)cur->flag != 0) {
      Unlink_82ACD8D8(&n->link);
      cur->flag2 = 0;
    }
    cur = next;
  }
  o->f3c = s->f0c;
  o->f38->f10 = s->f14;
  if (o->f48 != 0 && o->f49 == 0 && fn_82ACD310(o, o->f44, o->f3c) == o->f3c)
    o->f48 = 0;
}
