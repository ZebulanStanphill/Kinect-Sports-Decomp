typedef struct { int first; int second; } Pair;
typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  Pair kv;
} Node;
typedef struct { int f0; Node *head; int size; } Map;
typedef struct { Node *node; } Iter;

extern Node *fn_8289EE00(Map *m);
extern Node *fn_828DF3F0(Map *m, int *key);
extern void fn_828DFA98(Iter *out, Map *m, Node *where, Node *nn);
extern unsigned char fn_828E0270(int *a, int *b);

int *fn_828DFCD0(Map *param_1, int *param_2)
{
  Node *n;
  Node *nn;
  Pair *p;
  int key;
  Iter it;

  n = fn_828DF3F0(param_1, param_2);
  if (n == param_1->head || fn_828E0270(param_2, &n->kv.first)) {
    key = *param_2;
    nn = fn_8289EE00(param_1);
    p = &nn->kv;
    if (p != 0) {
      p->first = key;
      p->second = 0;
    }
    fn_828DFA98(&it, param_1, n, nn);
    n = it.node;
  }
  return &n->kv.second;
}
