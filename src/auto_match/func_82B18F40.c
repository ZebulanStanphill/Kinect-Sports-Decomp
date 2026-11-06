typedef struct Flags_82B18F40 {
  unsigned pad0 : 1;
  unsigned mark : 1;
  unsigned pad2 : 11;
  unsigned index : 14;
  unsigned bit : 5;
} Flags_82B18F40;

typedef struct Node_82B18F40 Node_82B18F40;

typedef struct Edge_82B18F40 {
  Node_82B18F40 *target;
  int f4;
  struct Edge_82B18F40 *next;
} Edge_82B18F40;

struct Node_82B18F40 {
  unsigned int prev;
  unsigned int next;
  int f8;
  Edge_82B18F40 *edges;
  char pad10[0x18];
  unsigned int *bits;
  int f2c;
  Flags_82B18F40 flags;
};

static Node_82B18F40 *First_82B18F40(Node_82B18F40 *list)
{
  if (list->next & 1) {
    return 0;
  }
  return (Node_82B18F40 *)list->next;
}

static Node_82B18F40 *Next_82B18F40(Node_82B18F40 *n)
{
  unsigned int p = ((Node_82B18F40 *)((unsigned int)n & ~1u))->next;
  if (p & 1) {
    return 0;
  }
  return (Node_82B18F40 *)p;
}

static int NotNull_82B18F40(Edge_82B18F40 *e)
{
  if (e) {
    return 1;
  }
  return 0;
}

void fn_82B18F40(Node_82B18F40 *list, unsigned char check)
{
  unsigned char changed;
  Node_82B18F40 *n;
  Edge_82B18F40 *e;

  do {
    changed = 0;
    for (n = First_82B18F40(list); n != 0; n = Next_82B18F40(n)) {
      if ((unsigned char)n->flags.mark) {
        for (e = n->edges; NotNull_82B18F40(e); e = e->next) {
          Node_82B18F40 *t = e->target;
          if (!(unsigned char)t->flags.mark &&
              (!check || (n->bits[t->flags.index + 1] & (1 << t->flags.bit)) == 0)) {
            t->flags.mark = 1;
            changed = 1;
          }
        }
      }
    }
  } while (changed);
}
