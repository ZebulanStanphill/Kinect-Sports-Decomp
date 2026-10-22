typedef struct Info {
  int pad0[4];
  int a10;
  int a14;
} Info;

typedef struct Node {
  int pad0;
  struct Node *next;
  int pad8;
  struct Node *child;
  struct Node *sibling;
  int pad14[3];
  Info *info;
  int value;
} Node;

typedef struct Ctx {
  int pad0[6];
  int a18;
  int a1c;
} Ctx;

typedef struct Visitor Visitor;
typedef struct {
  int pad0;
  void (*visit)(Visitor *self, Ctx *ctx, Node *node, int value, void *user);
} VisitorVtbl;
struct Visitor {
  VisitorVtbl *vtbl;
};

void fn_8268E140(unsigned int *shift, Node *node, Ctx *ctx, Visitor *v, void *user)
{
  Node *n;

  for (; node != 0; node = node->sibling) {
    fn_8268E140(shift, node->child, ctx, v, user);
    n = node;
    do {
      ctx->a18 = n->info->a14;
      ctx->a1c = n->info->a10;
      v->vtbl->visit(v, ctx, n, n->value << *shift, user);
      n = n->next;
    } while (n != node);
  }
}
