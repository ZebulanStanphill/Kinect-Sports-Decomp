typedef unsigned char bool;
typedef unsigned int uint;
typedef unsigned short ushort;

typedef struct Sub {
  uint flags;
  int f4;
  ushort f8;
  ushort fa;
} Sub;

typedef struct Node {
  struct Node *next;
  int f4;
  uint f8;
  uint fc;
  Sub sub;
  int f1c;
  uint f20;
  int f24;
  int f28;
  uint f2c;
} Node;

static bool eq2(Sub *a, Sub *b)
{
  return a->flags == b->flags && (!(a->flags & 0x20000) || a->f8 == b->f8);
}

static bool eq(Node *a, Node *b)
{
  return a->f4 == b->f4 && a->fc == b->fc && a->f8 == b->f8 && a->f2c == b->f2c &&
         a->f20 == b->f20 && eq2(&a->sub, &b->sub);
}

Node *fn_826F74F8(Node **param_1, int param_2, Node *param_3)
{
  Node *p;

  for (p = *(Node **)((char *)param_1 + param_2 * 0xc); p != 0; p = p->next) {
    if (eq(p, param_3)) {
      return p;
    }
  }
  return 0;
}
