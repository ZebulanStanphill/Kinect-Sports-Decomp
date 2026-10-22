typedef struct Node Node;
typedef struct Iter { Node *node; } Iter;

typedef struct Tree {
  int f0;
  Node *head;
} Tree;

typedef struct Obj {
  int f0;
  int f4;
  Tree tree;
} Obj;

extern void *fn_82230110(void *key);
extern Iter *fn_824A2FC0(Iter *ret, Tree *tree, void *key);
extern void fn_82230300(void *key, int a, int b);
extern Iter *fn_824A2C00(Iter *ret, Tree *tree, Node *where);

void fn_824A2B88(Obj *o)
{
  Iter it;
  char key[32];
  fn_824A2FC0(&it, &o->tree, fn_82230110(key));
  fn_82230300(key, 1, 0);
  if (it.node != o->tree.head) {
    fn_824A2C00(&it, &o->tree, it.node);
  }
}
