typedef struct Node {
  struct Node *next;
  int f4, f8, fc;
  struct Node *left;
  struct Node *right;
} Node;
typedef struct Pool { int f0, f4, f8; Node *free; } Pool;
typedef struct Tree {
  char pad[0x64];
  Pool pool;
  char pad2[0x84 - 0x74];
  int sub;
} Tree;
extern void fn_827B6CF8(void *a, Node *n);

void fn_827B7A60(Tree *t, Node *n)
{
  Pool *pool;
  if (n != 0) {
    fn_827B7A60(t, n->left);
    fn_827B7A60(t, n->right);
    if (n->next != 0) {
      fn_827B6CF8(&t->sub, n);
    }
    pool = &t->pool;
    n->next = 0;
    n->next = pool->free;
    pool->free = n;
  }
}
